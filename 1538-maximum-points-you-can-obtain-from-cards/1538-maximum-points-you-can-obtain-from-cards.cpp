class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int maxi=0;
        for(int i=0;i<=k-1;i++) lsum+=cardPoints[i];
        maxi=lsum;
        int rind=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rind];
            rind=rind-1;
            maxi=max(maxi,lsum+rsum);
        }
        return maxi;
    }
};