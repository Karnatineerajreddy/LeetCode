class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1,c=k;
        vector<int> ans;
        while(i>=0 || c>0){
            if(i>=0){
                c+=num[i];
            }
            ans.push_back(c%10);
            c/=10;
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};