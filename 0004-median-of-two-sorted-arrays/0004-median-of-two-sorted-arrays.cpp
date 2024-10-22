class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int p1=0,p2=0; 
        vector<int> ans;
        while(p1<n1 && p2<n2){
            if(nums1[p1]<nums2[p2]){
                ans.push_back(nums1[p1]);
                p1++;
            }
            else{
                ans.push_back(nums2[p2]);
                p2++;
            }
        }
        while(p1<n1){
            ans.push_back(nums1[p1]);
            p1++;
        }
        while(p2<n2){
            ans.push_back(nums2[p2]);
            p2++;
        }
        int n=ans.size();
        if(n%2==1){
            return ans[n/2];
        }
        else{
            double sum = ceil((double)ans[n/2] + (double)ans[n/2-1])/2.0;
            return sum;
        }
    }
};