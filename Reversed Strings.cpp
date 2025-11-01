#include <iostream>
#include <string>
using namespace std;
string Reversed_string(string str)
{
    string reverse = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        reverse += str[i];
    }
    return reverse;
}
int main()
{
    cout << Reversed_string("Ahmed") << endl;
}