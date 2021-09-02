# include <stdio.h>

void main() {
    /**9. Durante uma corrida de autom�veis com N voltas de dura��o foram anotados para
    um piloto, na ordem, os tempos registrados em cada volta. Fazer um programa em
    C para ler os tempos das N voltas, calcular e imprimir:
    a. melhor tempo;
    b. a volta em que o melhor tempo ocorreu;
    c. tempo m�dio das N voltas;**/

    int n, i, j, volta = 0;

    printf("Qual o numero de voltas? ");
    scanf("%d", &n);

    float t[n], x,soma, media, melhor;

    printf("Qual o tempo? ");
    scanf("%f", &x);
    t[0] = x;
    melhor = x;
    soma = x;

    for(i = 1; i < n; i++){
        printf("Qual o tempo? ");
        scanf("%f", &x);
        t[i] = x;
        soma = soma + x;

        if(x <= melhor){
            melhor = x;
            volta = i;
        }
    }

    media = soma / n;

    printf("O melhor tempo foi %.1f\n", melhor);
    printf("Na volta %d\n", volta +1);
    printf("A media das voltas %.1f\n", media);
}
