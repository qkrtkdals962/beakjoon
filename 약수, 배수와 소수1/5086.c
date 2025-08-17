#include<stdio.h>
int main(){
	int a, b;
	while( scanf("%d %d",&a, &b) == 2 ){
		if( a == 0 && b == 0 )
			break;
		else{
			if(b % a == 0){
				printf("factor\n");
			}
			else if(a % b == 0){
				printf("multiple\n");
			}
			else{
				printf("neither\n");
			}
		}
	}
	return 0;
}
