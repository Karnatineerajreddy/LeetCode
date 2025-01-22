class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if (n == 1) return cost[0]; // Handle case with one item
        if (n == 2) return cost[0] + cost[1]; // Handle case with two items
        
        sort(cost.begin(), cost.end()); // Sort in ascending order
        int sum = 0;
        int i = n - 1, j = n - 2; // Start with the two largest items

        while (i >= 0) {
            sum += cost[i]; // Add the current item
            if (j >= 0) sum += cost[j]; // Add the second item in the group if it exists
            i -= 3; // Move to the next "largest item" after skipping one
            j -= 3; // Move to the second largest in the new group
        }

        return sum;
    }
};
