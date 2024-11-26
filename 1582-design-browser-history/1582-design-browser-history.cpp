class Node {
public:
    string val;
    Node* next;
    Node* back;

    Node(string value) : val(value), next(nullptr), back(nullptr) {}
};
class BrowserHistory {
     Node* current;
public:
    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newnnode=new Node(url);
        current->next=newnnode;
        newnnode->back=current;
        current=newnnode;
    }
    
    string back(int steps) {
        while(steps){
            if(current->back){
                current=current->back;
            }
            else break;
            steps--;
        }
        return current->val;
    }
    
    string forward(int steps) {
        while(steps){
            if(current->next){
                current=current->next;
            }
            else break;
            steps--;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */