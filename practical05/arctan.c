#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){
  double delta, x;
  printf("Enter the position for the Maclaurin series:\n");
  scanf("%lf", &delta);
  int length = 1000;
  double tan1[1000]; //storing the result of arctanh1
  double tan2[1000]; //storing the result of arctanh2

  int j=0; //j: array index
  x = -0.9;
  while(x<=0.9 && j<length){
    tan1[j]=arctanh1(x,delta);
    tan2[j]=arctanh2(x);
    printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j]- tan2[j]));
    j++;
    x += 0.1;
  }
  return 0;
}

double arctanh1(const double x, const double delta){
  double arctan=0;
  double elem, val;
  int n=0;

  do{
    val=2*n+1;
    elem=pow(x, val)/val;
    arctan += elem;
    n++;
  } while(fabs(elem)>=delta);
  return arctan;
}

double arctanh2(const double x){
  return (log(1+x)-log(1-x))/2;
}
