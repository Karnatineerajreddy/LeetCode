class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string num1 = to_string(num);
        int count = 0;
        for (int i = 0; i <= num1.size() - k; i++) { 
            int num2 = atoi(num1.substr(i, k).c_str()); 
            if (num2 != 0 && num % num2 == 0) count++;  
        }
        return count;
    }
};
