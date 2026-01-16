#include <stdio.h>

int main() {
    int n;
    int a = 1, b = 1, c;
    int pos = 1; // posição do número na sequência

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 está na posição 1 da sequência de Fibonacci.\n");
        return 0;
    }

    while (c < n) {
        c = a + b;
        a = b;
        b = c;
        pos++;
    }

    if (c == n) {
        printf("%d está na posição %d da sequência de Fibonacci.\n", n, pos);
    } else {
        printf("%d NÃO está na sequência de Fibonacci.\n", n);
    }

    return 0;
}

