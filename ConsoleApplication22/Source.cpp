#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
start:
	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			//	1.	Дано целое число в двоичной системе счисления, т.е.последовательность цифр  0 и 1. Составить программу перевода этого числа в десятичную систему счисления
			int a;
			cout << "введите a: ";
			cin >> a;
			int ch, ost;
			int mas[6] = { 0 };
			int count = 0;

			do
			{
				ch = a / 2;
				ost = a - ch * 2;
				cout << ost << " ";
				a = ch;
				count++;
				mas[count] = ost;

			} while (ch >= 1);



			cout << endl << endl;



			for (int i = count; i > 0; i--)
			{
				cout << mas[i] << " ";
			}
			cout << endl;

			int sum = 0, q;


			for (int i = 1; i <= count; i++)
			{
				q = mas[i] * pow(2, i - 1);
				sum += q;

			}

			cout << sum << endl;

		}break;

		case 2:
		{
			//2.	В прямоугольной матрице найти наибольший из минимальных элементов строк матрицы

			int a[6][4] = { {0}, {0} };
			int b[6];
			int min, j, i;

			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 4; j++)
				{
					a[i][j] = 0 + rand() % 15;
					cout << a[i][j] << " \t";
				}
				cout << endl;
			}


			cout << endl << endl;

			for (i = 0; i < 6; i++)
			{
				min = a[i][0];
				for (j = 0; j < 4; j++)
				{

					if (min > a[i][j])
						min = a[i][j];
				}

				b[i] = min;
				cout << b[i] << "  ";
			}
			cout << endl;
			int mx = 0;
			for (i = 0; i < 6; i++)
			{
				if (mx < b[i])
					mx = b[i];
			}
			cout << mx << " - максимальное из минимальнеых\n";



		}break;

		case 3:
		{
			//3.	Ввести массив, состоящий из 15 - ти элементов(двузначные целые числа).Изменить разрядность цифр, 
			//образующих элементы исходного массива и, таким образом, сформировать новый массив.
			//Например, исходный массив : 25 71 84…, новый массив : 52 17 48….

			int a[15] = { 0 };
			int i;

			for (i = 0; i < 15; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			int q, w, b[15] = { 0 };

			cout << "---------------------- " << endl;

			for (i = 0; i < 15; i++)
			{
				q = a[i] / 10;
				w = a[i] - q * 10;

				b[i] = w * 10 + q;
				cout << b[i] << " ";
			}

			cout << endl;

		}break;

		case 4:
		{
			//4.	Ввести массив, состоящий из 9 элементов(девять двузначных чисел в восьмеричной системе счисления).
			//Сформировать новый массив  путем перевода значений элементов исходного массива в десятичную систему счисления
			int a[9] = { 0 };
			int i, b[9];
			cout << "дан массив восьмеричных чисел\n";

			for (i = 0; i < 9; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}

			int p, v;
			cout << "\n______________________________________\n";
			for (i = 0; i < 9; i++)
			{
				p = a[i] / 10;
				v = a[i] - p * 10;
				b[i] = p * 8 + v;

			}
			cout << "\n______________________________________\nэтот же массив с переводом в десятичную систему\n";
			for (i = 0; i < 9; i++)
				cout << b[i] << " ";

			cout << endl;

		}break;

		case 5:
		{
			//	5.	Дан массив, состоящий из 12 двоичных чисел.Удалить элементы, которые встречаются более двух раз.
			int a[12] = { 0 };
			int i;

			for (i = 0; i < 15; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << "\n______________________________________\n";

			int ch, ost, count = 0, b[15];

			for (i = 0; i < 15; i++)
			{
				do
				{
					ch = a[i] / 2;
					ost = a[i] - ch * 2;
					cout << ost << " ";
					a[i] = ch;
					b[i] = ost;

				} while (ch >= 1);
			}

			for (int i = count; i > 0; i--)
			{
				cout << b[i] << " ";
			}
			cout << endl;

		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			goto start;
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}