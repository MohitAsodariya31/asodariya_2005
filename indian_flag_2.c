#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=12;i++)
    {
        for(j=1;j<=28;j++)
        {
            {
            if(i>0&&i<5)
            {
                printf(" o");
            }
            else if(i>=5&&i<9)
            {
                if(i==5&&j==14||i==5&&j==15||i==6&&j==13||i==7&&j==13||i==8&&j==14||i==8&&j==15||i==6&&j==16||i==7&&j==16)
                {
                    printf(" $");
                }
                else if(i==6&&j==14||i==7&&j==14||i==6&&j==15||i==7&&j==15)
                {
                    printf(" $");
                }
                else
                {
                    printf(" ~");
                }

            }
            else
            {
                printf(" o");
            }
            }
        }
        printf("\n");
    }
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==1)
            {
                printf(" |||");             
            }

            if(i==2&&j==4)
            {
                printf("      $$$$$$$$$$$$$$$      $$$$$$$$$$$$");               
            }
            else if(i==3&&j==4||i==4&&j==4||i==5&&j==4||i==6&&j==4)
            {
                printf("                   $$      $$");
            } 
            else if(i==7&&j==4||i==12&&j==4)
            {
                printf("                   $$      $$$$$$$$$$$$");

            }
            else if(i==8&&j==4||i==9&&j==4||i==10&&j==4||i==11&&j==4)
            {
                printf("                   $$                $$");

            }


        }
        printf("\n");

    }
    return 0;
}