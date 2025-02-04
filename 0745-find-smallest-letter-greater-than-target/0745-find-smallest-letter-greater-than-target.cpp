class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mini=INT_MAX;
        char ans=letters[0];
        int sum;
        for(int i=0;i<letters.size();i++){
            sum=letters[i]-target;
            if(sum<mini && sum>0){
                ans=letters[i];
                mini=sum;
            }
        }
        return ans;
    }
};