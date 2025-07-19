#include<stdio.h>
int main(){
	char a[51];
	scanf("%s", a);
	printf("%s??!\n",a);
	return 0;
}
/*scanf("%s", a);는 공백 없는 문자열을 입력받는 데 적합

char a[51];처럼 배열 길이는 항상 +1 해서 널문자 \0 포함!

백준에서는 main() 함수에 int형 반환과 return 0; 필수!*/


