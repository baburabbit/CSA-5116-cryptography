#include<stdio.h>
int main(){
	char alpha[100]="abcdefghijklmnopqrstuvwxyz",key[100]="zyxwvutsrqponmlkjihgfedcba",plain[100],cipher[100];
	int m=0,index[100],i,j;
	printf("Enter plain text :");
	scanf("%s",&plain);
	for(i=0;i<strlen(plain);i++){
		for(j=0;j<strlen(alpha);j++){
			if(plain[i]==alpha[j]){
				index[m]=j;
				m++;
			}
		}
	}
	printf("Cipher text: ");
	for(i=0;i<strlen(plain);i++){
		cipher[i]=key[index[i]];
		printf("%c",cipher[i]);
	}
	printf("\n Plain text  %s ",plain);	
	return 0;	
}

