#include<stdio.h>

int main(){
  int n=5, p=3, q=4;
  double A[n][p], B[p][q], C[n][q];
  int i, j, k;  //loop indices

  printf("\nThis is matrix A\n");
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      A[i][j]=i+j;
      printf("%3.0f",A[i][j]); //print every row
    }
    printf("\n");
  }

  printf("\nThis is matrix B\n");
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
      B[i][j]=i-j;
      printf("%3.0f",B[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      C[i][j]=0.0;
    }
   
  }

  matmult(n,p,q,A,B,C);


  return 0;
}
