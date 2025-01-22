class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if (n == 1) return cost[0]; 
        if (n == 2) return cost[0] + cost[1]; 
        
        sort(cost.begin(), cost.end()); 
        int sum = 0;
        int i = n - 1, j = n - 2; 

        while (i >= 0) {
            sum += cost[i]; 
            if (j >= 0) sum += cost[j]; 
            i -= 3; 
            j -= 3; 
        }

        return sum;
    }
};
