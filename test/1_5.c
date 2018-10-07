#include <stdio.h>
int square(int k, int n)
{
      if(1<=n<=20)
         if(n==0)
            return 1;
         else
            return k*square(2,--n);
      else
         break;
}

int main(void)
{
    int n,k;
    scanf("%d", &n);
    printf("%d", square(2,--n));

    return 0;
}
