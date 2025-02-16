#include <stdio.h>
#include <math.h>
float F,x,y,z;
const float a = 4.76;
float p(float k) {
    return ((log10(a*k)+log(a*k))/a);
}
int main(){
    printf("x = ");scanf("%f",&x);
    printf("y = ");scanf("%f",&y);
    printf("z = ");scanf("%f",&z);
    F=(pow(p(x),2)+p(y)*x+y)/(p(z)*x*y);
    printf("%f",F);
    //printf("%f %f %f",x,y,z);
    return 0;
}
