#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int soap;
    cin >> soap;

    string symbol = "";

    int count = 0;
    int amountOfSoap = soap * 750; 
    int totalPlates = 0;
    int totalPots = 0;

    while (amountOfSoap >= 0) {

        getline(cin >> ws, symbol);

        if (symbol == "End") {
            break;
        }

        int platesToBeWashed = stoi(symbol);

        count++;

        if (count < 3) {
            amountOfSoap -= platesToBeWashed * 5;
            totalPlates += platesToBeWashed;
        }
        else if (count == 3) {
            amountOfSoap -= platesToBeWashed * 15;
            totalPots += platesToBeWashed;
            count = 0;
        }
    }

    if (amountOfSoap < 0) {
        cout << "Not enough detergent, " << abs(amountOfSoap) << " ml. more necessary!" << endl;
    }
    else {
        cout << "Detergent was enough!" << endl << totalPlates << " dishes and " << totalPots << " pots were washed." << endl << "Leftover detergent " << amountOfSoap << " ml." << endl;
    }
}
