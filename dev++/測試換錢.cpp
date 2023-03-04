#include<stdlib.h>
#include<stdio.h>

int main()
{
  int loop = 0, number = 0;
  int i, j, k;
  for (i = 0; i <= 5; i++)
    for (j = 0; j <= 10; j++)
      for (k = 0; k <= 50; k+=5)
      {
        loop++;
        if (i*10 + j*5+ k == 50)
        {
          number++;// break;
        }
      }
  printf("共%d種,執行迴圈%d次\n",number,loop);
  return 0;
}

