class Solution {
public:
    bool check(vector<int>& inventory, int orders,int mid){
        long long ans=0;
        for(auto it:inventory){
            if(it>=mid){
                ans+=(it-mid+1);
            }
            if(ans>=orders) return true;
        }
        return false;
    }
    int maxProfit(vector<int>& inventory, int orders) {
        const int mod=1e9+7;
        sort(inventory.begin(),inventory.end(),greater<int>());
        int i=1,j=inventory[0],s=1;
        while(i<=j){
            int mid=(i+j)/2;
            if(check(inventory,orders,mid)){
                s=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        long long profit=0,sold=0;
        for(auto it:inventory){
            if(it>s){
                long long count=it-s;
                sold+=count;
                long long sum =(long long) (it+s+1)*count/2;
                profit=(profit+sum)%mod;
            }

        }
        profit=(profit+(orders-sold)*s)%mod;
        return profit;
    }
};

