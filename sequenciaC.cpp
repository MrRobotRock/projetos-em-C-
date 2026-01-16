
//escreva os Ns primeiros termos da série (2,2,4,6,9,14,22)
#include <stdio.h>

int main() {
    int n, i;
    int a = 2, b = 2, proximo; // Precisamos de a e b para a soma

    printf("Digite quantos termos vc quer dessa sequencia: \n");
    scanf("%d", &n);

    // CASOS INICIAIS (1º e 2º termos)
    if (n >= 1) printf("2");
    if (n >= 2) printf(", 2");

    // O LOOP começa do 3º termo em diante
    for (i = 3; i <= n; i++) {
        
        // PASSO B: Gerar o próximo usando a FÓRMULA
        if (i <= 4) {
            proximo = a + b;       // Até o 4º termo (gera o 4 e o 6)
        } else {
            proximo = a + b - 1;   // Do 5º em diante (gera o 9, 14, 22...)
        }

        // PASSO A: Imprimir o resultado
        printf(", %d", proximo);

        // PASSO C: "Dança das Variáveis" (Atualizar para a próxima conta)
        a = b;       // O 'b' vira o novo 'atrasado'
        b = proximo; // O 'proximo' vira o novo 'anterior'
    }

    printf("\n");
    return 0;
}
