class Solution {
public:
    int str_find_index(string str){
        for(int i=0;i<str.size();i++){
            if(str[i]!='9') return i;
        }
        return -1;
    }
    int minMaxDifference(int num) {
        string str=to_string(num);
        string maxi=str;
        int index=str_find_index(str);
        if(index!=string::npos){
            char ch=str[index];
            replace(maxi.begin(),maxi.end(),ch,'9');
        }
        string str1=to_string(num);
        char ch1=str[0];
        replace(str1.begin(),str1.end(),ch1,'0');

        return stoi(maxi)-stoi(str1);

    }
};