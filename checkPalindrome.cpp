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
void checkPalindrome(Node*head){
    Node*temp=head;
    vector<int> v1;
    while(temp!=NULL){
        v1.push_back(temp->val);
        temp=temp->next;
    }
    vector<int> v2;
    v2=v1;
    reverse(v2.begin(),v2.end());
    cout<<"Palindrome answer: ";
    if(v1==v2){
      cout<<"Palindrome\n";
      return;
    }else{
        cout<<"Not Palindrome\n";
        return;
    }
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
    checkPalindrome(head);
    return 0;
}