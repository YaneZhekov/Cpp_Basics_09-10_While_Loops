#include <iostream>
#include <string>
using namespace std;


int main()
{
    int unhappy, degree;
    string task;

    cin >> unhappy;

    double unhappyAmount = 0;
    double degreeTotal = 0;
    int totalExercises = 0;
    string lastTask = "";
    double average = 0;

    while (unhappy > unhappyAmount) {

        lastTask = task;
        totalExercises++;

        getline(cin >> ws, task);

        if (task == "Enough") {
            
            totalExercises--;
            average = average / totalExercises;

            cout.setf(ios::fixed);
            cout.precision(2);

            cout << "Average score: " << average << endl;
            cout << "Number of problems: " << totalExercises << endl;
            cout << "Last problem: " << lastTask << endl;

            return 0;
        }
        
        cin >> degree;
        

        if (degree <= 4) {
            unhappyAmount++;
        }

        average += degree;
    }

    cout << "You need a break, " << unhappy << " poor grades." << endl;

}

