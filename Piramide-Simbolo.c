#include <stdio.h>
#include <stdlib.h>
void main()
{
    int linhas, i, j;
    char simbolo;

    printf("Digite a quantidade de linhas que deseja em sua pirâmide: ");
    scanf("%d", &linhas);
    
    fflush(stdin);
    printf("Digite o símbolo que deseja usar: ");
    scanf("%c", &simbolo);

    for(i = 1; i <= linhas; i++){
        for(j = 1; j <= i; j++){
            printf("%c", simbolo);
        }
        printf("\n");
    }

}