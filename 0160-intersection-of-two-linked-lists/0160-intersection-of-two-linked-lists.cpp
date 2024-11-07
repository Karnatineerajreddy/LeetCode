/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode * collision(ListNode * h1,ListNode * h2,int n){
        while(n){
            n--;
            h2=h2->next;

        }
        while(h1!=h2){
            h1=h1->next;
            h2=h2->next;
        }
        return h1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode * temp2=headB;
        int n1=0,n2=0;
        while(temp1!=NULL){
            n1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            n2++;
            temp2=temp2->next;
            
        }
        if(n1<n2) return collision(headA,headB,n2-n1);
        else return collision(headB,headA,n1-n2);
    }
};