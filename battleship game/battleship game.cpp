#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

char plansza[10][10], gracz;

void inicjalizacja()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			plansza[i][j] = '~';
		}
	}
}

void plansza_statki1()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (plansza[i][j] == 'S')
			{
				cout << "~ ";
			}
			else
			{
				cout << plansza[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void ktory_gracz(char gracz)
{

	int x, y;
	cout << "Podaj wspolrzedna x" << endl;
	cin >> x;
	cout << "Podaj wspolrzedna y" << endl;
	cin >> y;

	if (plansza[x][y] == ' ')
	{
		plansza[x][y] = gracz;
	}

}

void statki()
{
	int wstawione = 0, x, y;
	srand(time(NULL));
	while (wstawione < 5)
	{
		x = rand() % 10;
		y = rand() % 10;

		if (plansza[x][y] == '~')
		{
			plansza[x][y] = 'S';
			wstawione++;
		}
	}
}

void strzel()
{
	int x, y;
	cout << "Podaj pierwsza wspolrzedna" << endl;
	cin >> x;
	cout << "Podaj druga wspolrzedna" << endl;
	cin >> y;

	if (plansza[x][y] == 'S')
	{
		plansza[x][y] = 'X';
		plansza_statki1();
		cout << "Brawo trafiles jednomasztowca !!!" << endl;

	}
	else
	{
		plansza[x][y] = 'O';
		plansza_statki1();
		cout << "Nie udalo sie trafic jednomasztowca" << endl;
	}
	cout << endl << endl;

}
bool sprawdz_wygrana()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (plansza[i][j] == 'S')
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{

	char gracz = '1';
	cout << "Zaraz rozpocznie sie gra w statki" << endl;
	Sleep(1500);
	cout << "Powodzenia wszystkim zawodnikow" << endl;

	inicjalizacja();

	Sleep(500);

	statki();

	plansza_statki1();

	while (true)
	{

		strzel();

		if (sprawdz_wygrana())
		{
			cout << "Koniec gry";
			break;
		}
	}


	return 0;
}

