#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int n[t];
	for(int i = 0; i<t; i++){
		int a, b;
		scanf("%d %d",&a,&b);
		n[i] = a + b;
	}
	for(int k = 0; k<t; k++){
		printf("Case #%d: %d\n",k+1,n[k]);
	}
	return 0;
}
