#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
 
    //Definindo Variáveis
    int nota1,nota2,nota3, resultado;
 
    //Lendo os 3 valores
    printf("Digite as 3 notas:");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    resultado = nota1 * nota2 * nota3;
 
    //Exibindo resultado
    printf("O resultado é: %d", resultado);
 
}
