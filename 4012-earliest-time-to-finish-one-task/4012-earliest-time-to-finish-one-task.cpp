class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            int sum=0,j=0;
            while(j<=1){
                sum+=tasks[i][j];
                j++;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};