#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int result = 0;
 while(n != 0)
 {
  result = result*10 + n%10;
  n = n/10;
 }
 ptintf("Reverse of entered number is %d\n", result);
 return 0;
}
