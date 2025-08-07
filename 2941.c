#include<stdio.h>
int main(){
	char a[101];
	scanf("%s",a);
	int count = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] == 'c' && (a[i+1] == '=' || a[i+1] == '-'))
			i++;
		if(a[i] == 'd' && a[i+1] == 'z' && a[i+2] == '=')
			i += 2;
		else if(a[i] == 'd' && a[i+1] == '-')
			i++;
		else if(a[i] == 'l' && a[i+1] == 'j')
			i++;
		else if(a[i] == 'n' && a[i+1] == 'j')
			i++;
		else if(a[i] == 's' && a[i+1] == '=')
			i++;
		else if(a[i] == 'z' && a[i+1] == '=')
			i++;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
