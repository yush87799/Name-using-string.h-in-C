#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	int length;
	
	printf("%d\n\n", a);
	
	printf("Enter name: ");
	scanf("%s", &name);
	
	length=strlen(name);
	
	printf("Your name is %s\n", name);
	printf("\nLenghth of your name is %d", length);
	printf("\nYour name in uppercase is %s", strupr(name));
	printf("\nYour name in lowecase is %s", strlwr(name));
	printf("\nYour name in reverse is %s", strrev(name));
	
	return 0;
}
