#include<stdio.h>
#include<math.h>

int main(){
float angle,s,c,t;
printf("Enter an angle:\n");
scanf("%f",&angle);

 angle = angle*3.14/180;
s = sin(angle);
c = cos(angle);
t = tan(angle);
printf("sin = %f cos = %f tan = %f",s,c,t);

return 0;
}