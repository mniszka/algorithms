//smallest

#include <iostream>
using namespace std;
int main(){
  
int numbers[6] = {6,2,9,0,4,-2};
int min=numbers[0];
int empty;

for(int i=0; i<5; i++){
if(min>numbers[i+1]){
empty = min;
min=numbers[i+1];
numbers[i+1] = empty;
}
}
cout<<"the smallest number is "<< min;
return 0;
}

