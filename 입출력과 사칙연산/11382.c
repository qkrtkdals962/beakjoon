#include<stdio.h>
int main(){
	double A, B, C;
	scanf("%lf %lf %lf", &A,&B,&C);
	printf("%.f\n",A+B+C);
	return 0;
}
/*문제의 입력에서 1<A,B,C<10*e12인것을 확인후 int형에서 double형태로 변환하여 문제를 풀게 되었음.*/ 
