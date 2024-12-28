// Fac¸a umam func¸ao que receba a altura e o raio de um cilindro circular e retorne o volume ˜
// do cilindro. O volume de um cilindro circular e calculado por meio da seguinte f ´ ormula: ´
// V = π ∗ raio2 ∗ altura, onde π = 3.141592.

#include <stdio.h>

#define PI 3.141592 // Define o valor de PI

// Função que calcula o volume do cilindro
double calcularVolumeCilindro(double altura, double raio) {
    return PI * (raio * raio) * altura; // Volume do cilindro
}

int main() {
    double altura, raio;

    // Leitura da altura e do raio
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    // Cálculo e exibição do volume
    double volume = calcularVolumeCilindro(altura, raio);
    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
