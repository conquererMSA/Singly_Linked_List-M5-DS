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
void insertAtTail(Node *&head, int v)
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

void deleteFromTail(Node *&head){
    if(head==NULL){
        cout<<endl<<"List has no node"<<endl;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        cout<<"List has one node, deleted it"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
      temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=NULL;
    delete deleteNode;
    cout<<endl<<"delete from tail"<<endl<<endl;
    return;
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
        cout << "Option 3: delete from tail" << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insertAtTail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op==3){
            deleteFromTail(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}