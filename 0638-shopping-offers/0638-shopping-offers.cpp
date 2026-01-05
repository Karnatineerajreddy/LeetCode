class Solution {
public:
    unordered_map<string,int> mpp;
    int findMinPrice(vector<int>& price,vector<vector<int>>& special,vector<int>& needs){
        string key="";
        for(auto it:needs){
            key+=to_string(it) + ',';
        }
        if(mpp.count(key)) return mpp[key];
        int minPrice=0;
        for(int i=0;i<price.size();i++){
            minPrice+=(price[i]*needs[i]);
        }
        for(auto& it:special){
            bool valid=true;
            vector<int> newNeeds=needs;
            for(int i=0;i<needs.size();i++){
                if(needs[i]<it[i]){
                    valid=false;
                    break;
                }
                newNeeds[i]-=it[i];
            }
            if(valid){
                minPrice=min(minPrice,it.back()+findMinPrice(price,special,newNeeds));
            }
        }
        return mpp[key]=minPrice;
    }
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        return findMinPrice(price,special,needs);
    }
};