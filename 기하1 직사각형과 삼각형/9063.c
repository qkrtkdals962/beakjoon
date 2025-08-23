#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d %d",&a,&b);
	int minx=a, miny=b, maxx=a, maxy=b;
	for(int i = 0; i<n-1;i++){
		scanf("%d %d",&a,&b);
		if(a < minx)
			minx = a;
		if(a > maxx)
			maxx = a;
		if(b < miny)
			miny = b;
		if(b > maxy)
			maxy = b;
	}
	printf("%d",(maxx-minx) * (maxy-miny));
	return 0;
}
