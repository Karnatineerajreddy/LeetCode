class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int> wordSize;
        for(auto it:words){
            wordSize.push_back(it.size());
        }
        sort(wordSize.begin(),wordSize.end());
        unordered_map<char,int> wordFreq;
        for(auto it:words){
            for(auto c:it){
                wordFreq[c]++;
            }
        }
        int even=0,odd=0;
        for(auto it:wordFreq){
            even+=it.second/2;
            odd+=it.second%2;
        }
        int ans=0;
        for(int i=0;i<wordSize.size();i++){
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