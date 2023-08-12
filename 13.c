#include <stdio.h>

int r,c;
int main(){

    scanf("%d %d", &r,&c);
   
    double M1[r][c], M2[r][c], M3[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lf",&M1[i][j]);
        }   
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lf",&M2[i][j]);
        }   
    }


    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            M3[i][j] = M1[i][j] + M2[i][j];
        }   
    }

        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%0.2lf ", M3[i][j]);
            if(j == c-1)
                printf("\n");
        }   

    }



}




