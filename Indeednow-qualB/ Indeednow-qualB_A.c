#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    
    int sum = (int)fabs(x1 - x2);
    sum += (int)fabs(y1 - y2);
    
    printf("%d\n", sum + 1);
    
    return 0;
}
