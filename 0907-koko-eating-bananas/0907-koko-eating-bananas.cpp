class Solution {
public:
    int maxlength(vector<int> &piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long totalpiles(vector<int> &piles,int mid){
        long long  total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total +=ceil((double)piles[i]/(double)mid);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=maxlength(piles);
        long long total;
        while(low<=high){
            int mid=(low+high)/2;
            total=totalpiles(piles,mid);
            if(total<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};


