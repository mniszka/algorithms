//3^4 = 81

#include<iostream>
using namespace std;

int expo(int a, int b)
{
  if(b==0) return 1;
  else
  return a=a*expo(a,--b);
}


int main()
{
  cout<<expo(3,4); 

}
