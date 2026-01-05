class Solution {
public:
    bool check(int n, int k, int budget, vector<int>& comp, vector<int>& stock, vector<int>& cost,long long mid){
        long long maxBudget=0;
        for(int i=0;i<n;i++){
            maxBudget+=(max(mid*comp[i]-stock[i],0ll)*cost[i]);
        }
        return maxBudget<=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int ans=0;
        for(auto comp:composition){
            long long i=0,j=1e12,value=0;
            while(i<=j){
                long long mid=(i+j)/2;
                if(check(n,k,budget,comp,stock,cost,mid)){
                    value=mid;
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            ans=max((int)value,ans);
        }
        return ans;
    }
};