#include <stdio.h>

int main() {

int idade1, idade2;

printf("Digite a primeira idade: ");
scanf("%d", &idade1);
printf("Digite a segunda idade: ");
scanf("%d", &idade2);

if (idade1 > idade2) {
printf("A idade %d é maior que a idade %d\n", idade1, idade2);
}else if (idade1 < idade2) {
    printf("A idade %d é menor que a idade %d\n", idade1, idade2);
}else {
    printf("As idades %d e %d são iguais\n", idade1, idade2);
}

}