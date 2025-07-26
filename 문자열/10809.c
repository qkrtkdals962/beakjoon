#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	char z[26];
	for(int i = 0; i< 26; i++){
		z[i] = -1;
	} 
	scanf("%s",a);
	for(int i = 0; i<strlen(a);i++){
		int b = a[i] - 'a';
		if(z[b] == -1)
			z[b] = i;
	}
	for(int i = 0; i< 26; i++)
		printf("%d ", z[i]);
	return 0;
}
