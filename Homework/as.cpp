#include<iostream>
#include <iomanip> 
using namespace std;
void main() {
//Task 1
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				if (i * j < 10)
				{
					cout << i * j << "   ";
				}
				else if (i * j <= 100)
				{
					cout << i * j << "  ";
				}

			}
			cout << endl;
//Task 2
	int Height;
		cout << "Enter Height: ";
		cin >> Height;
		for (int i = 0; i < Height; i++)
		{
			for (int j = 0; j < Height; j++)
			{
				if (i < Height / 3 && j < Height / 3 || i < Height / 3 && j >= (Height / 3) * 2 || i == 0 || j == 0 || i == Height - 1 || j == Height - 1 || i >= (Height / 3) * 2 && j < Height / 3 || i >= (Height / 3) * 2 && j >= (Height / 3) * 2)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}
			}
			cout << endl;
		}

//Task 3

		int Height;
		cout << "Enter Height: ";
		cin >> Height;
		for (int i = 0; i < Height; i++)
		{
			for (int j = 0; j < Height; j++)
			{
				if (j == Height - i || i == Height - 1 && j != 0)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}
			}
			for (int j = 0; j < Height; j++)
			{
				if (j == i || i == Height - 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}
			}


			cout << endl;
		}


//Task 4

		int Height;
		cout << "Enter Height: ";
		cin >> Height;
		for (int i = 0; i < Height; i++)
		{
			for (int j = 0; j < Height - i - 1; j++)
			{

				cout << " " << " ";
			}
			for (int j = Height - i - 1; j < Height; j++)
			{
				cout << "*" << " ";
			}for (int j = Height - i; j < Height; j++)
			{
				cout << "*" << " ";
			}
			cout << endl;

		}


//Task 5

		int height;
		cout << "Enter Height: ";
		cin >> height;
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (i + j == height - 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}

			}
			for (int j = 0; j < height; j++)
			{
				if (j == i - 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}

			}
			cout << endl;
		}
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (j == i + 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}

			}
			for (int j = 0; j < height; j++)
			{

				if (i <= (height - 3) && j + i == height - 3)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}


			}
			cout << endl;
		}

	//Task 6

		int height;
		cout << "Enter Height: ";
		cin >> height;
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (j <= height - i - 1)
				{
					cout << " " << " ";
				}
				else
				{
					cout << "*" << " ";
				}


			}
			for (int j = 0; j < height; j++)
			{
				if (j < i + 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}
			}
			cout << endl;
		}
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (j < i + 2)
				{
					cout << " " << " ";
				}
				else
				{
					cout << "*" << " ";
				}
			}
			for (int j = 0; j < height; j++)
			{

				if (j <= (height - i - 2))
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}

			}
			cout << endl;
		}

	//Task 7

		int height;
		cout << "Enter Height: ";
		cin >> height;
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (j < i + 1 || j == height - 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}

			}
			for (int j = 0; j < height; j++)
			{
				if (j < height - i - 1 && j != 0)
				{
					cout << " " << " ";
				}
				else
				{
					cout << "*" << " ";
				}
			}
			cout << endl;
		}
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (j < height - i || j == height - 1)
				{
					cout << "*" << " ";
				}
				else
				{
					cout << " " << " ";
				}
			}
			for (int j = 0; j < height; j++)
			{
				if (j < i && j != 0)
				{
					cout << " " << " ";
				}
				else
				{
					cout << "*" << " ";
				}
			}
			cout << endl;
		}
	}

	//Task 8
		int height;
		cout << "Enter Height: ";
		cin >> height;
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (i == 0 || i % 2 == 0)
				{
					if (j == 0 || j % 2 == 0)
					{
						cout << char(219) << "";
					}
					else
					{
						cout << " " << "";
					}
				}
				else if (i % 2 != 0)
				{
					if (j % 2 != 0)
					{
						cout << char(219) << "";
					}
					else
					{
						cout << " " << "";
					}
				}

			}
			cout << endl;
		}
	}























































































































































































































































































































































































































































}