#include "Vector3d.h"
#include <iostream>

int main()
{
	cout << "Enter two vectors" << endl;
	cout << endl << endl;
	Vector3d q, u;
	cout << "First vector:";
	cin >> q;
	cout << endl;
	cout << "Second vector:";
	cin >> u;
	cout << endl;
	cout << "Adding vector:" << endl;
	cout << q + u;
	cout << endl << endl;
	cout << "Scalar product of vectors:" << endl;
	cout << q * u;

	return 0;
}