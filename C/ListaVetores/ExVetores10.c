# include <stdio.h>

void main() {
    /**10. Deseja-se publicar o n�mero de acertos de cada aluno em uma prova em forma de
    testes. A prova consta de 30 quest�es, cada uma com cinco alternativas
    identificadas por A, B, C, D e E. Para isso s�o dados:
    a. o cart�o gabarito;
    b. o n�mero de alunos da turma;
    c. o cart�o de respostas para cada aluno, contendo o seu n�mero e suas
    respostas.**/

    int i;

    int g[3][5], x;/*primeiro criamos um vetor para armazenar as
                        resposts corretas*/

    for(i = 0; i < 3; i++){
        printf("Questao %d: ", g[i] + 1);
        scanf("%d", &x);
    }
}
