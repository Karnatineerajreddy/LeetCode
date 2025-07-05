class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=-1;
        map<int,int> mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second==it.first) maxi=max(maxi,it.first);
        }
        return maxi;
    }
};