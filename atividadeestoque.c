#include <stdio.h>

int main() {

float temperatura, umidade;
unsigned int estoque;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if (temperatura > 30){
printf("A temperatura esta alta.\n");
} else {
    printf("A temperatura esta baixa.\n");
    }
if (umidade > 50){
printf("A umidade esta alta.\n");
} else {
    printf("A umidade esta baixa.\n");
    }





    return 0;
}