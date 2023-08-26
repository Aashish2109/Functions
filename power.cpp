#include<iostream>
using namespace std;

int calculate(int base,int power)
{
    
    for(int i=0;i<=power;i++)
    {
        return base*base;
    }
}
int main()
{
    int base,power;
    cout<<"Enter the base:"<<endl;
    cin>>base;
    cout<<"Enter the power:"<<endl;
    cin>>power;
    int ans=calculate(base,power);
    cout<<"The ans is:"<<ans;
}
//OUTPUT
// Enter the base:
// 15
// Enter the power:
// 15
// The ans is:225