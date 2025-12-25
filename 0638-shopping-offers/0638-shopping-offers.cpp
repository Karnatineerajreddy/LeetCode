class Solution {
public:
    unordered_map<string,int> mpp;
    int dfs(vector<int>& price, vector<vector<int>>& special, vector<int>& needs){
        string key="";
        for(auto it : needs){
            key+=to_string(it) + ",";
        }
        if(mpp.count(key)) return mpp[key];
        int minCost=0;
        for(int i=0;i<needs.size();i++){
            minCost+=needs[i]*price[i];
        }
        for(auto it:special){
            bool valid=true;
            vector<int> newNeed=needs;
            for(int i=0;i<needs.size();i++){
                if(it[i]>needs[i]){
                    valid=false;
                    break;
                }
                newNeed[i]-=it[i];
            }
            if(valid) minCost=min(minCost,it.back()+dfs(price,special,newNeed));
        }
        return mpp[key]=minCost;
    }
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        return dfs(price,special,needs);
    }
};