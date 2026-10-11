// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double f(const double a, const double b, const double c); // прототип

int main()
{
	double t, s;

	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;

	double p = (f(1, pow(t, 2), s) + f(t, pow(s, 2), 1)) / (1 + pow(f(1, t * s, 1), 2));

	cout << "p = " << p << endl;

	return 0;
}

double f(const double a, const double b, const double c) //визначення
{
	double r = sin(a * b * c);
	return r * r / (a * a + b * b + c * c);
}