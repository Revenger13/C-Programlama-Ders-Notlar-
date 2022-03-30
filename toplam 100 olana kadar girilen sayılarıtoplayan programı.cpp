#include <stdio.h>
main()
{
	int say,top;
	top=0;
	
	do {
		scanf("%d",&say);
		top+=say;
	}
	while(top<100);
	printf("%d",top);
}
