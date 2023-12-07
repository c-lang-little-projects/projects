#include<stdio.h>

int main()
{
    int x , y,z;
    printf("write the x value ");
    scanf("%d" , &x);
    printf("write the y value ");
    scanf("%d", &y);

    z = x * x + y * y;
    int i;
    for( i = 2;i < z ;i++){
    if(i * i == z){
    z = i;
    }
    }
    printf("the value of  %d" , z );
    return 0;
}
