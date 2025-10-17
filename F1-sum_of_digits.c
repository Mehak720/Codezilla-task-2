#include <stdio.h>
int main()
{
  int n,sum=0;
  printf("Enter integer Number:\n");
  if(scanf("%d",&n) !=1) return 0;
  if(n<0) n=-n;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  printf("Sum of digits = %d\n",sum);
  return 0;
}
