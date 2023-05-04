#include <bits/stdc++.h>
using namespace std;
int update(int &a)
{
    a = a + 1;
    return a;
}
int update1(int a)
{
    a = a + 1;
    return a;
}
int main()
{
    int i = 6;
    int j = i;
    cout << "Pass by Refrence:" << endl;
    cout << i << endl;
    update(i);
    cout << i << endl;
    cout << "Pass by Value:" << endl;
    cout << i << endl;
    update1(i);
    cout << i << endl;
}