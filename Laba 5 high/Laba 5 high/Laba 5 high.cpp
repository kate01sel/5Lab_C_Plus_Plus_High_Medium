#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;



int main()
{
	int i, j, h, k;
	double arr[3][6];
	
	cout << "Enter kolvo matrix ";
	cin >> k;

	ifstream fin("Laba 5.txt");
	for (h = 0; h < k; h++)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 6; j++)
			{
				fin >> arr[i][j];
				cout << arr[i][j] << " ";
			}
		cout << endl;
		}
		cout << endl << endl;

		if (arr[0][0] == 0)
		{
			ofstream fout("Laba 5.1.txt", ios_base::app);
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 6; j++)
				{
					fout << arr[i][j] << " ";
				}
				fout << endl;
			}
			fout << endl;
			fout.close();
		}
	}
	fin.close();

	return 0;
}

