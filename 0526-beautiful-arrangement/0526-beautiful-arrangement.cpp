class Solution {
public:
    int findPerm(vector<int>& perm,int start){
        int ans=0;
        if(start==perm.size()){
            return 1;
        }
        for(int i=start;i<perm.size();i++){
            swap(perm[start],perm[i]);
            if(perm[start]%(start+1)==0 || (start+1)%perm[start]==0){
                ans+=findPerm(perm,start+1);
            }
            swap(perm[start],perm[i]);
        }
        return ans;
    }
    int countArrangement(int n) {
        vector<int> perm;
        for(int i=1;i<=n;i++){
            perm.push_back(i);
        }
        return findPerm(perm,0);
    }
};