#include <stdio.h>
int incrementa(int num){
return ++num;
}
int main(void){
int num = 5;

num = incrementa(num);

printf("%d", num);
return 0;