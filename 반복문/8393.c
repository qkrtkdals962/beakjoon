#include<stdio.h>
int main(){
	int n;
	int total = 0;
	scanf("%d",&n);
	for(int i = 1; i<=n; i++){
		total = total + i;
	}
	printf("%d\n",total);
	return 0;
}
