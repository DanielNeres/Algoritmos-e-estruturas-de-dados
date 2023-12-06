#include <stdio.h>
float soma(int a, int b){
return a + b;
}
float subtracao(int a, int b){
return a - b;
}
float produto(int a, int b){
return a * b;
}
float divisao(int a, int b){
return a / b;
}

float calcula(int x, int y, float (*operacao)(int, int)){
return (*operacao)(x, y);
}

int main(){
float resultado = calcula(5, 2, divisao);

printf("resultado: %.2f", resultado);
return 0;
}