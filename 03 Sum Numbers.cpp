#include <iostream>
using namespace std;


int main()
{
	int num, total;

	cin >> total;

	int sum = 0;

	while (sum < total) {

		cin >> num;
		sum += num;
	}
	cout << sum;
}

