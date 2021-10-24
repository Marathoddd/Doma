#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "funkcii.h"

void _zadanie2(float n)
{
   float v;
   v = 3 * pow(n, 2) - 6 * n;
   printf("%f/d", v);
}

void _zadanie1(float x, float a, float c)
{
   float L;

   L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));

   printf("%f", L);
}

void _zadanie3(float a, float b, float c)
{
   float x1, x2;
   float Dic;
   Dic = pow(b, 2) - 4 * a * c;
   if (Dic > 0)
   {
      x1 = (-b + sqrt(Dic)) / (2 * a);
      x2 = (-b - sqrt(Dic)) / (2 * a);

      printf("x1 = %f, x2 = %f", x1, x2);
   }
   if (Dic == 0)
   {
      x1 = -b / (2 * a);
      printf("x1 = %f", x1, );
   }
}

float _zadanie4(int p, float t)
{
   switch (p)
   {
   case 48:
      return 15 * (t / 60);
   case 44:
      return 18 * (t / 60);
   case 46:
      return 13 * (t / 60);
   case 45:
      return 11 * (t / 60);
   default:
      printf(" %f/n", t);
      break;
   }

   return 0;
}


void _zadanie5()
{
   int summ = 0;
   int x;
   for (int i = 1000; i < 10000; i++)
   {
      x = i;
      summ = 0;
      for (int b = 0; b < 4; b++)
      {
         summ = summ + pow(x % 10, 4);
         x /= 10;
      }
      if (summ == x)
      {
         printf("%d/n", x);
      }
   }

}


void _zadanie6(int* bin, int N)
{
   int i = 0;
   int dec = 0;
   int n = N - 1;
   while (i < N)
   {
      dec += bin[i] * pow(2, n);
      i++;
      n--;
   }
   printf("%d", dec);
}

void _zadanie7(int I, int J)
{
   srand(time(NULL));
   int* L = malloc(I * J * sizeof(int));

   for (int l = 0; l < I * J; l++)
   {
      L[l] = rand() % 21 - 10;;
      L[l] = -(rand() % 21 - 10) * 3;

   }
   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         printf("%d ", L[i * J + j]);
      }
      printf("\n");
   }
}