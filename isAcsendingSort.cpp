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
int countSize(Node*head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
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
void checkIsAscendingSort(Node* head){
    //approach 1;
    // int llSize=countSize(head);
    // Node* temp=head;
    // int isAscendingSort=1;
    // for(int i=1; i<llSize; i++){
    //     if(temp->val>temp->next->val){
    //         isAscendingSort=0;
    //         break;
    //     }
    //     temp=temp->next;
    // }
    // if(isAscendingSort){
    //     cout<<"LL is ascending sorted\n";
    // }else{
    //     cout<<"LL is not ascending sorted\n";
    // }

    //aproach 2
    Node* temp=head;
    int isAscendingSort=1;
    while(1){
        if(temp->next==NULL){
            break;
        }
        if(temp->val>temp->next->val){
            isAscendingSort=0;
            break;
        }
        temp=temp->next;
    }
    if(isAscendingSort){
        cout<<"LL is ascending sorted"<<endl;
        return;
    }else{
        cout<<"LL is not ascending sorted"<<endl;
        return;
    }
    return;
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
    checkIsAscendingSort(head);
    return 0;
}