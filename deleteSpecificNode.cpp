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
void deleteSpecificNode(Node*&head){
    cout<<"Insert the delete value: ";
    int v;
    cin>>v;
    Node*temp=head;
    if(temp->val==v){
        Node* deleteNode=temp;
        head=temp->next;
        delete deleteNode;
        return;
    }
    while(temp->next!=NULL){
        if(temp->next->val==v){
        Node* deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        return;
       }
       temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"Insert node val: ";
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head,tail,v);
    }
    cout<<endl;
    cout<<"Your List: ";
    printLinkedList(head);
    deleteSpecificNode(head);
    cout<<"After delation: ";
    printLinkedList(head);
    return 0;
}