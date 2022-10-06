#include <stdio.h>
#include <stdlib.h>

void cadena (int n){
  int suma = n;
  printf("%d ", n);
  int i = 2;
  while (n!= 1) {
    if(n % 1 == 0){
      printf("%d dividi por %d\n", n / i);
      n /= i;
      suma += i;
    }
  }
}
