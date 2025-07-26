#include<stdio.h>
#include<string.h>
int main(){
	char a[16];
	int A;
	int B = 0;
	scanf("%s",a);
	A = strlen(a);
	for(int i = 0; i<A; i++){
		if(a[i] >= 'A' && a[i] <= 'C')
			B += 3;
		else if(a[i] >= 'D' && a[i] <= 'F')
			B += 4;
		else if(a[i] >= 'G' && a[i] <= 'I')
			B += 5;
		else if(a[i] >= 'J' && a[i] <= 'L')
			B += 6;
		else if(a[i] >= 'M' && a[i] <= 'O')
			B += 7;
		else if(a[i] >= 'P' && a[i] <= 'S')
			B += 8;
		else if(a[i] >= 'T' && a[i] <= 'V')
			B += 9;
		else if(a[i] >= 'W' && a[i] <= 'Z')
			B += 10;
	}
	printf("%d\n",B);
	return 0;
}
