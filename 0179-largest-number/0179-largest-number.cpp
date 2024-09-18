class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> strNums;
        for (auto num : nums) {
            strNums.push_back(to_string(num));
        }

        sort(strNums.begin(), strNums.end(), [](string &a, string &b) {
            return a + b > b + a; 
        });
        if(strNums[0]=="0") return "0";

        stringstream result;
        for (auto &str : strNums) {
            result << str;
        }

        return result.str();
    }
};