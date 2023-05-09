#include <stdio.h>

void numeros_binarios(int i, int v[3]){
  if (i == 3){
    for (int k = 0;k<3;k++)
      printf("%i",v[k]);
    printf("\n");
  }
  else{
    v[i] = 0;
    numeros_binarios(i+1, v);
    v[i] = 1;
    numeros_binarios(i+1, v);
  }
}


int main() {
  int tamanho = 3;
  int v[3] = {0,0,0};
  numeros_binarios(0, v);
}