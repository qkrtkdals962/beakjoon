#include<stdio.h>
int main(){
	char a[51];
	scanf("%s", a);
	printf("%s??!\n",a);
	return 0;
}
/*scanf("%s", a);�� ���� ���� ���ڿ��� �Է¹޴� �� ����

char a[51];ó�� �迭 ���̴� �׻� +1 �ؼ� �ι��� \0 ����!

���ؿ����� main() �Լ��� int�� ��ȯ�� return 0; �ʼ�!*/


