#include<iostream> 
#include<cmath> 
using namespace std; 

int main() 
{ 
int number, pierw, pom; 
cout<<"Put a number: "; 
cin>>number; 
 

cout<<"prime factors: "; 

int k=2; //first prime number


 while(number>1&&k<=sqrt(number)) 
{ 
while(number%k==0)  
{ 
cout<<k<<" "; 
number/=k; 
} 
k++; 
} 

if(number>1) cout<<number; 
cout<<endl; 
return 0; 
} 
