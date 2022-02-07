//check if a given number is a prime number

#include <iostream>
#include <math.h>
using namespace std;

bool primeNumber (int number)
{
        if (number<2)
                return false; //if the number is less than 2 it is not a prime number
                
        for (int i=2;i<=sqrt(number);i++) //or  i*i<=n
                if(number%i==0)
                        return false; 
        return true;
}

int main()
{
        int number;
        for(;;){
        cout<<"Put a number: ";
        cin>>number;
        
        if(primeNumber(number)) //or prime(n)==1
                cout<<"the number "<<number<<" is a prime number"<<endl;
        else
                cout<<"the number "<<number<<" is an even number"<<endl;
        
        
        }
        return 0;
}
