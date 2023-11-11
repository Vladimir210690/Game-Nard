#include <iostream>
#include <conio.h>

using namespace std;

const int COL = 40;
const int ROW = 13;

int fromX = 0; // Координаты "откуда" по оси X
int fromY = 0; // Координаты "откуда" по оси Y

int whereX = 0; // Координаты "куда" по оси X
int whereY = 0; // Координаты "куда" по оси Y

int cube1 = 0; // Первый кубик
int cube2 = 0; // Второй кубик

char name1[10]; // Имена игроков
char name2[10];
char winner[10]; // Имя победителя

bool gameOwer = false; // Завершение игры


int a = 4; int b = 7; int c = 10; int d = 13;
int e = 16; int f = 19; int g = 22; int h = 25; int i = 28; // Создание координат для перемещения фишек
int j = 31; int k = 34; int l = 37;

int m = 0; int n = 1; int o = 2; int p = 3;
int q = 4; int r = 5; int s = 6; int t = 7;
int u = 8; int v = 9; int w = 10; int x = 11; int y = 12;

int whiteX[12]{38,38,38,38,38,38,38,38,38,38,38,38}; // Стартовые координаты белых фишек
int whiteY[12]{0,1,2,3,4,5,6,7,8,9,10,11};

int blakX[12]{3,3,3,3,3,3,3,3,3,3,3,3}; // Стартовые координаты черных фишек
int blakY[12]{ 12,11,10,9,8,7,6,5,4,3,2,1 };


void Draw()
{
	system("cls"); // Обновляет консоль

	for (int i = 0; i < COL; i++) // Отрисовка верхних координат
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



	for (int i = 0; i < COL; i++) // Отрисовка верхней границы игрового поля
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
		for (int j = 0; j < COL; j++) // Отрисовка боковых координат и боковых полей
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
				
					for (int f = 0; f < 12; f++) // Отрисовка нард
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
				
				if (yas == false) // Отрисовка пустоты
				{
					cout << " ";
				}
			}
		
		}
		cout << endl;
	}

	for (int i = 0; i < COL; i++) // Нижняя граница игрового поля
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


void Logik()
{
	system("pause"); // Остановка консоли
	
	cout << "From X: ";
	cin >> fromX;

	
	cout << "From Y: ";
	cin >> fromY;
	
	
	cout << "Where X: ";
	cin >> whereX;
	
	
	cout << "Where Y: ";
	cin >> whereY;
	

		for (int j = 0; j < 12; j++) // Примитивная логика движения нард
		{
			if (whiteX[j] == fromX && whiteY[j] == fromY)
			{
			
				whiteX[j] = whereX;
				whiteY[j] = whereY;
			}
			
			else if (blakX[j] == fromX && blakY[j] == fromY)
			{
				blakX[j] = whereX;
				blakY[j] = whereY;
			}
			
			
		}
	
}


int main()
{
	while (!gameOwer)
	{
		Draw();
		Logik();
	}
	return 0;
}
