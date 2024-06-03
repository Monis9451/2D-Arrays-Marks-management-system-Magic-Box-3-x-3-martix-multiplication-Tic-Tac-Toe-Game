#include <iostream>
#include <string>
using namespace std;
void magic(int magic_square[][3], int unique_num);

int main()
{
	int magic_square[3][3];
	int unique_num = 0;
	magic(magic_square, unique_num);

	return 0;
}


void magic(int magic_square[][3], int unique_num)
{
	cout << "Enter the numbers in matrix in row vise manner: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> magic_square[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << magic_square[i][j] << "  ";
		}
		cout << endl;
	}
	unique_num = magic_square[0][0] + magic_square[0][1] + magic_square[0][2];
	if (unique_num == magic_square[1][0] + magic_square[1][1] + magic_square[1][2] &&
		unique_num == magic_square[2][0] + magic_square[2][1] + magic_square[2][2] &&
		unique_num == magic_square[0][0] + magic_square[1][0] + magic_square[2][0] &&
		unique_num == magic_square[0][1] + magic_square[1][1] + magic_square[2][1] &&
		unique_num == magic_square[0][2] + magic_square[1][2] + magic_square[2][2] &&
		unique_num == magic_square[0][0] + magic_square[1][1] + magic_square[2][2])
	{
		cout << "Given matrix is MAGIC";
	}
	else
	{
		cout << "Given matrix is NOT MAGIC";
	}
}