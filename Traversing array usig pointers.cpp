//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int ar[]={1,2,3,4,5,6,7};
    int *p1=&ar[6];
    cout<<"given array: "<<endl;
    for(int i=0;i<7;i++){
        
        cout<<ar[i]<<endl;
        
    }
    cout<<"reversed array: "<<endl;
    for (int i=0;i<7;i++){
        cout<<*p1<<endl;
        p1--;
    }
    return 0;
}

OUTPUT:
/*
given array: 
1
2
3
4
5
6
7
reversed array: 
7
6
5
4
3
2
1*/
