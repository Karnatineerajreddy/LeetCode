class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            int j = i + 1;
            while (j < n) {
                int k = j + 1;
                while (k < n) {
                    if (abs(arr[i] - arr[j]) <= a &&
                        abs(arr[j] - arr[k]) <= b &&
                        abs(arr[i] - arr[k]) <= c) {
                        count++;
                    }
                    k++;
                }
                j++;
            }
        }
        return count;
    }
};