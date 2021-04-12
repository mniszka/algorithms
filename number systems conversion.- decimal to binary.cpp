//decimal to binary

#include <iostream>
using namespace std;

void convert(int number)
{
        if(number>0)
        {
              //when we use recursion, digit numbers will be display in inverse order

                convert(number/2); 

                cout<<number%2; //digit number
                
        }
       
         
}

int main()
{
        int number;

        for(;;){

        cout<<"Put a decimal number bigger than 0: ";
        cin>>number;
        cout<<"Binar: ";

        convert(number);
        
        cout<<endl;
        };

  
        return 0;
}
