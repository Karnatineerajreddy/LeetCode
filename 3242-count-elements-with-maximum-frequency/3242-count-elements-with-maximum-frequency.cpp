class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        int maxi=0,count=0;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
                count=it.second;
            }
            else if(it.second==maxi){
                count+=it.second;
            }
        }
        return count;
    }
};