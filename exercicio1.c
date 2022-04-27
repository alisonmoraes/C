#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
 
    //Crie um algoritmo que leia 2 notas e mostre a média entre elas.
 
    //Definindo Variáveis
    float nota1, nota2, resultado;
 
    //Lendo primeiro valor
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
 
    //Lendo segundo valor
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
 
    //Calculando e mostrando resultado final
    resultado = (nota1 + nota2) / 2;
    printf("A média é: %f", resultado);
 
}