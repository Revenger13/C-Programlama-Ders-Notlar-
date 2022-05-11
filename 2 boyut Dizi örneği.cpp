#include <stdio.h>

int main()
{
    int a[4][3];
    
    for(int i=0;i<4;i++)
	{
        for(int k=0;k<3;k++)
        {
        	printf("Eleman Giriniz: a[%d][%d]",i,k);
        	scanf("%d",&a[i][k]);
		}
		
    }
    
    for(int i=0;i<4;i++)
	{
        for(int k=0;k<3;k++)
		{
        	printf("%3d",a[i][k]);
            }
            printf("\n");
        }
    }

