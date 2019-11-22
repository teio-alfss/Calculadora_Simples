/*      TEIO
alifer da silva souza
calculadora basica com funcoes*/
#include "calculadora.h"


//===========================================================
int main(){
    int Menu;
    float valor1, valor2, resultado;
    while(Menu != 5){
        printf("Digite os valores 1--> ");
        scanf("%f",&valor1);
        
        printf("Digite os valores 2--> ");
        scanf("%f",&valor2);
        
        
        MenuP();
        scanf("%i",&Menu);
        system("cls");
        
    switch(Menu){
        case 1: resultado = Soma(valor1, valor2);
                printf("\t --> %.2f + %.2f = %.2f\n", valor1, valor2, resultado);
                break;

        case 2: resultado = Subtracao(valor1, valor2);
                printf("\t --> %.2f - %.2f = %.2f\n", valor1, valor2, resultado);
                break;

        case 3: resultado = Divisao(valor1, valor2);
                printf("\t --> %.2f / %.2f = %.2f\n", valor1, valor2, resultado); 
                break;

        case 4: resultado = multiplicacao(valor1, valor2);
                printf("\t --> %.2f * %.2f = %.2f\n", valor1, valor2, resultado);
                break;

        default : printf("opcao invalida");
    }

    }

return 0;
}
//------------------------------------------------------------