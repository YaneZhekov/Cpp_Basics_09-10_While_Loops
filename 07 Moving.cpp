#include <iostream>
#include <string>
using namespace std;


int main()
{
    int width, lenght, height;

    cin >> width >> lenght >> height;

    int volume = width * lenght * height;

    string symbol = "";

    while (volume > 0 && symbol != "Done") {

        getline(cin >> ws, symbol);

        if (symbol == "Done") {
            break;
        }

        int volumeTaken = stoi(symbol);

        volume -= volumeTaken;


    }


    if (volume < 0) {
        cout << "No more free space! You need " 
            << abs(volume) << " Cubic meters more." << endl;
    }
    else if (symbol == "Done") {
        cout << volume << " Cubic meters left." << endl;
    }
}

