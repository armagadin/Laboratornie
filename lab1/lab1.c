#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, x, p;
    // Ввод параметров a,b,c и значения x
    printf("Введите значение a -> ");
    scanf("%i", &a);
    printf("Введите значение b -> ");
    scanf("%i", &b);
    printf("Введите значение c -> ");
    scanf("%i", &c);
    printf("Введите значение x ->");
    scanf("%i", &x);
  if (!a && !b && !c) //защита от некоретного ввода данных
        return 0;
  // выбор наименьшего параметра
  p = a;
  if (b<p)
  p=b;
if (c<p)
p=c;
  //если параметр меньше x и кратен 7 то вывести его
  if (p%7 == 0.0 && p<=x)
     {
      printf("%i\n", p);
     }
  //иначе поделаит его на 2 оставшися параметра 
  else
      { 
      float n = (double)p/(double)(a+b+c-p);
      printf("%f\n", n);
      } 
}