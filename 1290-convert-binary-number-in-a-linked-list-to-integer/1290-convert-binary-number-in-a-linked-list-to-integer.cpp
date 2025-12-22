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
        ListNode* temp=head;
        vector<int> value;
        while(temp!=NULL){
            value.push_back(temp->val);
            temp=temp->next;
        }
        reverse(value.begin(),value.end());
        int power=0,ans=0;
        for(auto it:value){
            if(it==1){
                ans+=1<<power;
            }
            power++;
        }
        return ans;

    }
};