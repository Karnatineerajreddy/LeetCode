class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> ans(r,vector<int> (c));
        if(r*c != m*n) return mat;
        for(int i=0;i<r*c;i++){
            ans[i/c][i%c]=mat[i/n][i%n];
        }
        return ans;
    }
};
// r*c=8
// i=0->8
// mat[i/n][i%n]=mat[0/2][0%2]=mat[0][0]
// mat[1/2][1%2]=mat[0][1]
//mat[2/2][2%2]=mat[1][0] ...mat[1][1]