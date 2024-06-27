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
void checkDuplicateValue(Node*head){
    Node* temp=head;
    if(head==NULL){
        cout<<"NO";
        return;
    }
    int llSize=0;
    vector<int> nodeValues;
    while(temp!=NULL){
        llSize++;
        nodeValues.push_back(temp->val);
        temp=temp->next;
    }
    sort(nodeValues.begin(), nodeValues.end());
    int isDuplicate=0;
    for(int i=0; i<llSize-1; i++){
        if(nodeValues[i]==nodeValues[i+1]){
            isDuplicate=1;
            break;
        }
}
    if(isDuplicate){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return ;
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
    checkDuplicateValue(head);
    return 0;
}