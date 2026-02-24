#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char st[10];
    char sen[20];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c", &ch);
    scanf("%s", st);
    getchar();
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", st);
    printf("%s\n", sen);    
}

