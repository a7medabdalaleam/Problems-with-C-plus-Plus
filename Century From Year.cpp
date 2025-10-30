#include <iostream>
#include <cmath>
using namespace std;
int cfy(int year)
{
    if (year % 100 == 0)
    {
        return year / 100;
    }
    else
        return year / 100 + 1;
}
int main()
{
    cout << cfy(1321);
}