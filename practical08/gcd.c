#include<stdio.h>

int gcd(int a, int b){
  int temp;
  while (b!=0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}


int gcd_recursive(int a, int b){
  if(b==0){
    return a;
  }
  else{
    gcd(b, a%b);

  }

}

int main(void){
  int a, b;

  printf("Enter a positive integer a:\n");
  scanf("%d",&a);
  if(a<=0){
    printf("This number is not positive");
    return 1;}
  

  printf("Enter a positive integer b:\n");
  scanf("%d",&b);
  if(b<=0){
    printf("This number is not positive");
    return 1;}
  

  int ans_i = gcd(a,b);
  int ans_r = gcd_recursive(a,b);
  printf("Using interation, we got the answer: %d\n",ans_i);
  printf("Using recursive, we got the answer: %d\n", ans_r);
  return 0;

}
