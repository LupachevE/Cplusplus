// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "locale.h"
#include "time.h"
#include "fstream"
#define MAX_RAND 100

using namespace std;
void randMatr(int *a, int n = 10)
{
	
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % MAX_RAND;
	}
}
void printMatr(int *a, int n = 10)
{
	for (int i = 0; i < n; i++)
	{
		cout  << a[i]<< "   ";
	}
	cout << "\n";
}
void inline swap (int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
void inline swap (int &a, int &b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
}
void sortMatr(int *a, int mode, int n = 10)
{
	if (mode > 1 || mode < 0)
	{
		cout << "Неверный режим \n";
		return;
	}
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				if (mode == 0)
				{
					swap (a[j], a[j + 1]);
				}
				else
				{
					swap (&a[j], &a[j + 1]);		
				}
			}
		}
	}
}
int main()
{
	setlocale(0, "rus");
	srand(time(NULL));
	int mode;
	int n;
	ofstream fout;
	cout << "Ожидание ввода длины массива ";
	cin >> n;
	cout << "Ожидание ввода режима ";
	cin >> mode;
	int *arr = new int [n];
	int *b = new int [n];
	int *c = new int [n];
	//int *&b = arr;
	randMatr (arr, n);
	randMatr (b, n);
	randMatr (c, n);
	printMatr (arr, n);
	printMatr (b, n);
	printMatr (c, n);
	cout << "\n\n\n";
	sortMatr (arr, mode, n);
	//printMatr(b, n);
	printMatr (arr, n);
	fout.open ("test.txt");
	if(!fout)
	{
		cout << "Не удалось открыть файл\n";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		fout << arr[i] << "  ";
	}
	fout.close ();
	delete []arr;
	delete []b;
	delete []c;
	return 0;
}

