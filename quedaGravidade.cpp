#include <stdio.h>
#include <math.h> 

int main() {
   float t, h, g,v;
    
    printf("Digite o tempo de queda (s): ");
    scanf("%f", &t);

    
    printf("Digite a altura percorrida (metros): ");
    scanf("%f", &h);

    g = (2 * h) / pow(t, 2);
    v = sqrt(2.0 * g * h);
    v = 3.6 * v;
    
    printf("Gravidade experimental (g): %.4f m/s^2\n", g);
    printf("Velocidade final (v): %.4f km/h\n", v);

}
