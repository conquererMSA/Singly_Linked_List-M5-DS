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

void insertAtTail(Node *&head, int v){
     Node* newNode=new Node(v);
     if(head==NULL){
        head=newNode;
        return;
     }
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=newNode;
}

void printLinkedList(Node* head){
    cout<<endl<<"Your List: ";
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    cout<<"insert your list: ";
    Node *head=NULL;
    while(true){
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        insertAtTail(head,val);
    }
    printLinkedList(head);
    return 0;
}