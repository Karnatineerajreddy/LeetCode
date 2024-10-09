class Solution {
public:
    int low_values(vector<int> &weights){
        int maxi=INT_MIN;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>maxi){
                maxi=weights[i];
            }
        }
        return maxi;
    }
    int high_values(vector<int> &weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        return sum;
    }
    int finddays(vector<int> &weights,int mid){
        int days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load > mid){
                days=days+1;
                load=weights[i];
            }
            else load+=weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=low_values(weights),high=high_values(weights);
        while(low<=high){
            int mid=(low+high)/2;
            int nofdays=finddays(weights,mid);
            if(nofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};