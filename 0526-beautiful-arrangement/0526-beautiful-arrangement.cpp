class Solution {
public:
    void findValue(vector<int>& value,int start,int& ans){
        if(start==value.size()){
            ans++;
            return;
        }
        for(int i=start;i<value.size();i++){
            swap(value[start],value[i]);
            if(value[start]%(start+1)==0 || (start+1)%value[start]==0){
                findValue(value,start+1,ans);
            }
            swap(value[start],value[i]);
        }
    }
    int countArrangement(int n) {
        vector<int> values;
        for(int i=0;i<n;i++){
            values.push_back(i+1);
        }
        int ans=0;
        findValue(values,0,ans);
        return ans;
    }
};