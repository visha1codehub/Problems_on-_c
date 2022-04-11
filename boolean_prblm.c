#include <stdio.h>

int main()
{
      int i=-2,j=-3,k=0,l=2,m;

      m = ++i && ++j && k++ || ++l;

      printf("%d%d%d%d%d\n",i,j,k,l,m);

      return 0;
}