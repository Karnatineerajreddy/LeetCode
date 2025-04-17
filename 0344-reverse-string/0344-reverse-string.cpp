class Solution {
public:
    void find_reverse(int i,vector<char> &s,int n){
        if(i>=n/2) return;
        swap(s[i],s[n-i-1]);
        find_reverse(i+1,s,n);
    }
    void reverseString(vector<char>& s) {
        return find_reverse(0,s,s.size());
    }
};