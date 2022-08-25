//create class with name:student,take the value of rollno and name
//from the user and print those 
#include<iostream>
using namespace std;
class student
{ 
int rollno;
char name[30];
public:
void getdata()
{ 
cout<<"enter the values of rollno and name=";
cin>>rollno>>name;
}
void showdata()
{ 
cout<<"\n rollno is="<<rollno;
cout<<"\n name is="<<name;
}} ;
main() 
{ 
class student obj;
obj.getdata();
obj.showdata();
}
