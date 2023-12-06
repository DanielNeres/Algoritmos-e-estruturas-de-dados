void  incrementa(int num){
return ++num;
}
int main(void){
int num = 5;

num = inc(num);

printf("%d", num);
return 0;
}