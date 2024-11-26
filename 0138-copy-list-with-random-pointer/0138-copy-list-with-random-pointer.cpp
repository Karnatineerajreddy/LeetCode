/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* newnode=new Node(temp->val);
            newnode->next=temp->next;
            temp->next=newnode;
            temp=temp->next->next;
            
        }
    }
    void connectrandom(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* copynode=temp->next;
            if(temp->random){
                copynode->random=temp->random->next;
            }
            else{
                copynode->random=NULL;
            }
            temp=temp->next->next;
        }
    }
    Node* connectnext(Node* head){
        Node* temp=head;
        Node* dummy=new Node(-1);
        Node* res=dummy;
        while(temp!=NULL){
            res->next=temp->next;
            
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        insert(head);
        connectrandom(head);
        return connectnext(head);
    }
};