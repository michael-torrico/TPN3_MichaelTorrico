#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int da2(int a,int b) {
 return b=a+b;
}
int main(){
	char r[50];
	char splus[100];
	int i,ra=0,e=0;
	strcpy(r,"");strcpy(splus,"");
	for(i=1;i<=5;i++){
	printf("ingrese la resistencia %d: ",i);
	scanf("%s",&r);
	strcat(splus,r);
	strcat(splus," ");
	ra=atoi(r);
	e=da2(ra,e);

} 
	printf("total de resistencia:%d \n",e);
	printf("las resistencias son:%s\n",splus);
	system("pause");
	return 0;
}
