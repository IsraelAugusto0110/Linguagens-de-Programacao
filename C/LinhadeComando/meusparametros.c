#include <stdio.h>

/*1) Crie um programa que conte quantos par�metros vc passou
C:\>meusparametros hj tem almo�o na casa de Denis
Vc passou 7 palavras*/

int main(int argc, char * argv[]) {
    printf("Voce digitou %d palavras\n",argc-1);

    return 0;
}
