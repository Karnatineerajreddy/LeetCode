class Solution {
public:
    int sumofapples(vector<int>&apple){
        int sum=0;
        for(int i=0;i<apple.size();i++){
            sum=sum+apple[i];
        }
        return sum;
    }
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=sumofapples(apple);
        if (capacity.empty()) return -1;
        if (apple.empty()) return 0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        int final,count=0;
        for(int i=0;i<capacity.size();i++){
            sum=sum-capacity[i];
            count++;
            if(sum<=0){
                return count;
            }

        }
        return -1;
        
    }
};