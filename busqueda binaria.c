#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int k, int lo,int hi){
  if(hi - lo == 1 && a[lo+1] != k) return -1;
  else if(hi - lo == 1) return lo + 1;
  int mid = lo + (hi - lo) / 2;
  if (a[mid] >= k)
    return binary_search(a,k,lo, mid);
    else
    return binary_search(a, k, mid, hi);
}

int brute_force_search(int a[], int length, int k){
  for (int i = 0; i < length; i++)
    if (a[i] == k) return i;
    return -1;
}



/*int binary_search(int lo, int hi){
  if (hi- lo == 1) return lo;
  int mid = lo + (h1 - lo) / 2;
  printf("Igual o mas grande que %d? s/n\n", mid);
  char response;
  scanf("%c", &response);
  getchar();
  if (response == 'n')
    return binary_search(lo, mid);
  else
    return binary_search(mid,hi);
}*/

int main (int argc, char *argv[]){
  int n = argv[1];
  printf("Pensa un numero de 0 a %d\n");
  printf("Listo? Presiona enter\n");
  gethcar();
  int guess = binary_search(0,n);
  printf("Tu numero es %d\n", guess);
  return 0;
}
