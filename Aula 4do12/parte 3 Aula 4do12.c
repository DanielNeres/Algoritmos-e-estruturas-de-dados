#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float produto(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return (float)a / b;
}
float calcula(int x, int y, float (*operacao)(float, float)) {
    return (*operacao)(x, y);
}

int main() {
    float resultado = calcula(5, 2, produto);

    printf("resultado: %.2f", resultado);
    return 0;
}