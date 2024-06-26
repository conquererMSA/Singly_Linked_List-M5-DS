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
void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node*&head, Node*&tail, int v){
     Node* newNode=new Node(v);
    if(head==NULL){
      head=newNode;
      tail=newNode;
      return;
    }
    tail->next=newNode;
    tail=newNode;
    return;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(1){ //O(N)
    int v;
    cin>>v;
      if(v==-1)break;
      insertAtTail(head,tail,v); //O(1)
    }
    printLinkedList(head);
    return 0;
}