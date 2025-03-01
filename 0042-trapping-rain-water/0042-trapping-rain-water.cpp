class Solution {
public:
    vector<int> preffix(vector<int> &nums){
            vector<int> pmax(nums.size());;
            pmax[0]=nums[0];
            for(int i=1;i<nums.size();i++){
                pmax[i]=max(pmax[i-1],nums[i]);
            }
            return pmax;
    }
    vector<int> suffix(vector<int> &nums){
            vector<int> smax(nums.size());;
            smax[nums.size()-1]=nums[nums.size()-1];
            for(int i=nums.size()-2;i>=0;i--){
                smax[i]=max(smax[i+1],nums[i]);
            }
            return smax;
    }
    


    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int total=0;
        vector<int> pmax,smax;
        pmax=preffix(height);
        smax=suffix(height);
        for(int i=0;i<height.size();i++){
            int leftmax=pmax[i];
            int rightmax=smax[i];
            if(height[i]<leftmax && height[i]< rightmax){
                total+=min(leftmax,rightmax)-height[i];
            }
        }
        return total;
    }

};