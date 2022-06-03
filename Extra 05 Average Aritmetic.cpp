#include <iostream>
using namespace std;


int main()
{
    int n, num;

    cin >> n;

	int numTotal = 0;

	for (size_t i = 0; i < n; i++)
	{
		cin >> num;
		numTotal += num;

	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << (double)numTotal / n << endl;
}
