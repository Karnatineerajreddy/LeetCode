class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ans={
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<n && ans[s[i]] < ans[s[i+1]]){
                sum = sum - ans[s[i]];
            }
            else{
                sum=sum+ ans[s[i]];
            }
        }
        return sum;

    }
};