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
void findEven(Node*head){
    Node* temp=head;
   cout<<"Even Nodes: ";
    while(temp!=NULL){
        if(temp->val%2==0){
            cout<<temp->val<<" ";
        }
        temp=temp->next;
    }
    cout<<endl;
}
void findOdd(Node*head){
    Node* temp=head;
   cout<<"Odd Nodes: ";
    while(temp!=NULL){
        if(temp->val%2!=0){
            cout<<temp->val<<" ";
        }
        temp=temp->next;
    }
    cout<<endl;
}
void findEvenOddNodes(Node* head){
    findEven(head);
    findOdd(head);
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
    findEvenOddNodes(head);
    return 0;
}