#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int countSize(Node* head){
 int count=0;
  while(head!=NULL){
    count++;
    head=head->next;
  }
  return count;
}

void insertAtPosition(Node *&head,int pos, int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(pos==1){
        newNode->next=temp;
        head=newNode;
        return;
    }
    else if(pos>countSize(head)){
        cout<<"Invalid position"<<endl;
        return;
    }else{
       for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
   }
    
};
void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
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
    int pos, val;
    cin>>pos>>val;
    printLinkedList(head);
    insertAtPosition(head,pos,val);
    printLinkedList(head);
    return 0;
}