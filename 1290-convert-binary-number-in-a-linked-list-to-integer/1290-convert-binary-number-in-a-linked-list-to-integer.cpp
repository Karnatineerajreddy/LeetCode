/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string ans="";
        ListNode* temp=head;
        while(temp!=NULL){
            ans+=(temp->val+'0');
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        int ans1=0,power=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1'){
                ans1+=(1<<power);
            }
            power++;
        }
        return ans1;
    }
};