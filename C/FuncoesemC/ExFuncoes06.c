# include <stdio.h>

int pot(int n, int m);

void main() {
    /*6. Escreva uma fun��o recursiva que recebe, por
        par�metro, dois valores X e Z e calcula e retorna
        Xz. (sem utilizar fun��es prontas).*/

    int x, z;
    scanf("%d", &x);
    scanf("%d", &z);

    printf("%d ^ %d = %d\n", x, z, pot(x, z));
}

int pot(int n, int m){
    int p = n, i;

    for(i = 1; i < m; i++){
        p *= n;
    }

    return p;
}
