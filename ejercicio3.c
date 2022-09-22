#include <stdio.h>

void verdaderoyfalso(int a, int b, int c){
  if (a == b && b == c) {
    printf("Verdadero\n");
  }else {
    printf("Falso\n");
  }
};

int main(int argc, char *argv[]) {
  verdaderoyfalso(4,4,5);
  verdaderoyfalso(2,2,2);
  verdaderoyfalso(3,4,5);
  verdaderoyfalso(5,4,5);
  return 0;
}
