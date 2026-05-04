#include <stdio.h>

int main (){
    int quantidade_notas;
    printf("Digite a quantidade de notas: ");
    scanf("%d"), &quantidade_notas);
    float notas[quantidade_notas]; 
    float soma;
    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite a sua nota: ");
        scanf("%f", &notas[i]);
        
    }

    float notas[2]; // indice de 0-1 (n-1)

    notas[0] = 10;
    notas [1] = 8;

    float media = (notas [0] + notas [1]) / 2;

    printf("A media do aluno e: %.2f", media);

    return 0;
}