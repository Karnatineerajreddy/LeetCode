class Solution {
public:
    bool getEarliestSecond(vector<int>& nums, vector<int>& zeroIndices,int mid){
        vector<int> last(nums.size(),-1);
        for(int i=0;i<=mid;i++){
            last[zeroIndices[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(last[i]==-1) return false;
        }
        int power=0;
        for(int i=0;i<=mid;i++){
            int index=zeroIndices[i];
            if(last[index]==i){
                if(power<nums[index]) return false;
                power-=nums[index];
            }
            else{
                power++;
            }
        }
        return true;
    }
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        vector<int> zeroIndices=changeIndices;
        for(auto& it:zeroIndices){
            it--;
        }
        int i=0,j=zeroIndices.size()-1,miniVal=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(getEarliestSecond(nums,zeroIndices,mid)){
                miniVal=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return miniVal==-1 ? -1 : miniVal+1; 

    }
};