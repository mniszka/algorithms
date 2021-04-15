//prime factors of a given number

#include<iostream> 
#include<cmath> 
using namespace std; 

int main() 
{ 

int number; 
cout<<"Put a number: "; 
cin>>number; 

cout<<"Prime factors of number "<<number<<": "; 

int a=2; //2 is first prime number

 while(number>1 && a<=sqrt(number)) 
{ 
while(number % a==0)  
{ 
cout<<a<<" "; 
number/=a; 
} 
++a; 
} 

if(number>1) cout<<number; 
cout<<endl; 
return 0; 
} 
