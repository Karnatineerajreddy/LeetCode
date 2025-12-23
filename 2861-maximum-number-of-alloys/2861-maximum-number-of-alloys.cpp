class Solution {
public:
    bool check(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost,int mid){
        long long minCost=LLONG_MAX;
        for(auto& it :  composition){
            long long totalCost=0;
            for(int i=0;i<n;i++){
                long long need=1ll * it[i]*mid -stock[i];
                if(need>0){
                    totalCost+=need*cost[i];
                }
            }
            minCost=min(minCost,totalCost);
        }
        return minCost<=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int i=0,j=1e12;
        long long ans=0;
        while(i<=j){
            int mid=(i+j)/2;
            if(check(n,k,budget,composition,stock,cost,mid)){
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};