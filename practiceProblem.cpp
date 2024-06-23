#include<bits/stdc++.h>
using namespace std;
class Obj{
    public:
    int value;
    Obj* add=NULL;
    // prottyek-ti Node er add variable er initial value hobe NULL. zokhon ai node er porobortite kuno node asbe sekkhetre second node add hoye zawar por current node er add er value hobe second node er memory address.
    Obj(int value){
        this->value=value;
    }
};
int main(){
    Obj* head=new Obj(5);
    Obj* a=new Obj(7);
    Obj* b=new Obj(1);
    Obj* c=new Obj(14);
    Obj* d=new Obj(3);
    Obj* e=new Obj(11);

    //assign memory addresses
    head->add=a;
    a->add=b;
    b->add=c;
    c->add=d;
    d->add=e;
    // e te initially NULL set kora ache.

    // C: What is the value of Head?
    cout<<"value of Head: "<<head->value<<endl;
    // LinkedList er first node ke Head bola hoy. class theke kuno obj create korle class sei obj er memory address return kore. memory address ke dereference korle tar variable gulu access kora zay. ekhane head obj ke dereference korle tar moddye next and value variable access kora zabe.

    // D: What is the value of ? marked address location? //1020
     cout<<"memory address of d: "<<head->add->add->add->add<<endl;
    //zekuno node er second variale add e tar poroborti node er memory address store thake. tobe initialy add er value hoy NULL.

    // E: What will be the value of Head->Next->Next->Value? 1
    cout<<"value of b: "<<head->add->add->value<<endl;
   
    // F: What will be the value of Sum following pseudocode snippets?
    Obj* temp=head;
    int sum=0;
    while(temp->add!=d){
        //temp!=c temp e add set kora hoyeche zekhane d ekti memory address.
       // ekhane d ekti memory address and temp->add o memory address hold kore.
        sum=sum+temp->value;
        cout<<temp->value<<endl;
        temp=temp->add;
}
 cout<<"sum until d: "<<sum<<endl;
    return 0;
}