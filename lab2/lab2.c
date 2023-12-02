
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


#include <stdio.h>
#include <math.h>

int main() 
{
    float x,f,h;
    x=0.0;
scanf("%f",&h); 
for(x; x<(2+(h/2));h)
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