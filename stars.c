#include <stdio.h>

int main()
{
int n, i, j;

printf("How many rows you want in your pyramid?\n");

for(i=1; i<= 10 ; i++)
{
    printf(" %d    " , i - 1);

for(j=1; j < 20; j++)
{

if (j > 10 - i && j < 10 + i)
{

printf ("*");

}

else

printf(" ");

}
 printf("\n");

}
return 0;
}
