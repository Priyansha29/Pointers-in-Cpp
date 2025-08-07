//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    string a;
    string *ptr;
    cout<<"Enter string: "<<endl;
    cin>>a;
    ptr=&a;
    cout<<"address of string is "<<ptr<<endl;
    cout<<"string is "<<*ptr;
   
    return 0;
}

//OUTPUT:
/*Enter string: 
HELLO
address of string is 0x7fff048e7cc0
string is HELLO
*/
