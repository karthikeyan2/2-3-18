
#include<stdio.h>
#include<string.h>
#include <conio.h>
int main(void)
{
	character a[10];
	int n,i;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i=i+2)
	{
		printf("%c",a[i]);
	}
	printf("\t");
	for(i=1;i<n;i=i+2)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}
