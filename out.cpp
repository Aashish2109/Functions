#include<iostream>
using namespace std;
/*void update(int &a)
{
    a=a/2;
}*/
int update(int &a)
{
  
  a++;
  return a;
}

int main()
{
    int a=4;
    cout<<a<<endl;
    update(a);
    cout<<a;
}
//OUTPUT
//5(PBV)
//10(PBR)
