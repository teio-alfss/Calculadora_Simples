/*      TEIO
alifer da silva souza
calculadora basica com funcoes*/
#include "calculadora.h"

//Menu-------------------------------------------------------
void MenuP(){
    printf("\n\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\xBA   OPCAO DESEJADA    \xBA");
	printf("\n\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\n");	
	printf("\xBA  1-SOMA             \xBA\n");
	printf("\xBA                     \xBA\n");	
	printf("\xBA  2-SUBTRAI          \xBA\n");
	printf("\xBA                     \xBA\n");	
	printf("\xBA  3-DIVIDE           \xBA\n");
	printf("\xBA                     \xBA\n");
    printf("\xBA  4-MULTIPLICA       \xBA\n");
	printf("\xBA                     \xBA\n");
    printf("\xBA  5-SAIR             \xBA\n");
	printf("\xBA                     \xBA\n");			
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
}

//Soma========================================================
float Soma(float vlr, float vlr2){
    float retorno;
    retorno = vlr + vlr2;
    return retorno;
}

//Subtração===================================================
float Subtracao(float vlr, float vlr2){
    float retorno;
    retorno = vlr - vlr2;
    return retorno;
}

//multiplicação=============================================
float multiplicacao(float vlr, float vlr2){
    float retorno;
    retorno = vlr * vlr2;
    return retorno;
}

//Divisao---------------------------------------------------
float Divisao(float vlr, float vlr2){
    float retorno;
    retorno = vlr / vlr2;
    return retorno;
}