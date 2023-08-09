#include <stdio.h>
#include <stdlib.h>
void da2(int a,int b) {
if(a>b) {printf("%d es mayor\n",a);}else
	{if(b==a){printf("son iguales\n");}else 
	{printf("%d es mayor\n",b);}}
}
int main(){
	int num1,num2;
	printf("ingrese un num:");
	scanf("%d",&num1);
	printf("ingrese un num:");
	scanf("%d",&num2);
	da2(num1,num2);
	
	system("pause");
	return 0;
}
