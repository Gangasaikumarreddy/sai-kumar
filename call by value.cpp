//call by value
#include<iostream>
using namespace std;
int add(int a,int b)
{ 
int c;
c=a+b;
return c;
}
int mul(int a,int b)
{ 
int m;
m=a*b;
return m;
}
main()
{ 
int a,b,c,m;
cin>>a>>b;
c=add(a,b);
m=mul(a,b);
cout<<c<<endl<<m;
}
