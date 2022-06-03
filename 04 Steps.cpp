#include <iostream>
#include <string>
using namespace std;


int main()
{
    string symbol, lastTask = "";

    int steps, totalSteps = 0;


    while (totalSteps < 10000 && lastTask != "Going home") {
        
        lastTask = symbol;
        getline(cin >> ws, symbol);

        if (symbol == "Going home") {
            continue;
        }
        
        steps = stoi(symbol);
        totalSteps += steps;

    }
    if (lastTask == "Going home") {

        if (totalSteps >= 10000) {
            cout << "Goal reached! Good job!" << endl;
        }
        else {
            int stepsLeft = 10000 - totalSteps;
            cout << stepsLeft << " more steps to reach goal." << endl;
        }

    }
    else {
        cout << "Goal reached! Good job!" << endl;
    }
    


}
