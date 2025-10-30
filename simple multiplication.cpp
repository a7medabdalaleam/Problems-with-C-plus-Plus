#include <iostream>
using namespace std;
int multi(int a)
{
    return a * (8 + (a & 1));
}
int main()
{
    cout << multi(4) << endl;
}