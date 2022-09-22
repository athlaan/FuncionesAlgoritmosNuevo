#include <stdio.h>

void is_triangle(int A, int B, int C){
  if (A + B > C && B + C > A && C + A > B) {
    printf("Verdadero\n");
  }else{
    printf("Falso\n");
  }
}

int main(int argc, char *argv[]) {
  is_triangle(3,4,2);
  is_triangle(1,1,1);
  is_triangle(5,9,10);
  is_triangle(4,1,5);
  is_triangle(6,6,6);
  is_triangle(8,9,11);
  return 0;
}
