#include <iostream>
#include <math.h>
using namespace std;

int main(){

  int n = 12;
  int k= 2;

  //factorize the number
  while(n>1 && k<= sqrt(n)){
    while(n%k ==0){
      cout<<k<<", ";
      n/=k;
    }
    ++k;

  }
  if(n>1) cout<<n;

return 0;
}
