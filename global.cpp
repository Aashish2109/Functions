#include <bits/stdc++.h>
using namespace std;
int a = 2;
int update(int a)
{
    int ans;
    return ans = a + 1;
}
int update2(int &a)
{
    int ans;
    return ans = a + 4;
}
int main()
{
    cout << update(a) << endl;
    cout << update2(a) << endl;
}