
//Priyansha
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    int a=15;
    int *aptr;
    char c='A';
    char *cptr;
    bool b=0;
    bool *bptr;
    float d=3.2;
    float *dptr;
    double e=9.88;
    double *eptr;
    aptr=&a;
    bptr=&b;
    cptr=&c;
    dptr=&d;
    eptr=&e;
    cout<<"int datatype: "<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<"boolean datatype: "<<bptr<<endl;
    cout<<*bptr<<endl;
    cout<<"character datatype: "<<cptr<<endl;
    cout<<*cptr<<endl;
    cout<<"float datatype: "<<dptr<<endl;
    cout<<*dptr<<endl;
    cout<<"double datatype: "<<eptr<<endl;
    cout<<*eptr<<endl;
    
    aptr++;
    bptr++;
    cptr++;
    dptr++;
    eptr++;
    cout<<endl;
    cout<<"int after increment: "<<aptr++<<endl;
    cout<<"boolean after increment: "<<bptr++<<endl;
    cout<<"char after increment: "<<cptr++<<endl;
    cout<<"float after increment: "<<dptr++<<endl;
    cout<<"double after increment: "<<eptr++<<endl;
    
    
    return 0;
}

//OUTPUT:
/*
int datatype: 0x7ffcb6375dd4
15
boolean datatype: 0x7ffcb6375dd2
0
character datatype: A
A
float datatype: 0x7ffcb6375dcc
3.2
double datatype: 0x7ffcb6375dc0
9.88

int after increment: 0x7ffcb6375dd8
boolean after increment: 0x7ffcb6375dd3
char after increment: 
float after increment: 0x7ffcb6375dd0
double after increment: 0x7ffcb6375dc8
*/
