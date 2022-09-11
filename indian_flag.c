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
		textcolor(6);
		cprintf(" *");
	    }
	    else if(i>=5&&i<9)
	    {
		if(i==5&&j==14||i==5&&j==15||i==6&&j==13||i==7&&j==13||i==8&&j==14||i==8&&j==15||i==6&&j==16||i==7&&j==16)
		{
		    textcolor(1);
		    cprintf(" *");
		}
		else if(i==6&&j==14||i==7&&j==14||i==6&&j==15||i==7&&j==15)
		{
		    textcolor(1);
		    cprintf(" *");
		}
		else
		{
		    textcolor(15);
		    cprintf(" *");
		}

	    }
	    else
	    {
		textcolor(2);
		cprintf(" *");
	    }
	    }
	}
	printf("\n");
    }
    for(i=1;i<=12;i++)
    {
	for(j=1;j<=10;j++)
	{
	    if(j==1)
	    {
		textcolor(14);
		cprintf(" |||");
	    }

	    if(i==3&&j==4)
	    {
		textcolor(6);
		cprintf("         $$$$$$$$$$$$      $$$$$$$$$$$$");
	    }
	    else if(i==4&&j==4||i==5&&j==4||i==6&&j==4)
	    {
		textcolor(6);
		cprintf("                   $$      $$");
	    }
	    else if(i==7&&j==4)
	    {
		textcolor(7);
		cprintf("                   $$      $$$$$$$$$$$$");

	    }
	    else if(i==11&&j==4)
	    {
		textcolor(2);
		cprintf("                   $$      $$$$$$$$$$$$");
	    }
	    else if(i==10&&j==4||i==8&&j==4||i==9&&j==4)
	    {
		textcolor(2);
		cprintf("                   $$                $$");

	    }


	}
	printf("\n");

    }
    return 0;
}