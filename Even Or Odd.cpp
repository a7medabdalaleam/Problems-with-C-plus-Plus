#include <iostream>
#include <string>
using namespace std;
string Odd_Or_Even(int number)
{
    if (number % 2 == 0)
        return "Even";
    else
        return "Odd";
}
int main()
{
    cout << " The number is ==> " << Odd_Or_Even(5) << endl;
}