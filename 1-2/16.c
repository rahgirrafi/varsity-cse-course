#include <stdio.h>
#include <math.h>

void swap(double *a, double *b);
int r1,c1;
int main(){
    int sign_factor = 0;
    scanf("%d %d", &r1,&c1);
   
    double M1[r1][c1],M2[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%lf",&M1[i][j]);
            M2[i][j] = M1[i][j];

        }   
    }

//transforming to echelon form
/*
Here i grabs the top row which is to be multiplied and subtracted from the lower rows. 
j and k respectively the row and coloumn transversing variable.
transvers
*/
    for (int i = 0; i < r1-1; i++)
    {
        
        for (int j = i+1; j < r1; j++) 
        {
            for (int k = i; k < c1 ;k++)
            {
                if (M1[i][i] == 0)
                {
                    for (int m = j; m < r1; m++)
                    {
                        if(M1[m][k] != 0)
                        {
                            //swap rows
                            for (int n = i; n < r1; n++)
                            {
                                swap( &M1[i][n], &M1[m][n] );
                            }
                            for (int i = 0; i < r1; i++)
                            {
                                for (int j = 0; j < c1; j++)
                                {                                       
                                    M2[i][j] = M1[i][j];
                                }   
                            }                        
                        }
                    }
                    
                }
                
                M1[j][k] = M1[j][k] - ( (M2[j][i]/M2[i][i]) * M2[i][k]);
            }
            
        }
//update the temp matrix with the new tranformed row and columns        
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                
                M2[i][j] = M1[i][j];

            }   
        }

        
    }


    


/*

*/

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%0.2lf\t", M1[i][j]);
            if(j == c1-1)
                printf("\n");
            
        }   

    }
}

void swap(double *a, double *b)
{
    double temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}




