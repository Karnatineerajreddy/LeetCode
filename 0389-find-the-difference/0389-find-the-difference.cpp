class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans1=0,ans2=0;
        for(auto it:s) ans1+=it;
        for(auto it:t) ans2+=it;
        return (ans2-ans1);
    }
};