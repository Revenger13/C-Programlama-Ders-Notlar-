#include <stdio.h>

int main()
{
    char a[5][5]={' '};
    
    for(int i=0;i<5;i++)
	{
        for(int k=0;k<5;k++)
        {
        	if(i+k==2||i+k==6)
        	a[i][k]='*';
        	else if (i+k==4&&i%2==1)
        	a[i][k]='*';
        	printf("%c",a[i][k]);
        	
		}
		printf("\n");
	}
}
