#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    int budgetNeeded;

    cin >> budgetNeeded;

    int moneyGathered = 0;
    int count = 0;
    string symbol = "";
    double cash = 0;
    double credit = 0;
    int cashCount = 0;
    int creditCount = 0;

    while (moneyGathered < budgetNeeded) {

        getline(cin >> ws, symbol);

        if (symbol == "End") {
            break;
        }

        count++;

        int transaction = stoi(symbol);

        if (count == 1 ) {
            if (transaction <= 100) {
                cout << "Product sold!" << endl;
                moneyGathered += transaction;
                cash += transaction;
                cashCount++;
            }
            else {
                cout << "Error in transaction!" << endl;
            }
        }
        else if (count == 2) {
            if (transaction >= 10) {
                cout << "Product sold!" << endl;
                moneyGathered += transaction;
                credit += transaction;
                creditCount++;
            }
            else {
                cout << "Error in transaction!" << endl;
            }

            count = 0;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (moneyGathered >= budgetNeeded) {
        cout << "Average CS: " << (double)cash / cashCount << endl;
        cout << "Average CC: " << (double)credit / creditCount << endl;
    }
    else {
        cout << "Failed to collect required money for charity." << endl;
    }
}

