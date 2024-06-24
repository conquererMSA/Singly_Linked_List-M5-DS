#include<bits/stdc++.h>
using namespace std;
void refTest(int *p,int *&p2){
    // cout<<p<<endl; // 0x61ff0c
    // cout<<p2<<endl; // 0x61ff0c

    //  p=NULL;
    //  cout<<p<<endl; // 0
    //  ekhane p te val er reference soriye null assign kora hoyeche. null 0 output dey. za main fun er val e kuno poriborton ane na.

    // cout<<"addrees of p: "<<&p<<endl;
    // // ekhane pointer p er memory address print kora hoyeche.
    p2=NULL;
    //zehetu p and p2 val er memory address hold korto, sehetu duitar value same za val er pointer. p2 te NULL assign koray val er memory address soriye 0 bosiye diyeche.
    cout<<p<<endl;
}

int main(){
    int val=4;
    int *ptr=&val;
    //ekhane ptr value hocce val variable er memory address
    refTest(ptr,ptr);
    cout<<"xx: "<<ptr<<endl;
    // cout<<&val<<endl;
    return 0;
}