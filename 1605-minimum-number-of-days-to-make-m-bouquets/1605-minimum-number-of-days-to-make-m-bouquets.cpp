class Solution {
public:
    bool possible(vector<int>&bloomDay,int mid,int m,int k){
        int count=0;
        int nofb=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            
            }
            else{
                nofb+=(count/k);
                count=0;
            }

        }
        nofb+=(count/k);
        return nofb>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=m*1ll*k*1ll;
        if(val>n) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            int poss=possible(bloomDay,mid,m,k);
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
           
        }
         return low;
       
         
    }
};