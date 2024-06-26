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
void deleteFromPosition(Node* &head, int pos){
    Node* temp=head;
    if(pos==1){
      Node* deleteNode=temp;
      head=temp->next;
      delete deleteNode;
      return;
    }
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=deleteNode->next;
    delete deleteNode;
    return;
}
void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    printLinkedList(head);
    int pos;
    cin>>pos;
    deleteFromPosition(head,pos);
    printLinkedList(head);
    return 0;
}