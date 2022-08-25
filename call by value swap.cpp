//call by value 
//swap two numbers 
#include<iostream> 
using namespace std; 
void swap(int a , int b) //a=5 b=6 
{ 
	int temp; 
	temp=a; //temp= 5 
	a=b; 
	b=temp; 
	cout<<"a after swapping="<<a<<endl; 
	cout<<"b after swapping="<<b<<endl; 
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
