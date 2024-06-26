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
    return;
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    return;
}
void sortLinkedList(Node*&head){
    Node* temp=head;
    for(Node* i=temp; i->next!=NULL;i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->value>j->value){
                swap(j->value, i->value);
            }
        }
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(1){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head,tail,v);
    }
    cout<<"unsorted linked list: ";
    printLinkedList(head);
    cout<<endl;
    cout<<"sorted liked list: ";
    sortLinkedList(head);
    printLinkedList(head);
    return 0;
}