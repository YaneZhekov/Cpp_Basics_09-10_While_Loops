#include <iostream>
using namespace std;


int main()
{
    double money;

    cin >> money;

    int toInt = money * 100;
    int count = 0;

    while (toInt > 0) {

        if (toInt >= 200) {
            toInt -= 200;
            count++;
        }
        else if (toInt >= 100) {
            toInt -= 100;
            count++;
        }
        else if (toInt >= 50) {
            toInt -= 50;
            count++;
        }
        else if (toInt >= 20) {
            toInt -= 20;
            count++;
        }
        else if (toInt >= 10) {
            toInt -= 10;
            count++;
        }
        else if (toInt >= 5) {
            toInt -= 5;
            count++;
        }
        else if (toInt >= 2) {
            toInt -= 2;
            count++;
        }
        else {
            toInt -= 1;
            count++;
        }
    }
    cout << count;

}

