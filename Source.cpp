#include <iostream>
#include <conio.h>

using namespace std;

const int COL = 40;
const int ROW = 13;

char run1 = 0; 
char run2 = 0; 

int a = 1; // Создаю координаты для перемещения фишек
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int h = 8;
int i = 9;
int j = 10;
int k = 11;
int l = 12;

int m = 1;
int n = 2;
int o = 3;
int p = 4;
int q = 5;
int r = 6;
int s = 7;
int t = 8;
int u = 9;
int v = 10;
int w = 11;
int x = 12;
int y = 13;

int whiteX[12]{38,38,38,38,38,38,38,38,38,38,38,38}; // Координаты положения белых фишек
int whiteY[12]{0,1,2,3,4,5,6,7,8,9,10,11};

int blakX[12]{3,3,3,3,3,3,3,3,3,3,3,3}; // Координаты положения черных фишек
int blakY[12]{ 12,11,10,9,8,7,6,5,4,3,2,1 };


void Draw() // Отрисовка игрового поля и игровых фишек
{
	system("cls");

	for (int i = 0; i < COL; i++)
	{
		if (i == 4)
		{
			cout << "a";
		}
		else if (i == 7)
		{
			cout << "b";
		}
		else if (i == 10)
		{
			cout << "c";
		}
		else if (i == 13)
		{
			cout << "d";
		}
		else if (i == 16)
		{
			cout << "e";
		}
		else if (i == 19)
		{
			cout << "f";
		}
		else if (i == 22)
		{
			cout << "g";
		}
		else if (i == 25)
		{
			cout << "h";
		}
		else if (i == 28)
		{
			cout << "i";
		}
		else if (i == 31)
		{
			cout << "j";
		}
		else if (i == 34)
		{
			cout << "k";
		}
		else if (i == 37)
		{
			cout << "l";
		}
		else
		{
			cout << " ";
		}
	}
	cout << endl;



	for (int i = 0; i < COL; i++)
	{
		if (i < 2)
		{
			cout << " ";
		}
		else
		{
			cout << "*";
		}

	}
	cout << endl;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (j == 2 || j == 39)
			{
				cout << "*";
			}
			else if (j == 0 && i == 0)
			{
				cout << "m";
			}
			else if (j == 0 && i == 1)
			{
				cout << "n";
			}
			else if (j == 0 && i == 2)
			{
				cout << "o";
			}
			else if (j == 0 && i == 3)
			{
				cout << "p";
			}
			else if (j == 0 && i == 4)
			{
				cout << "q";
			}
			else if (j == 0 && i == 5)
			{
				cout << "r";
			}
			else if (j == 0 && i == 6)
			{
				cout << "s";
			}
			else if (j == 0 && i == 7)
			{
				cout << "t";
			}
			else if (j == 0 && i == 8)
			{
				cout << "u";
			}
			else if (j == 0 && i == 9)
			{
				cout << "v";
			}
			else if (j == 0 && i == 10)
			{
				cout << "w";
			}
			else if (j == 0 && i == 11)
			{
				cout << "x";
			}
			else if (j == 0 && i == 12)
			{
				cout << "y";
			}
			else
			{
				bool yas = false;

				for (int f = 0; f < 12; f++) // Отрисовка текущего положения фишек
				{
					if (whiteX[f] == j && whiteY[f] == i)
					{
						yas = true;
						cout << "o";
					}
					else if (blakX[f] == j && blakY[f] == i)
					{
						yas = true;
						cout << "@";
					}
				}
			
				if (yas == false)
				{
					cout << " ";
				}
			}
		
		}
		cout << endl;
	}

	for (int i = 0; i < COL; i++)
	{
		if (i < 2)
		{
			cout << " ";
		}
		else
		{
			cout << "*";
		}

	}
	cout << endl;
}


int main()
{
	while (true)
	{
		Draw();
	}
	return 0;
}
