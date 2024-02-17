#include <stdio.h>

int r1,c1, r2, c2;
int main(){

    scanf("%d %d %d %d", &r1,&c1, &r2, &c2);
   
    double M1[r1][c1], M2[r2][c2], M3[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%lf",&M1[i][j]);
        }   
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%lf",&M2[i][j]);
        }   
    }

  for (int i = 0; i < r1; i++)
        {
            double sum = 0;
            for (int j = 0; j < r2; j++)
            {
                
                for (int k = 0; k < c1; k++)
                {
                    sum = sum + (M1[i][k] * M2[k][j]);
                }
                M3[i][j] = sum;
            }

        }
  for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%0.2lf ", M3[i][j]);
            if(j == c2-1)
                printf("\n");
        }   

    }



}