#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0 ;
    char words[50];
    printf("write the words bere to count :");
    gets(words);

    for(int i = 0; i >= 0; i++) {
        if(words[i] != '\0') {
            count++;
        } else {
            break;
        }
    }

    printf("%d", count);
    return 0;
}
