#include<iostream>
using namespace std;

//Function Signature
void print(int number)
{
    //Function Body
    for(int i=1;i<=number;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int range;
    cout<<"Enter the range:"<<endl;
    cin>>range;
    //Function Call
    print(range);
}