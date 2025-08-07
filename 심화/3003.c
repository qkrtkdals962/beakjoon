#include<stdio.h>
int main(){
	int a[6];
	for(int i = 0; i < 6; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i< 6; i++){
		if( i == 0)
			a[i] = 1 - a[i];
			
		else if( i == 1)
			a[i] = 1 - a[i];
			
		else if( i ==2)
			a[i] = 2 - a[i];
			
		else if(i ==3)
			a[i] = 2 - a[i];
			
		else if(i==4)
			a[i] = 2 - a[i];
			
		else if(i==5)
			a[i] = 8 - a[i];
	}
	for(int i = 0; i< 6; i++)
		printf("%d ",a[i]);
	return 0;
	
}
