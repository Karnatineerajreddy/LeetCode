class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=0;
        for(int i=0;i<colors.size();i++){
            for(int j=1;j<colors.size();j++){
                if(colors[j]!=colors[i]){
                    maxi=max(maxi,abs(j-i));
                }
            }
        }
        return maxi;
    }
};