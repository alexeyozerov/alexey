#include <iostream>
#include <string>

using namespace std;

string GetHello()
{
    return "Hello";
}

int main()
{
    cout << GetHello() + " " + GetAdressat("world") + "!" << endl;
    return 0;
}
