//types of pointer
//pointer arithematic
#include<iostream>
using namespace std;
main()
{ 
int a=10;
int *p;
cout<<"address of a="<<p<<endl;
p=p+4;
cout<<"updated address "<<p<<endl;
cout<<"value at updated address= "<<*p<<endl;
*p=20;
cout<<"value= "<<*p; //20
}
