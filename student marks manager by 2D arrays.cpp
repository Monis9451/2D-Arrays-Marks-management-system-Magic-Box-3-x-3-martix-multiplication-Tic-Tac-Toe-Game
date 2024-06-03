#include <iostream>
#include <string>
using namespace std;
void input(string students[], int marks[][3]);
void output(string students[], int marks[][3]);
void highest_in_each_quiz(string students[], int marks[][3]);
void overall_highest(string students[], int marks[][3]);
void search(string students[], int marks[][3]);
void sorted(string students[], int marks[][3]);

int main()
{
	string students[5];
    int marks[5][3];
    //part a: Input data
    input(students, marks);
    //part b: Display data
    output(students, marks);
    //part c: Highet marks of student in each quiz
    highest_in_each_quiz(students, marks);
    //part d: Overall Highest students's marks
    overall_highest(students, marks);
    //part e: Search any student's marks
    search(students,marks);
    //part f: Sorting according to positions
    sorted(students, marks);

    return 0;
}

void input(string students[], int marks[][3])
{
	cout << "Enter the names of students: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> students[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the Quiz " << i + 1 << " marks" << endl;
		for (int j = 0; j < 5; j++)
		{
			cin >> marks[j][i];
		}
	}
}

void output(string students[], int marks[][3])
{

	cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << students[i] << ":\t";
		for (int j = 0; j < 3; j++)
		{
			cout << marks[i][j] << "\t";
		}
		cout << endl;
	}
}

void highest_in_each_quiz(string students[], int marks[][3])
{
	int max1 = 0, max2 = 0, max3 = 0;
	string student1, student2, student3;
	for (int i = 0; i < 5; i++)
	{
		if (max1 < marks[i][0])
		{
			max1 = marks[i][0];
			student1 = students[i];
		}
	}
	cout << endl;
	cout << "The highest marks in Quiz 1 are " << max1 << " of student " << student1 << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		if (max2 < marks[i][1])
		{
			max2 = marks[i][1];
			student2 = students[i];
		}
	}
	cout << endl;
	cout << "The highest marks in Quiz 2 are " << max2 << " of student " << student2 << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		if (max3 < marks[i][2])
		{
			max3 = marks[i][2];
			student3 = students[i];
		}
	}
	cout << endl;
	cout << "The highest marks in Quiz 3 are " << max3 << " of student " << student3 << endl;
	cout << endl;
}

void overall_highest(string students[], int marks[][3])
{
	int total[5];
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	int max = 0;
	string student;
	for (int i = 0; i < 3; i++)
	{
		sum1 += marks[0][i];
	}
	total[0] = sum1;
	for (int i = 0; i < 3; i++)
	{
		sum2 += marks[1][i];
	}
	total[1] = sum2;
	for (int i = 0; i < 3; i++)
	{
		sum3 += marks[2][i];
	}
	total[2] = sum3;
	for (int i = 0; i < 3; i++)
	{
		sum4 += marks[3][i];
	}
	total[3] = sum4;
	for (int i = 0; i < 3; i++)
	{
		sum5 += marks[4][i];
	}
	total[4] = sum5;
	for (int i = 0; i < 5; i++)
	{
		if (max < total[i])
		{
			max = total[i];
			student = students[i];
		}
	}
	cout << endl << "The overall highest numbers are " << max << " of student " << student << endl;
}

void search(string students[], int marks[][3])
{
	string student;
	cout << endl << endl << "Enter the name of student for result: ";
	cin >> student;
	if (student == students[0])
	{
		cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
		cout << students[0] << ":\t";
		for (int i = 0; i < 3; i++)
		{
			cout << marks[0][i] << "\t";
		}
	}
	if (student == students[1])
	{
		cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
		cout << students[1] << ":\t";
		for (int i = 0; i < 3; i++)
		{
			cout << marks[1][i] << "\t";
		}
	}
	if (student == students[2])
	{
		cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
		cout << students[2] << ":\t";
		for (int i = 0; i < 3; i++)
		{
			cout << marks[2][i] << "\t";
		}
	}
	if (student == students[3])
	{
		cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
		cout << students[3] << ":\t";
		for (int i = 0; i < 3; i++)
		{
			cout << marks[3][i] << "\t";
		}
	}
	if (student == students[4])
	{
		cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
		cout << students[4] << ":\t";
		for (int i = 0; i < 3; i++)
		{
			cout << marks[4][i] << "\t";
		}
	}
}

void sorted(string students[], int marks[][3])
{
	cout << endl;
	cout << endl;
	cout << "Position:" << endl;
	cout << endl;
	int total[5];
	string students1[5] = { students[0],students[1] ,students[2] ,students[3] ,students[4] };
	int temp, max;
	string s_temp;
	for (int i = 0; i < 5; i++)
	{
		total[i] = marks[i][0] + marks[i][1] + marks[i][2];
	}
	cout << "\tQuiz1\tQuiz2\tQuiz3" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (total[i] < total[j])
			{
				temp = total[i];
				total[i] = total[j];
				total[j] = temp;

				s_temp = students[i];
				students[i] = students[j];
				students[j] = s_temp;
			}
		}
		if (students[i] == students1[0])
		{
			cout << students[i] << ":\t";
			cout << marks[0][0] << "\t" << marks[0][1] << "\t" << marks[0][2];
		}
		if (students[i] == students1[1])
		{
			cout << students[i] << ":\t";
			cout << marks[1][0] << "\t" << marks[1][1] << "\t" << marks[1][2];
		}
		if (students[i] == students1[2])
		{
			cout << students[i] << ":\t";
			cout << marks[2][0] << "\t" << marks[2][1] << "\t" << marks[2][2];
		}
		if (students[i] == students1[3])
		{
			cout << students[i] << ":\t";
			cout << marks[3][0] << "\t" << marks[3][1] << "\t" << marks[3][2];
		}
		if (students[i] == students1[4])
		{
			cout << students[i] << ":\t";
			cout << marks[4][0] << "\t" << marks[4][1] << "\t" << marks[4][2];
		}
		cout << endl;
	}
}