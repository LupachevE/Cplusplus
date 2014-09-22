// lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
//int main()
//{
//	return 0;
//}
//int main()
//{
//	cout << "Hello world!";
//	return 0;
//}
//int main()
//{
//	double d = 1.5;
//	int i = 10;
//	cout << "\nDouble is "<< d << "\nInteger is " << i;
//	return 0;
//}
//int main()
//{
//	double d;
//	int i;
//	cout << "Enter integer and floating point value\n";
//	cin >> i >> d;
//	cout << "\nDouble is "<< d << "\nInteger is " << i;
//	return 0;
//}
//void swap1 (int *a, int * b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap2 (int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

//int main()
//{
//	int x = 10, y = 20;
//	cout << " Now x=" << x << " , y=" << y;
//	swap1 (&x, &y);
//	cout << "\n Values swapped by swap1 \n now x=" << x << " , y=" << y << "   ";
//	return 0;
//}

//int main()
//{
//	int a = 10, &b = a;
//	b = 20;
//	cout << "\n a now is " << a;
//	return 0;
//}

//int main()
//{
//	int x = 10, y = 20;
//	cout << "x is " << x << " y is " << y;
//	swap1 (&x, &y);
//	cout << "\nValues swapped with fun swap1, x now is " << x << " y now is " << y;
//	swap2 (x, y);
//	cout << "\nValues swapped with fun swap2, x now is " << x << " y now is " << y;
//	return 0;
//}

//void changeint(int &i)
//{
//	i = 10;
//}
//
//int main()
//{
//	const int i = 5;
//	changeint(i);
//	return 0;
//}

//void PrintInt (int const &f)
//{
//	cout << f;
//}

//void PrintInt (int const &f)
//{
//	cout << f;
//	f = 10;
//}

//void main (void)
//{
//	const int a=5;
//	PrintInt (a);
//}

void swap (int *a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 20;
	cout << "x is " << x << " y is " << y;
	swap (&x, &y);
	cout << "\nValues swapped with fun swap1, x now is " << x << " y now is " << y;
	swap (x, y);
	cout << "\nValues swapped with fun swap2, x now is " << x << " y now is " << y;
	return 0;
}