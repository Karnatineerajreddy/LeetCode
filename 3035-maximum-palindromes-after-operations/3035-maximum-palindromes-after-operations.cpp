class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int> countSpaces;
        for(auto it: words){
            countSpaces.push_back(it.size());
        }
        sort(countSpaces.begin(),countSpaces.end());
        unordered_map<char,int> countChar;
        for(auto it:words){
            for(auto c:it){
                countChar[c]++;
            }
        }
        int even=0,odd=0;
        for(auto it:countChar){
            even+=it.second/2;
            odd+=it.second%2;
        }
        int ans=0;
        for(auto it:countSpaces){
            if(it%2==1){
                if(odd){
                    odd--;
                }
                else{
                    even--;
                    odd++;
                }
            }
            if(even<it/2) break;
            even-=it/2;
            ans++;
        }
        return ans;
    }
};
