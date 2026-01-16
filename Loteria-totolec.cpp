#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define QTD_NUM 6       // 6 números por jogo
#define MAX_NUM 60      // números de 1 a 60
#define MAX_JOGOS 100   // limite de jogos que o usuário pode gerar

// Prototipos
void gerarJogo(int jogo[]);
int jogoRepetido(int jogos[][QTD_NUM], int total, int jogo[]);
int contarAcertos(int jogo[], int sorteio[]);
int verificarRepetidos(int numeros[], int qtd, int num);

int main() {
    setlocale(LC_ALL, "portuguese"); // Permite acentos

    srand(time(NULL));

    int N;
    printf("Quantos jogos deseja gerar? (max %d): ", MAX_JOGOS);
    scanf("%d", &N);

    if (N < 1 || N > MAX_JOGOS) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    int jogos[N][QTD_NUM]; // Armazena os jogos gerados

    // Gera jogos aleatórios únicos
    for (int i = 0; i < N; i++) {
        int jogo[QTD_NUM];
        do {
            gerarJogo(jogo);
        } while (jogoRepetido(jogos, i, jogo)); // Verifica duplicação
        for (int j = 0; j < QTD_NUM; j++) {
            jogos[i][j] = jogo[j];
        }
    }

    // Salva jogos em arquivo
    FILE *arquivoJogos = fopen("jogos_totolec.txt", "w");
    if (!arquivoJogos) {
        printf("Erro ao criar arquivo de jogos!\n");
        return 1;
    }
    printf("\nJogos gerados:\n");
    for (int i = 0; i < N; i++) {
        printf("Jogo %d: ", i+1);
        for (int j = 0; j < QTD_NUM; j++) {
            printf("%d ", jogos[i][j]);
            fprintf(arquivoJogos, "%d ", jogos[i][j]);
        }
        fprintf(arquivoJogos, "\n");
        printf("\n");
    }
    fclose(arquivoJogos);
    printf("\nJogos salvos em 'jogos_totolec.txt'\n");

    // Solicita números sorteados
    int sorteio[QTD_NUM];
    printf("\nDigite os %d números sorteados (1 a %d), sem repetir:\n", QTD_NUM, MAX_NUM);
    for (int i = 0; i < QTD_NUM; i++) {
        int num;
        do {
            printf("Número %d: ", i+1);
            scanf("%d", &num);
            if (num < 1 || num > MAX_NUM) {
                printf("Número inválido! Digite entre 1 e %d.\n", MAX_NUM);
            } else if (verificarRepetidos(sorteio, i, num)) {
                printf("Número repetido! Digite outro.\n");
            } else {
                sorteio[i] = num;
                break;
            }
        } while (1);
    }

    // Salva resultados em arquivo
    FILE *arquivoResultado = fopen("resultados_totolec.txt", "w");
    if (!arquivoResultado) {
        printf("Erro ao criar arquivo de resultados!\n");
        return 1;
    }

    fprintf(arquivoResultado, "Resultado do sorteio: ");
    printf("\nResultado do sorteio: ");
    for (int i = 0; i < QTD_NUM; i++) {
        printf("%d ", sorteio[i]);
        fprintf(arquivoResultado, "%d ", sorteio[i]);
    }
    printf("\n");
    fprintf(arquivoResultado, "\n");

    // Verifica acertos e premiação
    printf("\nJogos e premiação:\n");
    for (int i = 0; i < N; i++) {
        int acertos = contarAcertos(jogos[i], sorteio);
        printf("Jogo %d: ", i+1);
        fprintf(arquivoResultado, "Jogo %d: ", i+1);
        for (int j = 0; j < QTD_NUM; j++) {
            printf("%d ", jogos[i][j]);
            fprintf(arquivoResultado, "%d ", jogos[i][j]);
        }

        // Exibe acertos e premiação
        printf("| Acertos: %d ", acertos);
        fprintf(arquivoResultado, "| Acertos: %d ", acertos);

        if (acertos == 6) {
            printf("| Prêmio: GRANDE PREMIO!");
            fprintf(arquivoResultado, "| Prêmio: GRANDE PREMIO!");
        } else if (acertos == 5) {
            printf("| Prêmio: 2º PRÊMIO!");
            fprintf(arquivoResultado, "| Prêmio: 2º PRÊMIO!");
        } else if (acertos == 4) {
            printf("| Prêmio: 3º PRÊMIO!");
            fprintf(arquivoResultado, "| Prêmio: 3º PRÊMIO!");
        } else if (acertos == 3) {
            printf("| Prêmio: 4º PRÊMIO!");
            fprintf(arquivoResultado, "| Prêmio: 4º PRÊMIO!");
        } else {
            printf("| Sem prêmio");
            fprintf(arquivoResultado, "| Sem prêmio");
        }
        printf("\n");
        fprintf(arquivoResultado, "\n");
    }

    fclose(arquivoResultado);
    printf("\nResultados salvos em 'resultados_totolec.txt'\n");

    return 0;
}

// Gera um jogo aleatório sem repetir números
void gerarJogo(int jogo[]) {
    int num, repetido;
    for (int i = 0; i < QTD_NUM; i++) {
        do {
            repetido = 0;
            num = (rand() % MAX_NUM) + 1;
            for (int j = 0; j < i; j++) {
                if (jogo[j] == num) repetido = 1;
            }
        } while (repetido);
        jogo[i] = num;
    }
}

// Verifica se o jogo já foi gerado
int jogoRepetido(int jogos[][QTD_NUM], int total, int jogo[]) {
    for (int i = 0; i < total; i++) {
        int iguais = 1;
        for (int j = 0; j < QTD_NUM; j++) {
            if (jogos[i][j] != jogo[j]) {
                iguais = 0;
                break;
            }
        }
        if (iguais) return 1; // jogo duplicado
    }
    return 0;
}

// Conta acertos de um jogo
int contarAcertos(int jogo[], int sorteio[]) {
    int acertos = 0;
    for (int i = 0; i < QTD_NUM; i++) {
        for (int j = 0; j < QTD_NUM; j++) {
            if (jogo[i] == sorteio[j]) {
                acertos++;
                break;
            }
        }
    }
    return acertos;
}

// Verifica repetição de números dentro de um array
int verificarRepetidos(int numeros[], int qtd, int num) {
    for (int i = 0; i < qtd; i++) {
        if (numeros[i] == num) return 1;
    }
    return 0;
}

