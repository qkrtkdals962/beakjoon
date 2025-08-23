#include<stdio.h>
int main(){
	int x, y, w, h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	int a = x;
	int b = y;
	int c = w-x;
	int d = h-y;
	int result = (a < b ? a : b);
	result = (result < c ? result : c);
	result = (result < d ? result : d);
	printf("%d\n",result);
	return 0;
}
