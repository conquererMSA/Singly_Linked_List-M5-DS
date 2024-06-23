#include<bits/stdc++.h>
using namespace std;
/* */
class Node {
  public:
  int val;
  Node* next=NULL;
  Node(int val){
    this->val=val;
  }
};
int main(){
    Node* head=new Node(5);
    Node* a=new Node (10);
    Node* b=new Node(15);
    // ekhane head and a hocce duita node ba object er pointer ba memory address. class tar object er memory address return kore.
    
    head->next=a;
    a->next=b;
    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    //    head=> a=> val=10;  
    //ekhane head hocce linkedList er first node/variable. head hocce linkedList er first node er Memory address/pointer.
    //head ekti memory address tai head ke dereference korle node pawya za. ei obj er moddhye val and next variable ache. next abar ekta pointer karon next er moddhye tar poroborti node a er memory address ache. tai next ke deference korle a node/obj er variable val and next pai.

    cout<<head->next->next->val<<endl;
    //    head=> a=>  b=>val=15
    //ekhane sec next hocce b node er pointer zake deference korle b node/obj er val and next variable pawya zabe. b obj er val variable er value hocce 15.

    return 0;
}