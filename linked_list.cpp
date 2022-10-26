#include <iostream>

class List{
public:
    struct Node{
        Node * next;
        int value;
    };
    Node * root;

    List(){
        root= nullptr;
    }
    bool add(int value){
        if (root==nullptr) {
            root = new Node;
            root->value = value;
            root->next= nullptr;
            return true;
        }
        else{
            Node *tmp=root;
            while(tmp->next!= nullptr){
                tmp=tmp->next;
            }
            tmp->next=new Node;
            tmp->next->value=value;
            tmp->next->next= nullptr;
            return true;

        }

    }
    ~List(){
        Node *tmp;
        while(root!= nullptr){
                tmp=root;
                root=root->next;
                delete []tmp;

            }

    }
};



int main() {
    List a=List();
    a.add(14);
    a.add(23);
    std::cout<<a.root->next->value;
    std::cout<<"er";

    return 0;
}
