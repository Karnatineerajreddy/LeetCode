class Solution {
public:
    bool alloyCheck(int n,int k, vector<int>& comp,vector<int>& stock,vector<int>& cost,long long mid,int budget){
        long long maxBudget=0;
        for(int i=0;i<n;i++){
            maxBudget+=max(mid*comp[i]-stock[i],0ll)*cost[i];
        }
        return maxBudget<=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int ans=0;
        for(auto it:composition){
            long long left=0,right=1e9,maxValue=1;
            while(left<=right){
                long long mid=(left+right)/2;
                if(alloyCheck(n,k,it,stock,cost,mid,budget)){
                    maxValue=mid;
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            ans=max(ans,(int)maxValue);
        }
        return ans;
    }
};
