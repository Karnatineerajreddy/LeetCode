class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t
        
        // Traverse both strings
        while (i < n1 && j < n2) {
            if (s[i] == t[j]) {
                i++; // Move pointer for s if there's a match
            }
            j++; // Always move pointer for t
        }
        
        // If we have traversed all of s, it's a subsequence
        return i == n1;
    }
};
