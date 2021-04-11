//check if a given number is a prime number

#include <iostream>
#include <math.h>
using namespace std;

bool prime (int n)
{
        if (n<2)
                return false; //if the number is less than 2 it is not a prime number
                
        for (int i=2;i<=sqrt(n);i++) //or  i*i<=n
                if(n%i==0)
                        return false; 
        return true;
}

int main()
{
        int n;
        for(;;){
        cout<<"Put a number: ";
        cin>>n;
        
        if(prime(n)) //or prime(n)==1
                cout<<"the number "<<n<<" is a prime number"<<endl;
        else
                cout<<"the number "<<n<<" is an even number"<<endl;
        
        
        }
        return 0;
}
