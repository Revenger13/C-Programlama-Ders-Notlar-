#include<stdio.h>
#include<conio.h>

int kare(int);

int main()
{
	int x;
	for(x=1;x<=10;x++)
	{
		printf("%d\n",kare(x));
	}
	
	getche();

}
int kare(int y)
{
	return y*y;
}
