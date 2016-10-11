#include <stdio.h>
 
 
int main()
{
  int W, H;
  scanf("%d%d", &W, &H);
 
  if( 24<W+H && !(W%16) && !(H%9) )
    printf("16:9\n");
  else if( 6<W+H && !(W%4) && !(H%3) )
    printf("4:3\n");
 
  return 0;
}
