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
void printLinkedList(Node*&head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Linked List is empty!"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node*&head,Node*&tail, int v){
    Node* newNode=new Node(v);
    head=newNode;
    tail=newNode;
    return;
}
void insertAtTail(Node*&head,Node*&tail, int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        insertAtHead(head,tail,v);
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void findMinMax(Node*head){
    Node* temp=head;
    int min=INT_MAX;
    int max=INT_MIN;
    while(temp!=NULL){
      //find min
      if(temp->val<min){
        min=temp->val;
      }
      //find max
      if(temp->val>max){
        max=temp->val;
      }
      temp=temp->next;
    }
    cout<<"Min: "<<min<<" Max: "<<max<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head,tail,v);
    }
    cout<<endl;
    cout<<"Your List: ";
    printLinkedList(head);
    findMinMax(head);
    return 0;
}