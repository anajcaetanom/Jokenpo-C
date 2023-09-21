
/* PEDRA PAPEL E TESOURA EM C */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PEDRA "Pedra"
#define PAPEL "Papel"
#define TESOURA "Tesoura"


const char *escolhaPes(int);
const char *escolhaComp(int);

/* main */ 
int main() {

    int nPessoa, nComp;

    srand(time(NULL));

    printf("\nBem vindo(a) ao pedra, papel e tesoura!\nPedra = 0\nPapel = 1\nTesoura = 2\n");
    printf("Digite um numero para jogar: ");
    scanf("%d", &nPessoa);

    nComp = rand() % 3;

    const char *player = escolhaPes(nPessoa);
    const char *pc = escolhaComp(nComp);

    if ((nPessoa != 0) && 
        (nPessoa != 1) &&
        (nPessoa != 2)) {
        printf("\nDigite apenas 0, 1 ou 2.\n");  

    } else if (nPessoa == nComp) {
        printf("\nSua escolha: %s \n", player);
        printf("Escolha do computador: %s \n", pc);
        printf("Empatou!");

    } else if  ((nPessoa ==  0 && nComp == 2) ||
                (nPessoa ==  1 && nComp == 0) ||
                (nPessoa ==  2 && nComp == 1)) {
        printf("\nSua escolha: %s \n", player);
        printf("Escolha do computador: %s \n", pc);
        printf("Voce ganhou!");     

    } else {
        printf("\nSua escolha: %s \n", player);
        printf("Escolha do computador: %s \n", pc);
        printf("Voce perdeu :(");
    }
    
    return 0;
}   

/* função que retorna a escolha do jogador por escrito */ 
const char *escolhaPes(int nPessoa) {

    if (nPessoa == 0) {
        return PEDRA;
    } else if (nPessoa == 1) {
        return PAPEL;
    } else {
        return TESOURA;
    }
    
}

/* função que retorna a escolha do computador por escrito */ 
const char *escolhaComp(int nComp) {

    if (nComp == 0) {
        return PEDRA;
    } else if (nComp == 1) {
        return PAPEL;
    } else {
        return TESOURA;
    }
    
}