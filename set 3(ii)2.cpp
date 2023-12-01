#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char input[1000],cipher[1000];
	int i,length,length1,k=3;
	printf("enter the plain text:\n");  
	scanf("%s",&input);
	printf("\nencryption is :");
	for(i=0;i<strlen(input);i++)
	{
		if(islower(input[i]))
		{
			cipher[i]=((input[i]-'a'+'k')%26)+'a';
		}
		else
		{
			cipher[i]=((input[i]-'A'+'k')%26)+'A';
		}
		printf("%c",cipher[i]);
	}
	printf("\ndecryption is: %s",input);
}
