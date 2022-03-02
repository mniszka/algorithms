//find the smallest number

#include <iostream>
using namespace std;

int main(){
  int minNumber; 
  int numbers[5] = {4,2,7,5,3};
  int size = sizeof(numbers)/sizeof(numbers[0]); 

  
  for(int i=0; i<size-1; i++){
    minNumber=i;
    for(int j=i+1; j<size; j++)
      if(numbers[j]<numbers[minNumber])
      minNumber=j;
      swap(numbers[i], numbers[minNumber]);
  
  }
  
cout<<numbers[0]; //smallest number
  
}
