#include <iostream>
#include <math.h>
using namespace std;

int Euclid (int a, int b){
  int c;
  while (b!=0){
    c = a%b;
    a = b;
    b = c;
  }
  return a;
}

   
int main(){
  int a, b;
  cout<<"Put two numbers"<<endl;
  cin>>a>>b;
  cout<<"answer: " << Euclid(a,b)<<endl;
  return 0;
}
