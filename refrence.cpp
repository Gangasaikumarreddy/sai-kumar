//call by value 
//swap two numbers 
#include<iostream> 
using namespace std; 
void swap(int &x , int &y) //a=5 b=6 
{ 
	int temp; 
	temp=x; //temp= 5 
	x=y; 
	y=temp; 
	cout<<"a after swapping="<<x<<endl; 
	cout<<"b after swapping="<<y<<endl; 
} 
main() 
{ 
	int a,b; 
	cout<<"enter two numbers="; 
	cin>>a>>b; 
		cout<<"a before swapping="<<a<<endl; 
	cout<<"b before swapping="<<b<<endl; 
	swap(a,b);
		cout<<"a after swapping in the main="<<a<<endl; 
	cout<<"b after swapping in the main="<<b<<endl;  
}
