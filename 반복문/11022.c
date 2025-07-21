#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int n[t];
	int a[t], b[t];
	for(int i = 0; i<t; i++){
		scanf("%d %d",&a[i],&b[i]);
		n[i] = a[i] + b[i];
	}
	for(int k = 0; k<t; k++){
		printf("Case #%d: %d + %d = %d\n",k+1,a[k],b[k],n[k]);
	}
	return 0;
}
