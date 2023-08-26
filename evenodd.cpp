#include<iostream>
using namespace std;
bool check(int number)
{
    if(number&1)
    return 0;
    else
    return 1;
}
int main()
{
    int number;
    cout<<"Enter the number:"<<endl;
    cin>>number;
    bool ans=check(number);
    if(ans==0)
    {
        cout<<" The "<<number<<" is odd "<<endl;
    }
    else{
        cout<<" The "<<number <<" is even "<<endl;
    }
}
//OUTPUT
// Enter the number:
// 2
//  The 2 is even
// Enter the number:
// 1
//  The 1 is odd