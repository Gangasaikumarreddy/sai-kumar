#include<iostream>
using namespace std;
void add()
{ 
static int a=8; // do not initialize again and again
a++;
cout<<a<<endl;
}
main()
{ 
add();
add();
add();
}
