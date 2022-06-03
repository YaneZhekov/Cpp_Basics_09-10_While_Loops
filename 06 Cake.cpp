#include <iostream>
#include <string>
using namespace std;


int main()
{
    int lenght, width;

    cin >> lenght >> width;

    int cakeVolume = lenght * width;
    string symbol = "";
    int lastPieces = 0;
    int pieces = 0;

    while (cakeVolume > 0 && symbol != "STOP") {

        getline(cin >> ws, symbol);

        if (symbol == "STOP") {
            continue;
        }

        pieces = stoi(symbol);
        cakeVolume -= pieces;

    }
    if (symbol == "STOP") {
        cout << cakeVolume << " pieces are left." << endl;

    }
    else {
        cout << "No more cake left! You need " << abs(cakeVolume) 
            << " pieces more." << endl;
    }
    



}
