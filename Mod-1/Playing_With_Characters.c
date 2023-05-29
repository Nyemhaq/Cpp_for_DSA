#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch, wor[100], sen[101];
    scanf("%c", &ch);
    scanf("%s", wor);
    fgets(sen, 101, stdin);
    // printf("%c\n", ch);
    // printf("%s\n", wor);
    // for (int i = 0; i < strlen(sen); i++)
    // {
    //     printf("%c", sen[i]);
    // }
    printf("%d", strlen(sen));
    return 0;
}