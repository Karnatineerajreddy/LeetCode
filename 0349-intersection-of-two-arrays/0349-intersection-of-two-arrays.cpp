class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        if(n2<n1){
            for(int i=0;i<nums2.size();i++){
                for(int j=0;j<nums1.size();j++){
                    if(nums2[i]==nums1[j]){
                        if (find(ans.begin(), ans.end(), nums2[i]) != ans.end()) break;
                        else ans.push_back(nums2[i]);
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0;i<nums1.size();i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i]==nums2[j]){
                        if (find(ans.begin(), ans.end(), nums1[i]) != ans.end()) break;
                        else ans.push_back(nums1[i]);
                        break;
                    }
                    
                }
            }
        }
        return ans;
    }
};