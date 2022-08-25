#include<iostream>
using namespace std;
int main()
{
  int n, y=0,rem;
  cout<<"enter a number:";
  cin>>n;
  int temp=n;
  while(n!=0) 
  { 
     rem=n%10;
     y=y*10+rem;
     n=n/10;
  }
  
  if(temp==y)
  cout<<"yes it is a palindrome";
  else
  cout<<"not a palindrome";
} 
