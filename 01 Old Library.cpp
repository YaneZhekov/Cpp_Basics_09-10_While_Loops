#include <iostream>
#include <string>
using namespace std;


int main()
{
    string book;

    getline(cin >> ws, book);

    string bookCheck;

    int totalBooks = 0;

    while (bookCheck != "No More Books") {

        getline(cin >> ws, bookCheck);
        totalBooks++;

        if (book == bookCheck) {
            break;
        }

    }

    totalBooks--;

    if (book == bookCheck) {
        cout << "You checked " << totalBooks << " books and found it." << endl;
    }
    else {
        cout << "The book you search is not here!" << endl
            << "You checked " << totalBooks << " books.";
    }
    
}

