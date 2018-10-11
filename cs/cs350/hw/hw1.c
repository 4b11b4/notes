#include <stdio.h>

int main() {
  int r=0;
  int n=4;
  int i=0;
  int j=0;
  int k=0;

  for (i=1; i<n; i++) {
    //printf("i=%d\n", i);
    for (j=1; j<n; j++) {
      //printf("j=%d\n", j);
      //printf("n=%d\n", n);
      for (k=j; k<(i+j); k++) {
        r++;
        //printf("k=%d, i+j=%d\n", k, i+j);
      }
    }
  }
  printf("final r=%d\n", r);
}
