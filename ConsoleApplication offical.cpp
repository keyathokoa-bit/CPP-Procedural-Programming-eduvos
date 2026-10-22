#include <iostream>
using namespace std;

int main()
{
    int dayNumber;

    cout << "Enter a day number: ";
    cin >> dayNumber;

    switch (dayNumber)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    default:
        cout << "Invalid day" << endl;
        break;
    }

    return 0;
}