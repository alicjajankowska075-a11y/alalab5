// alalab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{   /* zad 1
	int tab[10];
	int n;
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe calkowita: " << endl;
		cin >> tab[i];
	}
	for (int i = 9; i >= 0; i--)
	{
		cout << tab[i]<<endl;
	}
	*/

	/* zad 2
	int n, suma;
	int tab[100];
	tab[0] = 0;
	tab[1] = 1;
	cout << "podaj ile liczb Fibonacciego: ";
	cin >> n;

	for (int i = 2; i < n+2; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		cout << tab[i] << endl;
	}
	*/
	/*zad 3
   srand(time(NULL));
   int tab[10]; int suma = 0; int srednia; int mni_srednia=0;
   for (int i = 0; i < 10; i++)
   {
	   tab[i] = rand() % 100;
	   cout << tab[i] << endl;
	   suma += tab[i];

   }
   srednia = suma / 10.0;
   cout << "srednia wynosi: " << srednia<< endl;
   for (int i = 0; i < 10; i++)
   {
	   if (tab[i] < srednia)
	   {
		   mni_srednia++;
	   }
   }
   cout <<"mniejszych od sredniej jest "<<mni_srednia << " liczb";
   int max = tab[0];
   int min = tab[0];
   for (int i = 0; i < 10; i++)
   {
	   if (tab[i] < min)
		   min = tab[i];
	   if (tab[i] > max)
		   max = tab[i];
   }
   cout <<endl<<"najwieksza to : " << max << " a najmneijsza to : " << min;
   */

	int n;
	cout << "podaj ile chcesz wprowadzic liczb do 10 elementowej tablicy: ";
	cin >> n;
	int tab[10];
	for (int i = 0; i < n; i++)
	{
		cout << "podaj liczbe od 1..10: " << endl;
		cin >> tab[i];
	}
	    if (n < 10)
		{
			for (int i = n; i < 10; i++)
			{
				tab[i] = 0;

			}
		}
		for (int i = 0; i < 10; i++)
		{
			cout << tab[i] << endl;
		}
		int max = tab[0];
		int min = tab[0];
		for (int i = 0; i < 10; i++)
		{
			if (tab[i] < min)
			{
				min = tab[i];

			}
			if (tab[i] > max)
				max = tab[i];
		}
		cout << "najwiesza to " << max << endl;
		cout << "najmniejsza to " << min << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
