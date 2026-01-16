#include <stdio.h>

int main() {

    float p1, p2, p4;
    
    
    float n1,x2, x3;
    
    
    printf("Digite a nota da P1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da P2: ");
    scanf("%f", &p2);
    
    printf("Digite a nota da P4: ");
    scanf("%f", &p4);
    
    n1 = (p1 + p2) / 2.0;
    
    
    
   x2 = (35.0 - (2.0 * n1)) / 3.0;
    
    x3 = (2.0 * x2) - p4;
    
    printf("voce precisa tirar na P3: %.2f\n", x3);
    
}
