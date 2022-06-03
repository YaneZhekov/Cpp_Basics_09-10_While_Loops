#include <iostream>
#include <string>
using namespace std;


int main()
{
    double moneyNeeded, moneyAmount, money;
    string saveOrSpend = "";

    cin >> moneyNeeded >> moneyAmount;

    int spendCount = 0;
    int days = 0;

    while (moneyAmount < moneyNeeded && spendCount < 5) {
        
        getline(cin >> ws, saveOrSpend);
        cin >> money;

        if (saveOrSpend == "spend") {
            moneyAmount -= money;
       
            if (moneyAmount < 0) {
                moneyAmount = 0;
            }
            spendCount++;
        }
        else if (saveOrSpend == "save") {
            moneyAmount += money;
            spendCount = 0;
        }

        days++;

    }
    if (spendCount == 5) {
        cout << "You can't save the money." << endl;
        cout << days << endl;
    }
    else {
        cout << "You saved the money for " << days << " days.";
    }

}

