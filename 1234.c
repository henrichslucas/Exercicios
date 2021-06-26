#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void tirarespaco(char *str)
{
    int pos = 0;
  
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            str[pos++] = str[i]; 
        }
    }
    str[pos] = '\0';
}

int main()
{
    int i, check = 0, tamanho, pos = 0;
    char frase[100], max = 100, frase_sem_espaco[100];

    fgets(frase, max, stdin);
    tamanho = strlen(frase);
    frase_sem_espaco = tirarespaco(frase);

    for (i = 0; i < tamanho; i++)
    {

    }
    printf("%s", frase);
    return 0;
}