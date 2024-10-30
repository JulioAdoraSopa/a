#include <stdio.h>
#include <stdlib.h>
int main(){

int n1, n2, result;

char sinal;
//7:28

printf("Digite dois valores");
scanf("%i", &n1);
scanf("%i", &n2);
printf("digite + para somar ou - para subtrair:\n");
scanf("%c", &sinal);

switch (sinal) {
case '+':

    result = n1 + n2;
    printf("A soma e: %i\n", result);
    break; 
case '-':
    result = n1 - n2;
    printf("A subtracao e: %i\n", result);
    break;
    default:
    printf("operacao invalida");

}



    return 0;
}