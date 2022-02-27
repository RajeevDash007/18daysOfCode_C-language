#include<stdio.h>


int main(){
 float a,b;
 printf("Enter any number:\n");
 scanf("%f",&a);
 b = square(a);
 printf("Square of %d is %d\n",a,b);

return 0;
}
float square(float x){
        float y;
        y=x*x;
        return(y);

}