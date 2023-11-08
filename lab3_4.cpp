// Lab3_4.cpp
// Кузьмінська Єлизавета
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 29
#include <iostream>
using namespace std;
int main()
{

	double R;
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "R = "; cin >> R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (((x * x + y * y <= R * R) && (x <= 0) && (y <= 0)) ||
		((x * x + y * y <= R * R) && ((x - 1) * (x - 1) <= y) && (x >= 0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
