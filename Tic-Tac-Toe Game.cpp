#include <iostream>
#include <string>
using namespace std;
void game_body(char body[][3]);
bool winner_checker(char body[][3], char player);
bool complete(char body[][3]);

int main()
{
	char body[3][3] = { {' ',' ',' ' }, {' ', ' ', ' '}, {' ', ' ', ' '}};
	bool player_turn = true;
	char player;
	int row, col;

	while(true)
	{
		game_body(body);
		if (player_turn == true)
		{
			player = 'X';
		}
		else
		{
			player = 'O';
		}
		cout << "Player " << player << "'s turn enter the number of row (0,1,2): ";
		cin >> row;
		cout << "Enter the number of row (0,1,2): ";
		cin >> col;
		if (row >= 0 && row < 3 && col >= 0 && col < 3 && body[row][col] == ' ')
		{
			body[row][col] = player;
			bool result1 = winner_checker(body, player);
			bool result2 = complete(body);
			if (result1 == true)
			{
				game_body(body);
				cout << endl;
				cout << "Player " << player << " WINS" << endl;
				break;
			}
			else if (result2 == true)
			{
				cout << "It's a TIE!" << endl;
				break;
			}
			else
			{
				player_turn =! player_turn;
			}

		}
		else
		{
			cout << "INVALID move!!!" << endl;
		}
	}

	return 0;
}



void game_body(char body[][3])
{
	system("CLS");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << body[i][j];
			if (j < 2)
			{
				cout << " | ";
			}
		}
		cout << endl;
		if (i < 2)
		{
			cout << "----------" << endl;
		}
	}
}

bool winner_checker(char body[][3], char player)
{
	for (int i = 0; i < 3; i++)
	{
		if ((body[i][0] == player && body[i][1] == player && body[i][2] == player) ||
			(body[0][i] == player && body[1][i] == player && body[2][i] == player))
			return true;
	}
	if ((body[0][0] == player && body[1][1] == player && body[2][2] == player) ||
		(body[0][2] == player && body[1][1] == player && body[2][0] == player))
		return true;

	return false;
}

bool complete(char body[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			{
				if (body[i][j] == ' ')
					return false;
			}
		}
	}
	return true;
}