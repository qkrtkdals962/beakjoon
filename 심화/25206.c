#include<stdio.h>
#include<string.h>
int main(){
	char name[51], grade[3];
	double score;
	double scoretotal = 0.0, alltotal = 0.0;
	for(int i = 0; i<20 ;i++){
		scanf("%s %lf %s", name, &score, grade);
		if(strcmp(grade,"P")==0)
			continue;
			
		if(strcmp(grade,"A+")==0)
			scoretotal += 4.5 * score;
		else if(strcmp(grade,"A0")==0)
			scoretotal += 4.0 * score;
		else if(strcmp(grade,"B+")==0)
			scoretotal += 3.5 * score;
		else if(strcmp(grade,"B0")==0)
			scoretotal += 3.0 * score;
		else if(strcmp(grade,"C+")==0)
			scoretotal += 2.5 * score;
		else if(strcmp(grade,"C0")==0)
			scoretotal += 2.0 * score;
		else if(strcmp(grade,"D+")==0)
			scoretotal += 1.5 * score;
		else if(strcmp(grade,"D0")==0)
			scoretotal += 1.0 * score;
		else if(strcmp(grade,"F")==0)
			scoretotal += 0.0 * score;
		alltotal += score;
	}
	printf("%.6lf\n",scoretotal/alltotal);
	return 0;
}
