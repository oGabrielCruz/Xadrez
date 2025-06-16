#include <stdio.h>

int main(){
    int idade =20;
    float altura = 1.75;
    double peso = 90.2;
    char opcao = 'A';
    char nome[20] = "Biel";

    // printf("A idade do %s é %d\n", nome, idade);
    // printf("A altura é: %f\n", altura);
    // printf("A opção é: %c\n", opcao);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d \n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f \n", altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s \n", nome);
}
