class Solution {
public:
    bool check(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost,long long mid,vector<int>& comp){
        long long totalCost=0;
        for(int i=0;i<n;i++){
            totalCost+=max(comp[i]*mid-stock[i],0ll)*cost[i];
        }
        return totalCost<=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        long long ans=0;
        for(auto it : composition){
            long long i=0,j=1e12,res=0;
            while(i<=j){
                int mid=(i+j)/2;
                if(check(n,k,budget,composition,stock,cost,mid,it)){
                    res=mid;
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            ans=max(ans,res);
        }
        return ans;
    }
};