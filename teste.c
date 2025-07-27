#include <stdio.h>

int main () {

float umidade, temperatura;
unsigned int estoque, estoqueminimo = 1000;

printf("Informe a umidade: ");
scanf("%f", &umidade);

printf(" \n");

printf("Informe a temperatura: ");
scanf("%f", &temperatura);

printf(" \n");

printf("Informe a quantidade em estoque: ");
scanf("%u", &estoque);

printf(" \n");

if (umidade < 30) {
printf("A umidade está baixa!\n");
}else{
printf("A umidade está alta!\n");
}

if (temperatura < 30) {
printf("A temperatura está baixa!\n");
}else{
printf("A temperatura está alta!\n");
}

if (estoque < estoqueminimo){
printf("O estoque está baixo!\n");
}else{
printf("O estoque está alto!\n"); 
}

return 0;

}