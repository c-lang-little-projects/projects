/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sayi ;

   printf("sayi giriniz:");
   scanf("%d",&sayi);

   if(sayi == 0)
    printf("yazilim departmani /n");
   else if(sayi == 1)
    printf("bilisim departmani /n ");
   else if(sayi == 2)
    printf("doctor departmani /n ");
    else if(sayi == 3)
    printf("okul departmani /n ");
    else {
    printf("departmanlar /n");
    }

    return 0;
}

