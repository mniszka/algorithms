//find the smallest number

#include <iostream>
using namespace std;

int main(){
  int min; //the smallest number
  int numbers[5] = {4,2,7,5,3};
  int n = sizeof(numbers)/sizeof(numbers[0]); //number of elements

  
  for(int i=0; i<n-1; i++){
    min=i;
    for(int j=i+1; j<n; j++)
      if(numbers[j]<numbers[min])
      min=j;
      swap(numbers[i], numbers[min]);
  
  }
  
cout<<numbers[0]; //smallest number
  
}
