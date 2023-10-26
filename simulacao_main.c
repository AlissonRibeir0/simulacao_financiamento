#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include "sac_rasc.c"
#include "funcaoPriceRevisada.c"
#define MAX 80
//ORIGINAL

void linha(int qtdLinha)
{
    int i;
    for(i=0; i<qtdLinha; i++)
    {
        printf("=");
    }
    printf("\n\n");
}

void styleLine(int qtdStyLn)
{
    int i;
    for(i=0; i<qtdStyLn; i++)
    {
        printf("=");
    }
}

int main()   //TROCAR NOME PARA NÃO ENTRAR EM CONFLITO COM O MAIN DO PROJETO
{
    char op;

    setlocale(LC_ALL,"");

    do
    {
        sleep(1);
        system("cls");
        linha(MAX);

        styleLine(27);
        printf("SIMULAÇÃO DE FINANCIAMENTO");
        styleLine(27);
        printf("\n\n");

        printf("Selecione o modelo de simulação de financiamento:\n\n[1]TABELA SAC\n[2]TABELA PRICE\n[0]RETORNAR\n\n");
        scanf(" %c",&op);
        switch(op)
        {
        case '1':
            sac();
            break;
        case '2':
            price();
            break;
        case '0':
            //sai do loop
            break;
        default:
            printf("Opção inválida!!\n");
            sleep(1);
            system("cls");
            break;
        }
    }
    while(op!='0');
    printf("RETORNA PARA O MAIN");
    return 0;  //COLOCAR RETORNO PARA O MAIN DO PROJETO
}
