#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(6) << "S" << setw(6) << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	x = xp;
	while ( x  <= xk)
	{
		n = 0; // ����� �������� �� ����� �������� �������
		a = 1; // ����� �������� �� ����� �������� �������
		S = a;
		do {
			n++;
			R = - ((x * x) / n); // ����� �������� �� ����� �������� �������
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(7) << setprecision(2) << x  << " |"
			<< setw(7) << setprecision(5) << exp( - (x * x)) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}
