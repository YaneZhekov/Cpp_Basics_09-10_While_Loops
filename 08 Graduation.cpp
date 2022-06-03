#include <iostream>
using namespace std;

int main()
{
	string name;
	double input;

	cin >> name >> input;

	cout.setf(ios::fixed);
	cout.precision(2);

	double sum = 0;

	int i = 0;
	int c = 0;

	double average = 0;

	while (i < 13 ) {

		sum += input;

		if (input < 4) {
			c++;
		}

		if (c == 2) {
			break;
		}

		i++;

		if ((c == 0 || c == 1) && i == 12) {
			average = sum / i;
			cout << name << " graduated. Average grade: " << average << endl;
		}

		cin >> input;
	}

	if (c == 2) {
		cout << name << " has been excluded at " << i << " grade" << endl;
	}

}
