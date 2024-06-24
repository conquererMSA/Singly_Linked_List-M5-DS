#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
   Node* newNode=new Node(v);
   if(head==NULL){
    //zodi kuno node exist na kore. tahole head e newNode assign korte hobe
     head=newNode;
     return;
   }
   Node* temp=head;
   while(temp->next!=NULL){
     temp=temp->next;
   }
   //temp ekhon null e ache
   temp->next=newNode;
}
void insertAtPosition(Node *&head, int pos, int val){
    Node* newNode=new Node(val);
    cout<<endl<<endl;
    if(head==NULL){
        head=newNode;
        cout<<endl<<"inserted at head"<<endl;
        return;
    }
    Node* temp=head;
    for(int i=1; i<=pos-1; i++){
      temp=temp->next;
    };
    //temp ekhon shes index e ache.
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"inserted at "<<pos<<endl;
    return;
}

void insertAtHead(Node *&head, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        cout<<endl<<"head is null. inserted at head"<<endl;
        return;
    }
    newNode->next=head;
    head=newNode;
    cout<<endl<<"inserted at head"<<endl;
}
void print_linked_list(Node *head)
{
   Node* temp=head;
   cout<<endl<<endl<<"Your List: ";
   while(temp!=NULL){
     cout<<temp->val<<" ";
     temp=temp->next;
   }
   cout<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout<<"Option 3: Insert at pos"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op==3){
            cout << "Please enter value and pos: ";
            int v,pos;
            cin >>v>>pos;
            insertAtPosition(head, pos, v);
        }
        else if(op==4){
            cout << "Please enter value: ";
            int v;
            cin >>v;
            insertAtHead(head,v);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}