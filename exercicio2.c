include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
 
    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas
    int nota1, nota2;
 
    printf("Digite a primeira nota:");
    scanf("%d", &nota1);
    printf("Digite a segunda nota:");
    scanf("%d", &nota2);
    printf("A diferença entre os dois é: %d", abs(nota1 - nota2) );