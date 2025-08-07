#include<stdio.h>
int main(){
	int n, count = 0;
	scanf("%d",&n);
	char a[101];
	for(int i = 0; i< n; i++){
		scanf("%s",a);
		int alpha[26] = {0};
		int isGroupWord = 1;
		char prev = 0;
		for(int i = 0; a[i] != '\0'; i++){
			if(a[i] != prev){
				if(alpha[a[i] - 'a'] == 1){
					isGroupWord = 0;
					break;
				}
				alpha[a[i] - 'a'] = 1;
				prev = a[i];
			}
		}
		if(isGroupWord)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
