class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp;
        unordered_set<int> ans;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto [key,value]:mpp){
            if(ans.find(value)!=ans.end()) return false;
            else ans.insert(value);
        }
        return true;
    }
};