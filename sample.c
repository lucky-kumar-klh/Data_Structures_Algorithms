#include <stdio.h>
int main()
{
  int a,b,k;
  scanf("%d %d %d",&a,&b,&k);
  int max=(a>b)? a:b,min=(a+b)-max,sum=0,prev;
  printf("The multiples of %d and %d that are less than %d are: ",a,b,k);
  for(int i=1;(a*i<k)||(b*i<k);i++)
  {
    if(a*i<k)
    {
      printf("%d ",a*i);
      sum+=a*i;
    } 
    if(b*i<k && (b*i)%a!=0)
    {
      printf("%d ",b*i);
      sum+=b*i;
    }
  }
  printf("\nSum of factors: %d",sum);
  return 0;
}