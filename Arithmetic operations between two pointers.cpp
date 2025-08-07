//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int ar[]={1,2,3,4,5,6,7};
    int *p1=&ar[2];
    int *p2=&ar[4];
    int diff=*p2-*p1;
    int add=*p2+*p1;
    int multi=(*p2)*(*p1);
    cout<<"pointer 1: "<<*p1<<endl;
    cout<<"pointer 2: "<<*p2<<endl;
    cout<<"difference of pointers is : "<<diff<<endl;
    cout<<"addition of pointers is : "<<add<<endl;
    cout<<"product of pointers is : "<<multi<<endl;


    return 0;
}

//OUTPUT:
/*
pointer 1: 3
pointer 2: 5
difference of pointers is : 2
addition of pointers is : 8
product of pointers is : 15
*/
