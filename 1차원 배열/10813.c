#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int l =0; l<n; l++)
		a[l] = l+1;
	for(int o = 0; o<m; o++){
		int i, j;
		int k=0;
		scanf("%d %d",&i ,&j);
		k = a[i-1];
		a[i-1] = a[j-1];
		a[j-1] = k;
	}
	for(int p = 0; p<n; p++)
		printf("%d ",a[p]);
	return 0;
}
