#include<stdio.h>
void input(int *n, int *r)
{
  printf("Enter the values of 'n' and 'r'\n");
  scanf("%d%d",n,r);
}
int ncr(int n , int r)
{
  int result=1;
  for(int i=1;i<=r;i++)
    {
      result=result*(n-i+1)/i;
    }
  return result;
}
void output(int n , int r, int result)
{
  printf("The ncr value of %d and %d is %d\n",n,r,result);
}
int main()
{
  int n,r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}

