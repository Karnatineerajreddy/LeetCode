class Solution {
public:
    bool check(int midVal,vector<int> &inventory,int orders){
        long long count=0;
        for(int val : inventory){
            if(val>=midVal){
                count+=val-midVal+1;
                if(count>=orders) return true;
            }
        }
        return false;
    }
    int maxProfit(vector<int>& inventory, int orders) {
        const int mod=1e9+7;
        sort(inventory.begin(),inventory.end(),greater<int>());
        int low=1,high=inventory[0];
        int k=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,inventory,orders)){
                k=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        long long profit=0,sold=0;
        for(int val : inventory){
            if(val>k){
                long long count=val-k;
                sold+=count;
                long long sum=(long long)(val+k+1)*count/2;
                profit=(profit+sum)%mod;
            }
        }
        profit=(profit+(orders-sold)*k)%mod;
        return profit;
    }
};