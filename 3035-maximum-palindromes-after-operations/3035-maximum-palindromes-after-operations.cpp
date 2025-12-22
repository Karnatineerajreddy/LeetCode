class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int> wordSize;
        for(auto it:words){
            wordSize.push_back(it.size());
        }
        sort(wordSize.begin(),wordSize.end());
        unordered_map<char,int> freq;
        for(auto it:words){
            for(auto c:it){
                freq[c]++;
            }
        }
        int even=0,odd=0,n=wordSize.size();
        for(auto it:freq){
            even+=it.second/2;
            odd+=it.second%2;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(wordSize[i]%2==1){
                if(odd){
                    odd--;
                }
                else{
                    even--;
                    odd++;
                }
            }
            if(even<wordSize[i]/2) break;
            even-=wordSize[i]/2;
            ans++;
        }
        return ans;
    }
};