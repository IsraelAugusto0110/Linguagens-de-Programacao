# include <stdio.h>

void main() {
    /*15. Leia um vetor de 50 posi��es e o compacte, ou seja, elimine as posi��es com valor
        zero avan�ando uma posi�  com os com os valores subsequentes do vetor. Dessa
        forma todos �zeros� devem ficar para as posi��es finais do vetor.*/

    int v[5], i, x;

    for(i = 0; i < 5; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &x);
        v[i] = x;
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Vetor[%d]= %d\n", i, v[i]);
    }
}
