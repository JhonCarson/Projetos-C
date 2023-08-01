#include <stdio.h>

int main(void){

int idade;
char confirma;

    printf("Idade:\n");
    scanf("%d", &idade);
    printf("Confirma sua idade? ");
    scanf("%c", &confirma);
    printf("%c\n", confirma);

    if(confirma == 'y' || confirma == 'Y'){
        printf("ok, idade confirmada\n");
    }else{
        ("idade nao confirmada, ate mais...\n");
    }
    return 0;
}