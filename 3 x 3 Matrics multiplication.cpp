#include <iostream>
#include <string>
using namespace std;
void matrix_multiplication(int matrix1[][3], int matrix2[][3], int result[][3]);

int main()
{
	int matrix1[3][3];
	int matrix2[3][3];
	int result[3][3];
	matrix_multiplication(matrix1, matrix2, result);

	return 0;
}


void matrix_multiplication(int matrix1[][3], int matrix2[][3], int result[][3])
{
	cout << "Enter the data in 1st matrix in row vise manner: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "Enter the data in 2nd matrix in row vise manner: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = 0;
		}
	}
	system("CLS");
	cout << "1st matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix1[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "2nd matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix2[i][j] << "  ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	cout << endl << "Resultant matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << result[i][j] << "  ";
		}
		cout << endl;
	}
}