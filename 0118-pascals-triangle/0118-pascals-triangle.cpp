class Solution {
public:
    vector<int> Generaterow(int n){
        int ans=1;
        vector<int> ans1;
        ans1.push_back(1);
        for(int i=1;i<n;i++){
            ans*=(n-i);
            ans/=i;
            ans1.push_back(ans);
        }
        return ans1;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=1;i<=numRows;i++){
            triangle.push_back(Generaterow(i));
        }
        return triangle;
    }
};