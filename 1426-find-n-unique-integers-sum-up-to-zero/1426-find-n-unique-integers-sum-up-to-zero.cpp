class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2==1) ans.push_back(0);
        int i=-n,j=n;
        while(ans.size()!=n){
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};