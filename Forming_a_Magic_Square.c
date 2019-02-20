#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {

  int squares[8][3][3] = {

      {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},

      {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},

      {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},

      {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},

      {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},

      {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},

      {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},

      {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}

  };

  int input[3][3];
  for(int a=0;a<3;a++)
  {
      for(int j=0;j<3;j++)
      {
        scanf("%d",&input[a][j]);
      }
  }
  int result = 5000;

  for (int i = 0; i < 8; i++)

  {

    int curr = 0;

    for (int j = 0; j < 3; j++)

    {

      for (int k = 0; k < 3; k++)

      {

        curr += abs(squares[i][j][k] - input[j][k]);
      }
    }
    if(result<curr)
    {
        result=result;
    }
    else{
        result=curr;
    }
  }

  printf("%d",result);

  return 0;
}

/*
Copy and Paste the given link for the question https://www.hackerrank.com/challenges/magic-square-forming/problem 
*/
