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
int countSize(Node* head){
 int count=0;
  while(head!=NULL){
    count++;
    head=head->next;
  }
  return count;
}

void insertAtPosition(Node *&head,int pos, int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(pos==1){
        newNode->next=temp;
        head=newNode;
        return;
    }
    else if(pos>countSize(head)){
        cout<<"Invalid position"<<endl;
        return;
    }else{
       for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
   }
    
};
void insertAtTailO1Comp(Node*&head, Node*&tail, int pos, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        //zodi linkedList ekebare khali thake tahole head and tail NULL ke point kore. er pore zokhon insert howyar jonno first node ase taholeo head and tail hoy newNode.
       head=newNode;
       tail=newNode;
       return;
    }
    //kintu zokhon linkedList e dui ba totudik node exist kore sekkhetre tail hoy last node and head hoy first node.
    if(pos>=countSize(head)){
        //linkedList er size theke zodi pos beshi hoy tahole tail e insert korbe.
        tail->next=newNode;
        tail=newNode;
        return;
    }

}
void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
    Node* tail=d;
    cout<<"tail: "<<tail->val<<endl;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    int pos, val;
    cin>>pos>>val;
    // cout<<tail->next; //0; zehetu NULL cpp te 0 hoy
    // printLinkedList(head);
    // insertAtPosition(head,pos,val);
    // cout<<tail->val<<endl;
    insertAtTailO1Comp(head,tail,pos,val);
    cout<<"tail: "<<tail->val<<endl;
    // printLinkedList(head);
    return 0;
}