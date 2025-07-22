#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i< n ; i++){
		scanf("%d",&a[i]);
	}
	int m = 0;
	for(int i = 0; i<n ; i++){
		if(m <= a[i])
			m = a[i];
		else
			m = m;
	}
	double total = 0;
	for(int i = 0; i< n ; i++){
		total = total + a[i]/(double)m*100;
	}
	printf("%g\n",total/n);
	return 0;
}
