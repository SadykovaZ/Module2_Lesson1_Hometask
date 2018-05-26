#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;

	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	Дано натуральное (целое неотрицательное) число, а и целое положительное число d. Вычислить частное q и остаток r при делении, а на d

		unsigned int a = 0;
		int d = 0, r;
		float q = 0;

		printf("Введите значение a:\t");
		scanf("%d", &a);
		printf("Введите значение d:\t");
		scanf("%d", &d);

		q = (float)a / d;

		printf("частное q = %f\n", q);

		r = a % d;
		printf("остаток r при делении = %d\n", r);
	}

	else if (n == 2)
	{
		//2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12/x, 
		//      если y равен 0, 12/y, если x равен 0, иначе 144/(x*y).

		int x = 0;
		int y = 0;
		int f = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);

		if (x == 0 && y == 0)
		{
			f = 0;
			printf("int f = %d \n", f);


		}

		else if (y == 0 && x != 0)
		{
			f = 12 / x;
			printf("int f = %d \n", f);
		}
		else if (x == 0 && y != 0)
		{
			f = 12 / y;
			printf("int f = %d \n", f);
		}

		else
		{
			f = 144 * (x*y);
			printf("int f = %d \n", f);
		}


	}

	else if (n == 3)
	{
		//3.	Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x

		int x = 0;
		int y = 0;
		int f = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);

		if (x > y)
		{
			f = x - y;
			printf("int f = %d \n", f);


		}

		else
		{
			f = y - x;
			printf("int f = %d \n", f);
		}



	}

	else if (n == 4)
	{
		//4.	Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x. 
		//      Предполагается, что значения параметров больше нуля. 

		double x = 0;
		double y = 0;
		double f = 0;

		printf("Введите значение x:\t");
		scanf("%lf", &x);

		printf("Введите значение y:\t");
		scanf("%lf", &y);

		if (x > y)
		{
			f = x / y;
			printf("int f = %lf \n", f);


		}

		else
		{
			f = y / x;
			printf("int f = %lf \n", f);
		}
	}

	else if (n == 5)
	{

		////5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n 
		////      есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля

		double f=0, x=0, y=0, z=0, m=0, n=0, k=0;

		printf("Введите значение x = \t");
		scanf("%lf", &x);

		printf("Введите значение y = \t");
		scanf("%lf", &y);

		printf("Введите значение z = \t");
		scanf("%lf", &z);

		if (x < y && x < z)
		{
			k = x;
			m = y;
			n = z;

			f = (m*n) / k;
			printf("функция f = %lf\n", f);
		}

		else if (y < x && y < z)
		{
			k = y;
			m = x;
			n = z;

			f = (m*n) / k;
			printf("функция f = %lf\n", f);
		}

		else if (z < x && z < y)
		{
			k = z;
			m = x;
			n = y;

			f = (m*n) / k;
			printf("функция f = %lf\n", f);
		}

	}

	else if (n == 6)
	{
		//6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.

		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		printf("Введите значение c:\t");
		scanf("%d", &c);


		if (a < b && a < c)
		{
			f = a;
			printf("наименьшее из значений a = %d \n", f);


		}

		else if (b < a && b < c)
		{
			f = b;
			printf("наименьшее из значений b = %d \n", f);
		}

		else if (c < a && c < b)
		{
			f = c;
			printf("наименьшее из значений c = %d \n", f);
		}



	}

	else if (n == 7)
	{
		//7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.
		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		printf("Введите значение c:\t");
		scanf("%d", &c);


		if (a > b && a > c)
		{
			f = a;
			printf("наибольшее из значений a = %d \n", f);


		}

		else if (b > a && b > c)
		{
			f = b;
			printf("наибольшее из значений b = %d \n", f);
		}

		else if (c > a && c > b)
		{
			f = c;
			printf("наибольшее из значений c = %d \n", f);
		}

	}

	else if (n == 8)
	{
		//8.	Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false.

		int x = 0;
		int y = 0;
		int z = 0;
		bool f = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);


		printf("Введите значение z:\t");
		scanf("%d", &z);
		if ((x*x) + (y*y) == (z*z))
		{
			f = true;
			printf("True = %d\n", f);
		}
		else
		{
			f = false;
			printf("False = %d\n", f);
		}
	}


	else if (n == 9)
	{
		//9.	Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот, 
		//      y делится нацело на x, иначе возвращает false. Предполагается, что значения параметров больше нуля.

		int x = 0;
		int y = 0;
		bool f = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);

		if ((x%y == 0) || (y%x == 0))
		{
			f = true;
			printf("True = %d\n", f);
		}
		else
		{
			f = false;
			printf("False = %d\n", f);
		}

	}

	else if (n == 10)
	{
		//10.	Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других.
		//      Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами треугольника, 
		//	    иначе возвращает false. Предполагается, что значения параметров больше нуля

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);

		printf("Введите значение z:\t");
		scanf("%d", &z);

		if (x > y && x > z && x < (y + z))
		{
			f = true;
			printf("True = %d\n", f);
		}
		else if (y > x && y > z && y < (x + z))
		{
			f = true;
			printf("True = %d\n", f);
		}
		else if (z > x && z > y && z < (x + y))
		{
			f = true;
			printf("True = %d\n", f);
		}

		else
		{
			f = false;
			printf("False = %d\n", f);
		}
	}


	else
	{
		printf("Такого задания нет, введите другое\n");
	}
}
