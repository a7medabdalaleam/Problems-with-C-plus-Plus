#include <iostream>
using namespace std;
bool check(int x, int y, int n)
{
    return n % x == 0 & n % y == 0;
}
int main()
{
    cout << check(1, 3, 3);
}