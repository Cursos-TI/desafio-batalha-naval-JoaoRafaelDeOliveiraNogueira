#include <stdio.h>
#define TAM 10
#define H 5

int nivel_iniciante(void){
    // ===== TABULEIRO 10x10 =====
    int tabuleiro[10][10];

    // Inicializa tudo com 0 (água)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ===== NAVIOS (vetores) =====
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // ===== POSIÇÕES INICIAIS =====
    int linhaH = 1, colunaH = 2; // horizontal
    int linhaV = 3, colunaV = 4; // vertical

    // ===== VALIDAÇÃO (dentro do tabuleiro) =====
    if(colunaH + 3 > 10 || linhaV + 3 > 10){
        printf("Erro: Navio fora dos limites do tabuleiro.\n");
        return 1;
    }

    // ===== POSICIONAR NAVIO HORIZONTAL =====
    for(int i = 0; i < 3; i++){
        // verifica sobreposição
        if(tabuleiro[linhaH][colunaH + i] != 0){
            printf("Erro: Sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // ===== POSICIONAR NAVIO VERTICAL =====
    for(int i = 0; i < 3; i++){
        // verifica sobreposição
        if(tabuleiro[linhaV + i][colunaV] != 0){
            printf("Erro: Sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // ===== EXIBIR TABULEIRO =====
    printf("TABULEIRO:\n\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}


int nivel_aventureiro(void){
//==== Variaveis do tabuleiro ====
    int tabuleiro[10][10];
// ==== o 0 vale como água, adicionando a agua ====
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

// ==== Adicionando os navios da diagonal ====
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        tabuleiro[i][j];
        if(tabuleiro[i][j] == tabuleiro[1][1]){
            tabuleiro[1][1] = 3;
        }
        else if(tabuleiro[i][j] == tabuleiro[2][2]){
            tabuleiro[2][2] = 3;
        }
        else if(tabuleiro[i][j] == tabuleiro[3][3]){
            tabuleiro[3][3] = 3;
        }
        else if(tabuleiro[i][j] == tabuleiro[8][8]){
            tabuleiro[8][8] = 3;
        }
        else if(tabuleiro[i][j] == tabuleiro[7][7]){
            tabuleiro[7][7] = 3;
        }
        else if(tabuleiro[i][j] == tabuleiro[6][6]){
            tabuleiro[6][6] = 3;
        }
    }
}


// ==== Adicionando o navio na horizontal ====
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        tabuleiro[i][j];
       if(tabuleiro[i][j] == tabuleiro[2][4]){
        tabuleiro[2][4] = 3;
       }
       else if(tabuleiro[i][j] == tabuleiro[2][5]){
        tabuleiro[2][5] = 3;
       }
       else if(tabuleiro[i][j] == tabuleiro[2][6]){
        tabuleiro[2][6] = 3;
       }
       printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

// ==== Adicionando o navio da vertical ====
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        tabuleiro[i][j];
       if(tabuleiro[i][j] == tabuleiro[6][1]){
        tabuleiro[6][1] = 3;
       }
       else if(tabuleiro[i][j] == tabuleiro[7][1]){
        tabuleiro[7][1] = 3;
       }
       else if(tabuleiro[i][j] == tabuleiro[8][1]){
        tabuleiro[8][1] = 3;
       }
       printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}}

 int nivel_mestre(void){
   int tab[TAM][TAM];
    int cone[H][H], cruz[H][H], oct[H][H];

    int i, j;

    // =========================
    // 1. Inicializar tabuleiro
    // =========================
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            tab[i][j] = 0;
        }
    }

    // =========================
    // 2. Navios (exemplo)
    // =========================
    tab[4][4] = 3; // só pra visualizar melhor

    // =========================
    // 3. CONE (origem no topo)
    // =========================
    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            // começa com 0
            cone[i][j] = 0;

            // topo do cone (linha 0, meio)
            if(i == 0 && j == H/2)
                cone[i][j] = 1;

            // expansão
            if(i == 1 && (j >= 1 && j <= 3))
                cone[i][j] = 1;

            if(i == 2)
                cone[i][j] = 1;
        }
    }

    // =========================
    // 4. CRUZ (centro)
    // =========================
    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            if(i == H/2 || j == H/2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // =========================
    // 5. OCTAEDRO (formato do enunciado)
    // =========================
    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            oct[i][j] = 0;

            if(i == 1 && j >= 1 && j <= 3)
                oct[i][j] = 1;

            if(i == 2 && j == 2)
                oct[i][j] = 1;
        }
    }

    // =========================
    // 6. Aplicar CONE
    // =========================
    int origemLinha = 2;
    int origemColuna = 4;

    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            int linhaTab = origemLinha + i;
            int colunaTab = origemColuna + (j - H/2);

            if(linhaTab < TAM && colunaTab >= 0 && colunaTab < TAM){

                if(cone[i][j] == 1)
                    tab[linhaTab][colunaTab] = 5;
            }
        }
    }

    // =========================
    // 7. Aplicar CRUZ
    // =========================
    origemLinha = 6;
    origemColuna = 2;

    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            int linhaTab = origemLinha + (i - H/2);
            int colunaTab = origemColuna + (j - H/2);

            if(linhaTab >= 0 && linhaTab < TAM &&
               colunaTab >= 0 && colunaTab < TAM){

                if(cruz[i][j] == 1)
                    tab[linhaTab][colunaTab] = 5;
            }
        }
    }

    // =========================
    // 8. Aplicar OCTAEDRO
    // =========================
    origemLinha = 5;
    origemColuna = 7;

    for(i = 0; i < H; i++){
        for(j = 0; j < H; j++){

            int linhaTab = origemLinha + (i - H/2);
            int colunaTab = origemColuna + (j - H/2);

            if(linhaTab >= 0 && linhaTab < TAM &&
               colunaTab >= 0 && colunaTab < TAM){

                if(oct[i][j] == 1)
                    tab[linhaTab][colunaTab] = 5;
            }
        }
    }

    // =========================
    // 9. Mostrar tabuleiro
    // =========================
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){

            if(tab[i][j] == 0)
                printf("0 ");
            else if(tab[i][j] == 3)
                printf("3 ");
            else if(tab[i][j] == 5)
                printf("5 ");
        }
        printf("\n");
    }

 }

int main() {
    nivel_iniciante();
    nivel_aventureiro();
    nivel_mestre();
    

    return 0;
}
