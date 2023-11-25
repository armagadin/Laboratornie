 # Задание
 Напишите программу которая будет выводить таблицу значений и построить график функции с звдвнным шагом, используя оператор цикла while.
$$ f(x) = 
    \begin{cases}
       {cos(x)e^{-x^2}},       &\ 0\leq x \leq 1;\\ 
       ln(x+1)-\sqrt{4-x^2},   &\ 1\leq x \leq 2.\\
       \end{cases}
$$
## Код с использованием оператора цикла while
```
#include <stdio.h>
#include <math.h>

int main() 
{
float x,f,h;
    x=0.0;
scanf("%f",&h);
while(x<2+h/2)
{
if(x>2)
x=2;
if (x<=1)
 f=cos(x)*exp(-x*x);
else
f=log(x+1)-sqrt(4-x*x);
printf("%f %f\n",x,f);
x=x+h;}
}
```
## Код с использованием оператора цикла for
``````
#include <stdio.h>
#include <math.h>

int main() 
{
float x,f,h;
    x=0.0;
scanf("%f",&h);
for(x;x < (2+(h/2));h)
{
if(x>2)
x=2;
if (x<=1)
 f=cos(x)*exp(-x*x);
else
f=log(x+1)-sqrt(4-x*x);
printf("%f %f\n",x,f);
x=x+h;}
}
``````
## Примеры значений которые получаются в резальтате роботы кода.
![результаты](resultlab2.png "результаты")
## Блок схема для цикла while


