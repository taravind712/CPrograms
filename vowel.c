#include <stdio.h>

void main()
{
	char ch;
	int c=0;
	scanf("%c",&ch);
	if(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' ||ch=='O' || ch=='u' || ch=='U')
	printf("Vowel");
	else if((ch>'a' && ch<='z') ||  (ch>'A' && ch<='Z'))
	    printf("Consonant");
	else
		printf("invalid");
}
