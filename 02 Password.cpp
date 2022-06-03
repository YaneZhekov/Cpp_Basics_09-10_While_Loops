#include <iostream>
using namespace std;

int main()
{
    string name;
    string password;

    cin >> name >> password;

    string input;

    cin >> input;

    while (input != password) {
        cin >> input;
    }

    cout << "Welcome " << name << "!";
}
