class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 
        int j = s.size() - 1;
        int i=0;
        while (i < j) {

            while (i < j && vow.find(s[i]) == vow.end()) {
                i++;
            }

            while (i < j && vow.find(s[j]) == vow.end()) {
                j--;
            }

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
