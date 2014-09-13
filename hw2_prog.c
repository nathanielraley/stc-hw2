#include"hw2_routines.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

/*int main(int argc, char* argv[]){
if(argc>=3){
lower=atoi(argv[1]);
upper=atoi(argv[2]);
else{
fprintf(stderr,"Error: please run the program again with 3 integer 
arguments (lower limit, upper limit, and n value)");
return 1;
}
*/

/*
printf("\nMidpoint rule:");
for(i=10;i<=100000;i=10*i)
{
x=fabs(midpoint(0.0,1.0,(float)i)-0.125);
printf("\n n=%d \t value=%f \t error=%f",i,midpoint(0.0,1.0,(float)i),x);
}
*/

float x;

x=fabs(midpoint(0.0,1.0,100.0)-0.125);
printf("\nMidpoint rule:\n n=100 \t \t value=%f \t error=%f\n",midpoint(0.0,1.0,100.0),x);
x=fabs(midpoint(0.0,1.0,1000.0)-0.125);
printf(" n=1000 \t value=%f \t error=%f\n",midpoint(0.0,1.0,1000.0),x);
x=fabs(midpoint(0.0,1.0,10000.0)-0.125);
printf(" n=10000 \t value=%f \t error=%f\n",midpoint(0.0,1.0,10000.0),x);
x=fabs(midpoint(0.0,1.0,100000.0)-0.125);
printf(" n=100000 \t value=%f \t error=%f\n\n",midpoint(0.0,1.0,100000.0),x);

x=fabs(trapezoid(0.0,1.0,10.0)-0.125);
printf("Trapezoid rule:\n n=10 \t \t value=%f \t error=%f\n",trapezoid(0.0,1.0,10.0),x);
x=fabs(trapezoid(0.0,1.0,100.0)-0.125);
printf(" n=100 \t \t value=%f \t error=%f\n",trapezoid(0.0,1.0,100.0),x);
x=fabs(trapezoid(0.0,1.0,1000.0)-0.125);
printf(" n=1000 \t value=%f \t error=%f\n",trapezoid(0.0,1.0,1000.0),x);
x=fabs(trapezoid(0.0,1.0,10000.0)-0.125);
printf(" n=10000 \t value=%f \t error=%f\n",trapezoid(0.0,1.0,10000.0),x);
x=fabs(trapezoid(0.0,1.0,100000.0)-0.125);
printf(" n=100000 \t value=%f \t error=%f\n\n",trapezoid(0.0,1.0,100000.0),x);

x=fabs(simpsons(0.0,1.0,10.0)-0.125);
printf("Simpsons rule (1/3):\n n=10 \t \t value=%f \t error=%f\n",simpsons(0.0,1.0,10.0),x);
x=fabs(simpsons(0.0,1.0,100.0)-0.125);
printf(" n=100 \t \t value=%f \t error=%f\n",simpsons(0.0,1.0,100.0),x);
x=fabs(simpsons(0.0,1.0,1000.0)-0.125);
printf(" n=1000 \t value=%f \t error=%f\n",simpsons(0.0,1.0,1000.0),x);
x=fabs(simpsons(0.0,1.0,10000.0)-0.125);
printf(" n=10000 \t value=%f \t error=%f\n",simpsons(0.0,1.0,10000.0),x);
x=fabs(simpsons(0.0,1.0,100000.0)-0.125);
printf(" n=100000 \t value=%f \t error=%f\n\n",simpsons(0.0,1.0,100000.0),x);

}
