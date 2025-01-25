class Solution {
public:
    unordered_set<int> findprime(int nums){
        unordered_set<int> ans;
        for(int i=2;i*i<=nums;i++){
            while (nums % i == 0) {
                ans.insert(i);
                nums /= i;
            }
        }
        if (nums > 1) ans.insert(nums); 
        return ans;
        
    }
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> ans1;
        for(auto num:nums){
            unordered_set<int> prime=findprime(num);
            ans1.insert(prime.begin(),prime.end());
        }
        return ans1.size();
    }
};