class Solution {
public:
    int passThePillow(int n, int time) {
        bool valid=true;
        int count=0,i=1;
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
/*


*/