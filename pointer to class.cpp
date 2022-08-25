//object to class 
#include<iostream>
#include<string.h>
using namespace std;
class student
{ 
int rollno;
char name[];
public:
	void getdata(int x, char y[]) //x=2 y=saikumar
{ 
rollno=x;
strcpy(name,y);
}
void putdata()
{
	cout<<"rollno is= "<<rollno<<endl;
	cout<<"name is="<<name;
}
};
main()
{ 
class student obj;
obj.getdata(2,"saikumar");
obj.putdata();
}
