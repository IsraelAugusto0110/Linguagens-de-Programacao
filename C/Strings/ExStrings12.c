# include<stdio.h>
# include<string.h>

/*12. Leia dois vetores de n posi��es. Verifique e escreva se um � anagrama de outro.*/

void main(){
    int n, i, j, anagrama = 1, c = 0;

    printf("Quantas letras em cada palavra? ");
    scanf("%d", &n);

    char p1[n], p2[n];

    printf("Primeira: ");
    scanf("%s", p1);

    printf("Segunda: ");
    scanf("%s", p2);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(p1[i] == p2[j]){
                c++;/*deve haver pelo menos uma correspondencia para cada
                        letra*/
            }
        }
        if(c == 0){
            anagrama = 0;/*indicador de passagem*/
            break;
        }
        c = 0;
    }

    if(anagrama == 0){
        printf("Nao e anagrama :( \n");
    }else{
        printf("E anagrama :) \n");
    }
 }
