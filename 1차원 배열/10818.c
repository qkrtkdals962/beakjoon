#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i< n; i++)
		scanf("%d",&a[i]);
	int min=a[0], max=a[0];
	for(int j = 0; j< n; j++){
		if(min<=a[j])
			min = min;
		else
			min = a[j];
		if(max>=a[j])
			max = max;
		else
			max = a[j];
	}
	printf("%d %d\n",min,max);
	return 0;
}
