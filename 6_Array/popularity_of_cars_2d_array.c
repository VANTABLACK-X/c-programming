#include<stdio.h>

int main()
{
  int i,j,cars;
  int frequency[5][5]={{0},{0},{0},{0},{0}};
  char city;
  /*m-madras   1-ambassador
  d-delhi    2-fiat
  c-calcutta 3-dolphin
  b-bombay   4-maruti*/
  for ( i = 1; i < 20; i++)
 {
    scanf("%s",&city);
    if(city=='x')
    break;
    scanf("%d",&cars);
    switch (city)
    {
    case 'b':
      frequency[1][cars]++;
      break;
    case 'c':
      frequency[2][cars]++;
      break;
    case 'd':
      frequency[3][cars]++;
      break;
    case 'm':
      frequency[4][cars]++;
      break;
    }
  }
  printf("             POPULARITY TABLE\n");
  printf("______________________________________________\n");
  printf("city  ambassador  fiat  dolphin  maruti\n");
  printf("______________________________________________\n");
  for ( i = 1; i <=4; i++)
  {
    switch (i)
    {
    case 1:
      printf("bombay  ");
      break;
    case 2:
      printf("calcutta");
      break;
    case 3:
      printf("delhi   ");
      break;
    case 4:
      printf("madras  ");
      break;
    }
    for ( j = 1; j <=4; j++)
    {
      printf("%7d",frequency[i][j]);
    }
    printf("\n");
  }
  printf("______________________________________________\n");
  return 0;
}