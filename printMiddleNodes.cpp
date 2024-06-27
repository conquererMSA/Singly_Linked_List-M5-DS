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
void printMiddleNodesValue(Node*head){
    Node* temp=head;
    int llSize=countSize(head);
    int mid=llSize/2;
    if(head==NULL){
        cout<<"Middle value nothing"<<endl;
        return;
    }
    if(temp->next==NULL){
        cout<<"List has 1 node. Middle nodes value: "<<temp->val<<endl;
        return;
    }
    if(temp->next->next==NULL){
        cout<<"Middle nodes value: "<<temp->val<<endl;
        return;
    }
    Node*tem=head;
    int count=0;
    while(1){
        count++;
        if(count==mid && mid%2==0){
            cout<<"Middle node's value: "<<tem->next->val<<endl;
            break;
        }else if(count==mid && mid%2!=0){
            cout<<"Middle node's value: "<<tem->val<<" "<<tem->next->val<<endl;
             break;
        }
        tem=tem->next;
    }
    return;
    
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
    cout<<"Your List 1: ";
    printLinkedList(head);
    printMiddleNodesValue(head);
   
    return 0;
}