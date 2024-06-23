#include<bits/stdc++.h>
using namespace std;
/*
 
   
 
*/
class  Node {
    public:
    int val;
    Node* next;
    // LinkedList er prottyekti variable hobe Node class; zekhane Node class ekti int variable val and current Node ti tar poriborti Node variable er memory address next variable er moddhye rekhe dey.
    // ekti Node tar val variable er moddhye tar nijer int value rakhe and next er moddhye tar porborti node er memoery address next variable er moddhye hold kore. evabe memory te choriye-chitiye thaka variable gulur moddhye link create hoy. eta ekta list toire kore.
};

int main(){
    Node a,b;
    a.val=16;
    b.val=7;

    a.next=&b;
    b.next=NULL;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    //ekhane a node er next variable tar porborti node b er memory address ho;d kore ache. tai a node er next variable ke derefernce kore b node er val variable access kora zay.
    return 0;
}