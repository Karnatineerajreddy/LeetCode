class Solution {
public:
    int passThePillow(int n, int time) {
        int count=0,i=1;
        bool forward=true;
        while(count<time){
            if(forward){
                if(i==n){
                    forward=false;
                    i--;
                }
                else{
                    i++;
                }
            }
            else{
                if(i==1){
                    forward=true;
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