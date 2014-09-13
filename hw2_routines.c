#include"hw2_routines.h"
#include<stdio.h>
#include<math.h>

/*int power(int base, int exp) {
    int i, result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    return result;
 }*/

float midpoint(float x_start, float x_end, float n)
{
int i;
float h, sum;
//h=(x_end-x_start)/n;
h=1/n; 

for(i=0;i<n;i++){
sum+=pow((i*h)+(h/2),7.0);
}

sum=h*sum;
return sum;
}



float trapezoid(float x_start, float x_end, float n)
{
int i;
float h, sum;
h=1/n;

for(i=0;i<n;i++){
sum+=(pow((i*h),7)+pow((i+1)*h,7));
}
sum=(h/2)*sum;

return sum;
}

float simpsons(float x_start, float x_end, float n)
{
int i;
float h, sum;
h=1/n;

for(i=1;i<n;i=i+2){
sum+=pow((i-1)*h,7)+(4*pow((i*h),7))+pow((i+1)*h,7);
}
sum=(h/3)*sum;
return sum;
}



