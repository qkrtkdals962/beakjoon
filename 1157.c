#include<stdio.h>
int main(){
	char a[1000001];
	scanf("%s",a);
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i] = a[i] - 32;
		}
	}
	int count[26] = {0};
	for(int i = 0; a[i] != '\0'; i++){
		count[a[i]-'A']++;
	}
	int max = 0, index = 0;
	for(int i = 0; i<26; i++){
		if(count[i]>max){
			max = count[i];
			index = i;
		}
	}
	int sameCount = 0;
	for(int i = 0; i<26; i++){
		if(max == count[i])
			sameCount++;
	}
	if(sameCount >= 2)
		printf("?\n");
	else
		printf("%c\n",index+'A');
	return 0;
}
