class Solution {
public:
    bool pos(int mid,vector<int>&position,int m){
        int count=1,last=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last>=mid){
                count++;
                last=position[i];
            }
            if(count>=m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int low=0,high=position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(pos(mid,position,m)==true){
                low=mid+1;
            }
            else{
                high =mid-1;
            }
        }
        return high;
        
    }
};