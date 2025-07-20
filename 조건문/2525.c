#include<stdio.h>
int main(){
	int a, b, c;
	int h, m;
	scanf("%d %d %d",&a,&b,&c);
	
	if(c>=60){
		h = c / 60;
		m = c % 60;
		if(b+m>=60){
			if(a+h+1>=24)
				printf("%d %d\n",(a+h+1)-24,b+m-60);
			else
				printf("%d %d\n",a+h+1,b+m-60);
		}else
			if(a+h>=24)
				printf("%d %d\n",(a+h)-24,b+m);
			else
				printf("%d %d\n",a+h,b+m);		
	}else{
		if(b+c>=60){
			if(a+1>=24)
				printf("%d %d\n",(a+1)-24,b+c-60);
			else
				printf("%d %d\n",a+1,b+c-60);
		}else
			printf("%d %d\n",a,b+c);
	}
		
	return 0;
}
/*gpt의 도움을 받은 아주 간략한 코드 
#include<stdio.h>
int main(){
	int a, b, c;
	int total;
	scanf("%d %d %d",&a,&b,&c);
	
	total = a*60+b+c;
	printf("%d %d\n",(total/60)%24,total%60);
		
	return 0;
}
*/
