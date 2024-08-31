class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> two;
        for(int i=0;i<n;i++){
            two.push_back({nums[i],i});
        }
       
        sort(two.begin(),two.end());
        int i=0;
        int j=n-1;
        while(i<j){
            int sum=two[i].first+two[j].first;
            if(sum==target){
                return {two[i].second,two[j].second};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
                
            }
           
        }
        return {};
        
    
    }
    
};