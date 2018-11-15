#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addfunc(int a, int b)
{
   return a+b;
}
int subfunc(int a, int b)
{
   return a-b;
}
int mulfunc(int a, int b)
{
   return a*b;
}
int divfunc(int a, int b)
{
   return a/b;
}

int main(int argc, char *argv[]) {

  int i1, i2;
  char m;
  int (*f)(int, int);

  printf("input calculation : ");
  scanf("%d %c %d", &i1, &m, &i2);

  switch(m)
{
   case '+':
      f=addfunc;
      break;
   case '-':
      f=subfunc;
      break;
   case '*':
      f=mulfunc;
      break;
   case '/':
      f=divfunc;
      break;
}

   printf("result : %i", f(i1, i2));

	return 0;
}



