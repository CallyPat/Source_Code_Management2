#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//changed parameter type from int to float 
float average(float i1, float i2, float i3)
{
	// restructured variable even though not necessary
	float x = (i1 + i2 + i3) / 3.0;
	return x;
}

int main()
{
	float n1, n2, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	// corrected input variable form n2  to n3
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(3) << fixed << "The average is " << a << endl;

	return 0;
}