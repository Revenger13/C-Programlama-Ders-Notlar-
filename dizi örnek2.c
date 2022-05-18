#include<stdio.h>
main(){
int a[3][3]={{1,2,3},
            {4,5,6},
            {7,8,9}};
for(int i=0;i<3;i++)
{
	for(int k=0;k<3;k++)
	{
		int swap=a[i][k];
		a[i][k]=a[k][i];
		a[k][i]=swap;
	}
	for(int i=0;i<3;i++){
	
	}
	for(int k=0;k<3;k++){
	printf("%d",a[i][k]);
	}
		printf("\n");
}


}
