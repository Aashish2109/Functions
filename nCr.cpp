#include<iostream>
using namespace std;
int factorial(int number)
{
    int fact=1;
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int numerator=factorial(n);
    int denominator=factorial(r)*factorial(n-r);
    int ans=numerator/denominator;
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<" The ans is "<<ans;
}
//OUTPUT
// Enter the value of n and r
// 10
// 2
//  The ans is 45