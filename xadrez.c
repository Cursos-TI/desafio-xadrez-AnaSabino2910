#include <stdio.h>

// FUNÇÃO RECURSIVA PARA O MOVIMENTODA TORRE (MOVIMENTO PARA DIREITA)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

//FUNÇÃO RECURSSIVA PARA MOVIMENTO DA RAINHA (MOVIMENTO PARA A ESQUERDA)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//FUNÇÃO RECURSSIVA  PARA O BISPO (MOVIMENTO DIAGONAL) USANDO LOOPS ANINHADO moverBispo(int casas, int passos) 
void moverBispo(int casas, int passo) {
    if (casas == 0) return;

    //LOOP INTERNO PARA CONTROLAR A MOVIMENTAÇÃO DIAGONAL
    for (int i = 0; i < passo;  i++) {
      printf("Cima, Direita\n");
    }
    moverBispo(casas - 1, passo);
}

//MOVIMENTO DO CAVALO ( 2 CASAS PARA CIMA ,1 PARA DIREITA) USANDO LOOPS ANINHADOS
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    int movimento = 2;

  // LOOP PARA MOVIMENTAR O CAVALO ( 2 CASAS PARA CIMA)
    for(  int i = 0; i < movimento; i++) {
    printf("Cima\n");
    }

    //LOOP PARA MOVIMENTAR UMA CASA PARA DIREITA (USANDO WHILE E BREAK)
    int passos = 1;
    while (passos > 0) {
        printf("Direita\n");
        passos--;

        if (passos == 0) break;
    }
}

//FUNÇÃO PRINCIPAL
int main() {
    //MOVIMENTO DA TORRE
    printf("Movimento da Torre ( 5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    //Movimento do Bispo
    printf("Movimento do Bispo ( 5 casas na diagonal para cima e á direita):\n");
    moverBispo(5, 1);
    printf("\n");

    //MOVIMENTO DA RAINHA
    printf("Movimento da Rainha ( 8 casas para a esquerda):\n");
    moverRainha(8);
    printf("\n");

    //MOVIMENTO DO CAVALO
    moverCavalo();
    
    return 0;
}


