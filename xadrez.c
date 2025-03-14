#include <stdio.h>

//FUNÇÃO RECURSIVA PARA MOVER A TORRE 5 CASAS PARA DIREITA
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

//FUNÇÃO RECURSIVA PARA MOVER A RAINHA 8 CASAS PARA ESQUERDA
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//FUNÇÃO RECURSIVA PARA MOVER BISPO 5 CASAS NA DIAGONAL (PARA CIMA E DIREITA)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima,Direita\n");
    moverBispoRecursivo(casas - 1);
}

//FUNÇÃO COM LOOPS ANINHADOS PARA MOVER O BISPO(OUTRA ABORDAGEM)
void moverBispoLoop(int casas) {
    for (int i = 1; i<= 1; i++) {
        for (int j =1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

//função com loops aninhados para o movimento do cavalo
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo (2 para cima, 1 para a direita):\n");
    int x = 0, y = 0;
    
    for (int i =0; i < movimentos; i++) {
        x += 2; //MOVE DUAS CASAS PARA CIMA
        y += 1; // MOVE1 CASA PARADIREITA

        //VERIFICA SE O MOVIMENTO ESTÁ DENTRO DOS LIMITES SIMULAÇÃO
        if (x > 8 || y > 8) {
            printf("Movimento invalido, ajustando...\n");
            continue;
        }
        printf("Cima, Cima, Direita (posição: %d,%d)\n", x, y);
    }
}

int main() {
    int escolha;
    do{
        //EXIBE O MENU
        printf("\n****Simulador de Movimentos de Peças de Xadrez****\n");
        printf("1 - Mover Torre\n");
        printf("2 - Mover Bispo (Recursivo)\n");
        printf("3 - Mover Bispo (Loops Aninhados)\n");
        printf("4 - Mover Rainha\n");
        printf("5 - Mover Cavalo\n");
        printf("0 - Sair\n");
        printf("Escolha uma Opção: ");
        scanf("%d", &escolha);

        //EXECUTA A AÇÃO CONFORME A ESCOLHA DO USUARIO
        switch (escolha) {
            case 1:
                printf("\nMovimento da Torre:\n");
                moverTorre(5);
                break;
            case 2:
                printf("\nMovimento do Bispo (Recursivo):\n");
                moverBispoRecursivo(5);
                break;
            case 3:
                moverBispoLoop(5);
                break;
            case 4:
                printf("\nMovimento da Rainha:\n");
                moverRainha(8);
                break;
            case 5:
                moverCavalo(4);
                break;
            case 0:
                printf("Saindo do Jogo...\n");
                break;
            default:
                printf("\nOpção Imvalida! Tente Novamente.\n");
        }
    } while (escolha != 0);
    return 0;
}
