// Lab 8.4.3 by Jeongseop Yi
#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include "matrix.cpp"

int main()
{
	int ax, ay, aval, bx, by, bval;
	cin >> ax >> ay >> aval >> bx >> by >> bval;

	matrix A(ax, ay, aval);
	matrix B(bx, by, bval);

    matrix C(0,0);
    cout << "Matrix A" << endl;
    cout << A.printMatrix() << endl;

    cout << "Matrix B" << endl;
    cout << B.printMatrix() << endl;

    A = A + 1;
    cout << "Matrix A + 1:" << endl;
    cout << A.printMatrix() << endl;

    A = A * 2;
    cout << "Matrix A * 2:" << endl << A.printMatrix() << endl;

    A = A - 1;
    cout << "Matrix A - 1:" << endl << A.printMatrix() << endl;


    cout << "Matrix A + B:" << endl;
    try
    {
        C = A + B;
        cout << C.printMatrix() << endl;
    }
    catch (...) {}

    cout << "Matrix A - B:" << endl;
    try
    {
        C = A - B;
        cout << C.printMatrix() << endl;
    }
    catch (...) {}

    cout << "Matrix A * B:" << endl;
    try
    {
        C = A * B;
        cout << C.printMatrix() << endl;
    }
    catch (...) {}
}
