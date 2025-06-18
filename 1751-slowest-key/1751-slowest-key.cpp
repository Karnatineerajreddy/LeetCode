class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxi=releaseTimes[0];
        char ch=keysPressed[0];
        for(int i=1;i<releaseTimes.size();i++){
            int keypress=releaseTimes[i]-releaseTimes[i-1];
            if(keypress>maxi){
                maxi=keypress;
                ch=keysPressed[i];
            }
            else if(maxi==keypress){
                if((ch-'0')>keysPressed[i]-'0') ch=ch;
                else ch=keysPressed[i];
            }
        }
        return ch;
    }
};