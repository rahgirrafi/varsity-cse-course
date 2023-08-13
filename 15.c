#include <stdio.h>

int r1,c1;
int main(){

    scanf("%d %d", &r1,&c1);
   
    double M1[r1][c1], M2[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%lf",&M1[i][j]);
        }   
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            M2[i][j]= M1[j][i];
        }   
    }





  for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%0.2lf ", M2[i][j]);
            if(j == c1-1)
                printf("\n");
        }   

    }



}