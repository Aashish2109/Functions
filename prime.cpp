#include<iostream>
using namespace std;
bool isPrime(int number)
{
    
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number;
    cout<<"Enter the number you want to check:"<<endl;
    cin>>number;
    bool ans=isPrime(number);
    if(ans)
    {
        cout<<"The " <<number<< " is Prime"<<endl;
    }
    else
    {
        cout<<"The " <<number<< " is not Prime"<<endl;
    }
}
//OUTPUT
// Enter the number you want to check:
// 4
// The 4 is not Prime

// Enter the number you want to check:
// 11
// The 11 is Prime