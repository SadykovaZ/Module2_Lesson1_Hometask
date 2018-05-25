#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;

	
	printf("приветÂâåäèòå íîìåð çàäàíèÿ:\t");
	scanf("%d", &n);

	
	if (n == 1)
	{
		//1.	Äàíî íàòóðàëüíîå (öåëîå íåîòðèöàòåëüíîå) ÷èñëî, à è öåëîå ïîëîæèòåëüíîå ÷èñëî d. Âû÷èñëèòü ÷àñòíîå q è îñòàòîê r ïðè äåëåíèè, à íà d

		unsigned int a = 0;
		int d = 0, r;
		float q = 0;

		printf("Ââåäèòå çíà÷åíèå a:\t");
		scanf("%d", &a);
		printf("Ââåäèòå çíà÷åíèå d:\t");
		scanf("%d", &d);

		q = (float)a / d;

		printf("÷àñòíîå q = %f\n", q);

		r = a % d;
		printf("îñòàòîê r ïðè äåëåíèè = %d\n", r);
	}

	
	else if (n == 2)
	{
		//2.	Íàïèøèòå ôóíêöèþ int f(int x, int y), êîòîðàÿ âîçâðàùàåò 0, åñëè çíà÷åíèÿ x è y îáà ðàâíû íóëþ, 12/x, 
		//      åñëè y ðàâåí 0, 12/y, åñëè x ðàâåí 0, èíà÷å 144/(x*y).

		int x = 0;
		int y = 0;
		int f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%d", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
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
		//3.	Íàïèøèòå ôóíêöèþ int f(int x, int y), êîòîðàÿ âîçâðàùàåò x-y, åñëè x áîëüøå y, èíà÷å âîçâðàùàåò y-x

		int x = 0;
		int y = 0;
		int f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%d", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
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
		//4.	Íàïèøèòå ôóíêöèþ double f(double x, double y), êîòîðàÿ âîçâðàùàåò x/y, åñëè x áîëüøå y, èíà÷å âîçâðàùàåò y/x. 
		//      Ïðåäïîëàãàåòñÿ, ÷òî çíà÷åíèÿ ïàðàìåòðîâ áîëüøå íóëÿ. 

		double x = 0;
		double y = 0;
		double f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%lf", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
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

		////5.	Íàïèøèòå ôóíêöèþ double f(double x, double y, double z), êîòîðàÿ âîçâðàùàåò m*n/k, ãäå k åñòü ìåíüøåå èç ÷èñåë x, y, z, à m è n 
		////      åñòü ñðåäíåå è áîëüøåå èç ýòèõ ÷èñåë. Ïðåäïîëàãàåòñÿ, ÷òî çíà÷åíèÿ ïàðàìåòðîâ áîëüøå íóëÿ

		//int A = 0, B = 0;

		//printf("Ââåäèòå çíà÷åíèå A:\t");
		//scanf("%d", &A);

		//printf("Ââåäèòå çíà÷åíèå B:\t");
		//scanf("%d", &B);

		//if (A > 0 || B < -2)
		//{
		//	printf("True\n");

		//}

		//else
		//{
		//	printf("False\n");
		/}


	}

	else if (n == 6)
	{
		//6.	Íàïèøèòå ôóíêöèþ int f(int a, int b, int c), êîòîðàÿ âîçâðàùàåò íàèìåíüøåå èç çíà÷åíèé a, b, c.

		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("Ââåäèòå çíà÷åíèå a:\t");
		scanf("%d", &a);

		printf("Ââåäèòå çíà÷åíèå b:\t");
		scanf("%d", &b);

		printf("Ââåäèòå çíà÷åíèå c:\t");
		scanf("%d", &c);


		if (a < b && a < c)
		{
			f = a;
			printf("íàèìåíüøåå èç çíà÷åíèé a = %d \n", f);


		}

		else if (b < a && b < c)
		{
			f = b;
			printf("íàèìåíüøåå èç çíà÷åíèé b = %d \n", f);
		}

		else if (c < a && c < b)
		{
			f = c;
			printf("íàèìåíüøåå èç çíà÷åíèé c = %d \n", f);
		}



	}

	else if (n == 7)
	{
		//7.	Íàïèøèòå ôóíêöèþ int f(int a, int b, int c), êîòîðàÿ âîçâðàùàåò íàèáîëüøåå èç çíà÷åíèé a, b, c.
		int a = 0;
		int b = 0;
		int c = 0;
		int f = 0;


		printf("Ââåäèòå çíà÷åíèå a:\t");
		scanf("%d", &a);

		printf("Ââåäèòå çíà÷åíèå b:\t");
		scanf("%d", &b);

		printf("Ââåäèòå çíà÷åíèå c:\t");
		scanf("%d", &c);


		if (a > b && a > c)
		{
			f = a;
			printf("íàèáîëüøåå èç çíà÷åíèé a = %d \n", f);


		}

		else if (b > a && b > c)
		{
			f = b;
			printf("íàèáîëüøåå èç çíà÷åíèé b = %d \n", f);
		}

		else if (c > a && c > b)
		{
			f = c;
			printf("íàèáîëüøåå èç çíà÷åíèé c = %d \n", f);
		}

	}

	else if (n == 8)
	{
		//8.	Íàïèøèòå ôóíêöèþ bool f(int x, int y, int z), êîòîðàÿ âîçâðàùàåò true, åñëè õ2+ó2= z2, èíà÷å âîçâðàùàåò false.

		int x = 0;
		int y = 0;
		int z = 0;
		bool f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%d", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
		scanf("%d", &y);


		printf("Ââåäèòå çíà÷åíèå z:\t");
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
		//9.	Íàïèøèòå ôóíêöèþ bool f(int x, int y), êîòîðàÿ âîçâðàùàåò true, åñëè x äåëèòñÿ íàöåëî íà y, èëè íàîáîðîò, 
		//      y äåëèòñÿ íàöåëî íà x, èíà÷å âîçâðàùàåò false. Ïðåäïîëàãàåòñÿ, ÷òî çíà÷åíèÿ ïàðàìåòðîâ áîëüøå íóëÿ.

		int x = 0;
		int y = 0;
		bool f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%d", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
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
		//10.	Ïîëîæèòåëüíûå ÷èñëà x, y, z ìîãóò áûòü ñòîðîíàìè òðåóãîëüíèêà, åñëè áîëüøåå èç íèõ ìåíüøå ñóììû äâóõ äðóãèõ.
		//      Íàïèøèòå ôóíêöèþ bool f(int x, int y, int z), êîòîðàÿ âîçâðàùàåò true, åñëè ÷èñëà x, y, z ìîãóò áûòü ñòîðîíàìè òðåóãîëüíèêà, 
		//	    èíà÷å âîçâðàùàåò false. Ïðåäïîëàãàåòñÿ, ÷òî çíà÷åíèÿ ïàðàìåòðîâ áîëüøå íóëÿ

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("Ââåäèòå çíà÷åíèå x:\t");
		scanf("%d", &x);

		printf("Ââåäèòå çíà÷åíèå y:\t");
		scanf("%d", &y);

		printf("Ââåäèòå çíà÷åíèå z:\t");
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
		printf("Òàêîãî çàäàíèÿ íåò, ââåäèòå äðóãîå\n");
	}
}
