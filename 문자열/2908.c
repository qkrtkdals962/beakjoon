#include<stdio.h>
#include<math.h>
int main(){
	char a[4], b[4];
	scanf("%s %s", a, b);
	int c = 0, d = 0;
	for(int i =2; i>=0; i--){
		c += (a[i] - '0') * pow(10,i);
		d += (b[i] - '0') * pow(10,i);
	}
	if(c>d){
		printf("%d\n",c);
	}
	else{
		printf("%d\n",d);
	}
	return 0;
}
