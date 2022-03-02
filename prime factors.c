#include <iostream>
#include <math.h>
using namespace std;

int main(){
int number = 12;
int n=2;
int finalNumber = sqrt(number);

  while(number>1 && n<finalNumber){
    while(number%n==0){
      cout<<n<<", ";
      number/=n;
    }
    n+=1;
  }
  if(number>1) cout<<number; 
}
