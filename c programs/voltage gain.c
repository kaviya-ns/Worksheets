#include <stdio.h>
#include<math.h>
int main()
 {
    float n,f,voltage_gain,x,y,z;
    n=4;
    f=120;
    x=529+0.5*f*f;
    y=pow(x,0.5);
    z=275/y;
    voltage_gain=pow(z,n);
    printf("the value of voltage gain is =%.2f",voltage_gain);

}


