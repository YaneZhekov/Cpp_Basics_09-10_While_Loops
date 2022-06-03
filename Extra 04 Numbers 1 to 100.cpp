#include <iostream>
using namespace std;


int main()
{

    int n = 0;
    
    while (n < 100) {
        n++;
        if (n % 3 == 0) {
            cout << n << endl;
        }
    }
}

