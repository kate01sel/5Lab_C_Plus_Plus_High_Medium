#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i, n;
	double p = 1;
	cout << "Enter kolvo number ";
	cin >> n;

	double *arr = new double[n];

	ifstream fin("Laba 5.txt");
	for (i = 0; i < n; i++)
	{
		fin >> arr[i];
		p *= arr[i];
	}
	fin.close();

	cout << p;

	ofstream fout("Laba 5.1 .txt");
	fout << p;
	fout.close();

    return 0;
}

