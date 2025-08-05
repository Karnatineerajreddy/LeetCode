class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i=0,count=0;
        while(i<fruits.size()){
            int j=0;
            while(j<baskets.size()){
                if(fruits[i]>baskets[j]) j++;
                else{
                    baskets[j]=-1;
                    count++;
                    break;
                }
            }
            i++;
        }
        return (fruits.size()-count);
    }
};