#include <iostream>
#include <string>
using namespace std;

int main()
{
    char symbol;

    int countO = 0, countN = 0, countC = 0;

    string message = "";
    string finalMessage = "";
 
    cin >> symbol;

    while (symbol != 'E') {

        if ((symbol > '@' && symbol < '[') || (symbol > '`' && symbol < '{')) {
            
            if (symbol == 'n') {
                countN++;
                if (countN > 1) {
                    message += symbol;
                    countN = 1;
                }
            }
            else if (symbol == 'o') {
                countO++;
                if (countO > 1) {
                    message += symbol;
                    countO = 1;
                }
            }
            else if (symbol == 'c') {
                countC++;
                if (countC > 1) {
                    message += symbol;
                    countC = 1;
                }
            }
            else {
                message += symbol;
            }
            
            if (countO == 1 && countN == 1 && countC == 1) {
                countO = 0;
                countN = 0;
                countC = 0;
                message += " ";
                finalMessage += message;
                message = "";
            }

        }
        cin >> symbol;
    }
    cout << finalMessage;  
}

