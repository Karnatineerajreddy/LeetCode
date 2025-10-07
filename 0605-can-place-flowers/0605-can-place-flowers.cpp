class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size(),count=0;
        for(int i=0;i<size;i++){
            if(flowerbed[i]==0){
                int left=1,right=1;
                if(i==0 || flowerbed[i-1]==0) left=0;
                if(i==size-1 || flowerbed[i+1]==0) right=0;
                if(left==0 && right==0){
                    flowerbed[i]=1;
                    count++;
                    if(count>=n) return true;
                }
            }
        }
        return count>=n;
    }
};