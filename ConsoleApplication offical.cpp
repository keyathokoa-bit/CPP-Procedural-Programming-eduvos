#include <iostream>
using namespace std;

int main() {
	int time = 20;
	if (time < 18) {
		cout << "Good day.";
	} else {
		cout << "Good evening.";
	}
	cout << endl;

	int day = 2;
	switch (day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	}
	cout << endl;

	int i = 0;
	while (i < 5) {
		cout << i << "\n";
		i++;
	}
	cout << endl;
	return 0;
}
