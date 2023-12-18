// duas formas de usar uma variavel struct como argumento

// atribuiçaõ estatica, ele cria outra variavel durante a execução da função, ou seja, não tem como modificar 
int main(void){
          struct ponto p;
          captura(&p);
          imprime(&p);
          return 0;
  }

  int main(void){
          struct ponto *p = malloc(sizeof(struct ponto));
          captura(p);
          imprime(p);
          free(p);
          return 0;
  }
