#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;

	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. ��������� ������� q � ������� r ��� �������, � �� d

		unsigned int a = 0;
		int d = 0, r;
		float q = 0;

		printf("������� �������� a:\t");
		scanf("%d", &a);
		printf("������� �������� d:\t");
		scanf("%d", &d);

		q = (float)a / d;

		printf("������� q = %f\n", q);

		r = a % d;
		printf("������� r ��� ������� = %d\n", r);
	}

	else if (n == 2)
	{
		//2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, 
		//      ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y).

		int x = 0;
		int y = 0;
		int f = 0;

		printf("������� �������� x:\t");
		scanf("%d", &x);

		printf("������� �������� y:\t");
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
		//3.	�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x

		int x = 0;
		int y = 0;
		int f = 0;

		printf("������� �������� x:\t");
		scanf("%d", &x);

		printf("������� �������� y:\t");
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
		//4.	�������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x. 
		//      ��������������, ��� �������� ���������� ������ ����. 

		double x = 0;
		double y = 0;
		double f = 0;

		printf("������� �������� x:\t");
		scanf("%lf", &x);

		printf("������� �������� y:\t");
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

		////5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n 
		////      ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����

		//int A = 0, B = 0;

		//printf("������� �������� A:\t");
		//scanf("%d", &A);

		//printf("������� �������� B:\t");
		//scanf("%d", &B);

		//if (A > 0 || B < -2)
		//{
		//	printf("True\n");

		//}

		//else
		//{
		//	printf("False\n");
		//}


	}

	else if (n == 6)
	{
		//6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.

		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("������� �������� a:\t");
		scanf("%d", &a);

		printf("������� �������� b:\t");
		scanf("%d", &b);

		printf("������� �������� c:\t");
		scanf("%d", &c);


		if (a < b && a < c)
		{
			f = a;
			printf("���������� �� �������� a = %d \n", f);


		}

		else if (b < a && b < c)
		{
			f = b;
			printf("���������� �� �������� b = %d \n", f);
		}

		else if (c < a && c < b)
		{
			f = c;
			printf("���������� �� �������� c = %d \n", f);
		}



	}

	else if (n == 7)
	{
		//7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("������� �������� a:\t");
		scanf("%d", &a);

		printf("������� �������� b:\t");
		scanf("%d", &b);

		printf("������� �������� c:\t");
		scanf("%d", &c);


		if (a > b && a > c)
		{
			f = a;
			printf("���������� �� �������� a = %d \n", f);


		}

		else if (b > a && b > c)
		{
			f = b;
			printf("���������� �� �������� b = %d \n", f);
		}

		else if (c > a && c > b)
		{
			f = c;
			printf("���������� �� �������� c = %d \n", f);
		}

	}

	else if (n == 8)
	{
		//8.	�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false.

		int x = 0;
		int y = 0;
		int z = 0;
		bool f = 0;

		printf("������� �������� x:\t");
		scanf("%d", &x);

		printf("������� �������� y:\t");
		scanf("%d", &y);


		printf("������� �������� z:\t");
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
		//9.	�������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������, 
		//      y ������� ������ �� x, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����.

		int x = 0;
		int y = 0;
		bool f = 0;

		printf("������� �������� x:\t");
		scanf("%d", &x);

		printf("������� �������� y:\t");
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
		//10.	������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������.
		//      �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������, 
		//	    ����� ���������� false. ��������������, ��� �������� ���������� ������ ����

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("������� �������� x:\t");
		scanf("%d", &x);

		printf("������� �������� y:\t");
		scanf("%d", &y);

		printf("������� �������� z:\t");
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
		printf("������ ������� ���, ������� ������\n");
	}
}