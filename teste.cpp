#include <stdio.h>
#include <locale.h>

int n, cont = 0, i = 2, d, primo;
int main(){

scanf("%d", &n);

while (cont < n) {
    primo = 0;

    for (d = 1; d <= i; d++) {
        if (i % d == 0)
            primo++;
    }

    if (primo == 2) {
        printf("%d ", i);
        cont++;
    }

    i++;
}
}
