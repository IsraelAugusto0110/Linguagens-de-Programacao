# include<stdio.h>
# include<string.h>

/*13. Dados duas strings (um contendo uma frase e outro contendo uma palavra),
determine o n�mero de vezes que a palavra ocorre na frase.*/

void main(){
    char frase[50], frase2[50];
    int i = 0, tam, n, j, h = 0, achou = 0;

    printf("Digite sua frase: ");
    gets(frase);

    while(frase[i] != 0){
        if(frase[i] != ' '){
            frase2[i] = frase[i];/*remover os espacos em branco*/
            /*printf("%c", frase2[i]);*/
        }
        i++;
    }
    tam = strlen(frase2);

    char palavra[50];
    printf("Qual palavra deseja pesquisar? ");
    scanf("%s", palavra);
    n = strlen(palavra);

    for(i = 0; i < tam - 1; i++){
        /*divide a frase em partes menores que serao comparadas ao termo de busca*/
        for(j = i; j < n + i; j++){
            frase[h] = frase2[j];
            h++;
        }
        h = 0;

        for(j = 0; j < n; j++){
            if(frase[0] == palavra[j]){
                achou++;
            }
        }
    }

    printf("Encontradas %d referencias ao termo buscado.", achou);
 }
