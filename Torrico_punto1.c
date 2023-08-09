#include <stdio.h>
#include <stdlib.h>
void da(int a, int b) {
 printf("%d \n%d\n",a,b);
}
int main(){
	int a=0,b=0;
	printf("ingrese un num: ");
	scanf("%d",&a);
	printf("ingrese un num: ");
	scanf("%d",&b);
	da(a,b);
	system("pause");
	return 0;
}	
