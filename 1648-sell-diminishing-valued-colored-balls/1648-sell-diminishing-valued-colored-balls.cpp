class Solution {
public:
    bool findLastValue(vector<int>& inventory,int orders,int mid){
        int ballSum=0;
        for(auto it:inventory){
            if(it>=mid){
                ballSum+=(it-mid+1);
            }
            if(ballSum>=orders) return true;
        }
        return false;
    }
    int maxProfit(vector<int>& inventory, int orders) {
        int mod=1e9+7;
        sort(inventory.begin(),inventory.end(),greater<int>());
        int i=1,j=inventory[0],minValue=1;
        while(i<=j){
            int mid=(i+j)/2;
            if(findLastValue(inventory,orders,mid)){
                minValue=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        long long profit=0,sold=0;
        for(int i=0;i<inventory.size();i++){
            if(inventory[i]>minValue){
                long long count=inventory[i]-minValue;
                sold+=count;
                long long sum=(long long)(inventory[i]+minValue+1)*count/2;
                profit=(profit+sum)%mod;
            }
        }
        profit=(profit+(orders-sold)*minValue)%mod;
        return profit;

    }
};
