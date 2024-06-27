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
int countSize(Node*head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void compareSize(Node* ll1,Node* ll2){
    int ll1Size=countSize(ll1);
    int ll2Size=countSize(ll2);
    cout<<"LL1 and LL2 size: ";
    if(ll1Size==ll2Size){
        cout<<"same\n";
    }else{
        cout<<"differet\n";
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"insert value for LL1: ";
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head,tail,v);
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    cout<<"insert value for LL2: ";
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head2, tail2, v);
    }
    cout<<endl;
    cout<<"Your List 1: ";
    printLinkedList(head);
    cout<<"Your List 2: ";
    printLinkedList(head2);
    compareSize(head,head2);
    return 0;
}