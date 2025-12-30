class Solution {
public:
    int passThePillow(int n, int time) {
        int count=0;
        int i=1;
        bool valid=true;
        while(count<time){
            if(valid){
                if(i==n){
                    valid=false;
                    i--;
                }
                else{
                    i++;
                }
            }
            else{
                if(i==1){
                    valid=true;
                    i++;
                }
                else{
                    i--;
                }
            }
            count++;
        }
        return i;
    }
};