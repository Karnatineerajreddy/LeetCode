class Solution {
public:
    bool checkPossible(vector<int>& nums, vector<int>& checkTwoZero,int s){
        vector<int> last(nums.size(),-1);
        for(int i=0;i<=s;i++){
            last[checkTwoZero[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(last[i]==-1) return false;
        }
        int power=0;
        for(int i=0;i<=s;i++){
            int idx=checkTwoZero[i];
            if(i==last[idx]){
                if(power<nums[idx]) return false;
                power-=nums[idx];
            }
            else power++;
        }
        return true;
    }
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        vector<int> checkTwoZero=changeIndices;
        for(auto& it:checkTwoZero){
            it--;
        }
        int i=0,j=checkTwoZero.size()-1,ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(checkPossible(nums,checkTwoZero,mid)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans==-1? -1 : ans+1;
    }
};