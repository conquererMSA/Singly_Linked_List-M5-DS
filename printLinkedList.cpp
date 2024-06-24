#include<bits/stdc++.h>
using namespace std;
/* */
class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
//ekhane Node hocce ekti user defigned variable zar moddhye val and next nam e duita variable thake. val r moddhye obj er nij value and next er noddhye next node er pointer hold kore rakhe.
int main(){
   Node* head=new Node(12);
   Node* a=new Node(13);
   Node* b=new Node(14);
   Node* c=new Node(15);
   Node* d=new Node(16);
   //assign memory
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   Node* temp=head;
    //ekhane LinkedList er first node head er memory/pointer temp er moddhye rakha hoyeche. temp er moddhye val and next ache. ai next e abar a er next and val ache. a er next e abar b er val and next aceh.
    while(temp->next==NULL){
        //ekhane loop hote hote zokhon last node d te zabe tokhon d er next value hocce NULL. kintu last node er ager sob gulu node e next er value hocce val and next.
        cout<<temp->val<<endl;
        temp=temp->next;
    }

    return 0;
}