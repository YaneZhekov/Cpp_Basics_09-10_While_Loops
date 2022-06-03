#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    cout.setf(ios::fixed);
    cout.precision(2);

    double sum = 0;

    while (input != "NoMoreMoney") {
        
        double number = stod(input);

        if (number < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }
        else {
            cout << "Increase: " << number << endl;
            sum += number;
        }
        
        cin >> input;
    }
    cout << "Total: " << sum;
}

