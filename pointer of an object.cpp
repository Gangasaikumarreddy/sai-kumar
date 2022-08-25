//pointer of an object
#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata(int x, char y[]) //x=2, y="saikumar"
{
rollno=x;
strcpy(name,y);
}
void putdata()
{
cout<<"rollno is="<<rollno <<endl;
cout<<"name is="<<name<<endl;n
}
};
main()
{
class student obj[5];
class student *p[5];
int i;
for(i=1;i<=5;i++)
{
p[i]=&obj[i];
}
int rn;
char n[30];
for(i=1;i<=5;i++)
{
cout<<"enter rollno and name=";
cin>>rn>>n;
p[i]->getdata(rn,n);
}
cout<<"\n \n";
for (i=1;i<=5;i++)
{
p[i]->putdata();
}
}



