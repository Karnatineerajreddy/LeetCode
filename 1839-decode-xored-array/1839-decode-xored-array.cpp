class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int second=encoded[0]^first;
        ans.push_back(second);
        for(int i=1;i<encoded.size();i++){
            int next_num=encoded[i]^second;
            ans.push_back(next_num);
            second=next_num;
        }
        return ans;
    }
};