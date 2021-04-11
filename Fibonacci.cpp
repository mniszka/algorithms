//1,1,3,5,8,13,21,34,55

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int a=0; 
  int b=1;
 

  for(int i =1; i<=10; i++){
   
    cout<<b;
    b+=a;
    a=b-a;
  }
}
