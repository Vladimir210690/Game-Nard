#include <iostream>
#include <conio.h>

using namespace std;

const int COL = 39;
const int ROW = 13;

int fromX = 0; // Позиция начала хода по X
int fromY = 0; // Позиция начала хода по Y

int whereX = 0; // Позиция конца хода по X
int whereY = 0; // Позиция конца хода по Y

int cube1 = 0; // Первый кубик
int cube2 = 0; // Второй кубик

char name1[10]; // Имена игроков
char name2[10];
char winner[10]; // Имя победителя

bool gameOwer = false; // Переменная завершения игры
bool mot = true; // Очередность хода
int coll = 0; // Количество ходов

int a = 4; int b = 7; int c = 10; int d = 13;
int e = 16; int f = 19; int g = 22; int h = 25; int i = 28;
int j = 31; int k = 34; int l = 37;

char x = 0;// Выбранная координата по X
char x2 = 0;

int whiteX[12]{ 36,36,36,36,36,36,36,36,36,36,36,36 };
int whiteY[12]{ 0,1,2,3,4,5,6,7,8,9,10,11 };

int blakX[12]{ 3,3,3,3,3,3,3,3,3,3,3,3 };
int blakY[12]{ 12,11,10,9,8,7,6,5,4,3,2,1 };

void Draw()
{
	system("cls");
	cout << name1 << " white" << " VS " << name2 << " blak" << endl << endl;

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
		if (i < 3)
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
			if (j == 2 || j == 37)
			{
				cout << "*";
			}
			else if (j == 0 && i == 0)
			{
				cout << " 0";
			}
			else if (j == 0 && i == 1)
			{
				cout << " 1";
			}
			else if (j == 0 && i == 2)
			{
				cout << " 2";
			}
			else if (j == 0 && i == 3)
			{
				cout << " 3";
			}
			else if (j == 0 && i == 4)
			{
				cout << " 4";
			}
			else if (j == 0 && i == 5)
			{
				cout << " 5";
			}
			else if (j == 0 && i == 6)
			{
				cout << " 6";
			}
			else if (j == 0 && i == 7)
			{
				cout << " 7";
			}
			else if (j == 0 && i == 8)
			{
				cout << " 8";
			}
			else if (j == 0 && i == 9)
			{
				cout << " 9";
			}
			else if (j == 0 && i == 10)
			{
				cout << "10";
			}
			else if (j == 0 && i == 11)
			{
				cout << "11";
			}
			else if (j == 0 && i == 12)
			{
				cout << "12";
			}
			else
			{
				bool yas = false;

				for (int f = 0; f < 12; f++)
				{
					if (whiteX[f] == j && whiteY[f] == i)
					{
						yas = true;
						cout << "o";
					}
					else if (blakX[f] == j && blakY[f] == i)
					{
						yas = true;
						cout << "+";
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
		if (i < 3)
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
void Input2()
{
	if (x == 'a')
	{
		fromX = 3;
	}
	else if (x == 'b')
	{
		fromX = 6;
	}
	else if (x == 'c')
	{
		fromX = 9;
	}
	else if (x == 'd')
	{
		fromX = 12;
	}
	else if (x == 'e')
	{
		fromX = 15;
	}
	else if (x == 'f')
	{
		fromX = 18;
	}
	else if (x == 'g')
	{
		fromX = 21;
	}
	else if (x == 'h')
	{
		fromX = 24;
	}
	else if (x == 'i')
	{
		fromX = 27;
	}
	else if (x == 'j')
	{
		fromX = 30;
	}
	else if (x == 'k')
	{
		fromX = 33;
	}
	else if (x == 'l')
	{
		fromX = 36;
	}
}
void Input3()
{
	if (x2 == 'a')
	{
		whereX = 3;
	}
	else if (x2 == 'b')
	{
		whereX = 6;
	}
	else if (x2 == 'c')
	{
		whereX = 9;
	}
	else if (x2 == 'd')
	{
		whereX = 12;
	}
	else if (x2 == 'e')
	{
		whereX = 15;
	}
	else if (x2 == 'f')
	{
		whereX = 18;
	}
	else if (x2 == 'g')
	{
		whereX = 21;
	}
	else if (x2 == 'h')
	{
		whereX = 24;
	}
	else if (x2 == 'i')
	{
		whereX = 27;
	}
	else if (x2 == 'j')
	{
		whereX = 30;
	}
	else if (x2 == 'k')
	{
		whereX = 33;
	}
	else if (x2 == 'l')
	{
		whereX = 36;
	}
}
void Motion()
{
	if (mot == true)
	{
		cout << "Play gamer: " << name1 << endl;
		cube1 = rand() % 6 + 1;
		//cube2 = rand() % 6 + 1;
		//if (cube1 != cube2)
		//{
		//	coll = 2;
		//}
		//else
		//{
		//	coll = 4;
		//}
		cout << cube1 /*<< " / " << cube2*/ << endl;

		cout << "From X: ";
		cin >> x;
		Input2();
		cout << "From Y: ";
		cin >> fromY;

		cout << "Where X: ";
		cin >> x2;
		Input3();
		cout << "Where Y: ";
		cin >> whereY;

		for (int j = 0; j < 12; j++)
		{
	
			if (whiteX[j] == fromX && whiteY[j] == fromY)
			{
				whiteX[j] = whereX;
				whiteY[j] = whereY;
			}
		}
		
	mot = false;
	}
	else
	{
		cout << "Play gamer: " << name2 << endl;
		cube1 = rand() % 6 + 1;
		//cube2 = rand() % 6 + 1;
		//if (cube1 != cube2)
		//{
		//	coll = 2;
		//}
		//else
		//{
		//	coll = 4;
		//}
		cout << cube1 /*<< " / " << cube2*/ << endl;
		
		cout << "From X: ";
		cin >> x;
		Input2();
		cout << "From Y: ";
		cin >> fromY;

		cout << "Where X: ";
		cin >> x2;
		Input3();
		cout << "Where Y: ";
		cin >> whereY;

		for (int j = 0; j < 12; j++)
		{
			if (blakX[j] == fromX && blakY[j] == fromY)
			{
				blakX[j] = whereX;
				blakY[j] = whereY;
					
			}
		}
		
	mot = true;
	}
}

void Logik()
{
	system("pause");
	Motion();
}

int main()
{
	cout << "Input gamer name 1: ";
	cin >> name1;

	cout << "Input gamer name 2: ";
	cin >> name2;

	while (!gameOwer)
	{
		Draw();
		Logik();
	}
	return 0;
}
