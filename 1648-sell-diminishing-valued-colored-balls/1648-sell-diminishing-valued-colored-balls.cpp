class Solution {
public:
    bool check(vector<int>& inventory, int orders,int mid){
        int maxCount=0;
        for(int i=0;i<inventory.size();i++){
            if(inventory[i]>=mid){
                maxCount+=(inventory[i]-mid+1);
            }
            if(maxCount>=orders) return true;
        }
        return false;
    }
    int maxProfit(vector<int>& inventory, int orders) {
        int mod=1e9+7,minValue=1;
        sort(inventory.begin(),inventory.end(),greater<int>());
        int left=1,right=inventory[0];
        while(left<=right){
            int mid=(left+right)/2;
            if(check(inventory,orders,mid)){
                minValue=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        long long profit=0,sold=0;
        for(auto it:inventory){
            if(it>minValue){
                long long  count=(it-minValue);
                sold+=count;
                long long sum=(long long)(it+minValue+1) * count/2;
                profit=(profit+sum)%mod;
            }
        }
        if(orders!=sold){
            profit=(profit+(orders-sold)*minValue)%mod;
        }
        return profit;
    }
};