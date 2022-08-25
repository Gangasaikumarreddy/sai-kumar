//types of pointer
//dangling pointer
#include<iostream>
using namespace std;
main()
{ 
int a=10;
int *p;
{ 
p=&a;
}
cout<<p;
}
