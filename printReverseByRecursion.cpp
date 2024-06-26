#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next=NULL;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
void printByRecursion(Node* a){
    if(a==NULL) return;
    cout<<a->value<<" ";
    printByRecursion(a->next);
}
void printLinkedListReverseByRecursion(Node*a){
    if(a==NULL) return;
    printLinkedListReverseByRecursion(a->next);
    cout<<a->value<<" ";
}
int main(){
    Node* head=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<"print straitforward: ";
    printByRecursion(head);
    cout<<endl;
    cout<<"print reverse: ";
    printLinkedListReverseByRecursion(head);
    return 0;
}