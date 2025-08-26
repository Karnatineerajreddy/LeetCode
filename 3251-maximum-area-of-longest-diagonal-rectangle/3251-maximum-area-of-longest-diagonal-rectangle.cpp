class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxLength=0,maxArea=0;
        for(auto it:dimensions){
            int l=it[0],w=it[1];
            int dia=l*l+w*w,area=l*w;
            if(dia>maxLength){
                maxLength=dia;
                maxArea=area;
            }
            else if(dia==maxLength){
                maxArea=max(maxArea,area);
            }
        }
        return maxArea;
    }
};