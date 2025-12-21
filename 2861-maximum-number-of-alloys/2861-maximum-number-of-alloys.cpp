class Solution {
public:
    bool check(int n,int k,int budget,vector<vector<int>>& composition,vector<int>& stock,vector<int>& cost, long long mid,vector<int>& comp){
        long long cst=0;
        for(int i=0;i<n;i++){
            cst+=max((mid*comp[i]-stock[i]),0ll)*cost[i];
        }
        return cst<=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        long long ans=0;
        for(auto comp:composition){
            long long l=0,r=1e12,res=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(check(n,k,budget,composition,stock,cost,mid,comp)){
                    res=mid;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            ans=max(ans,res);
        }
        return ans;
    }
};