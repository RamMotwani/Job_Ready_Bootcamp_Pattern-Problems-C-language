#include<stdio.h>
int main ()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                {
                    printf("%d",k);
                    k++;
                }
                else if(j>=4)
                {
                    k--;
                    printf("%d",k-1);

                }


            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
