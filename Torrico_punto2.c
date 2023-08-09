#include <stdio.h>
#include <stdlib.h>
void da2(int a, int b) {
	int area=a*b;
	int pe=2*a+2*b;
	printf("el perimetro es:%d\n",pe);
	printf("el area es:%d\n",area);
}
int main(){
	int a=0,b=0;
	printf("ingrese un num: ");
	scanf("%d",&a);
	printf("ingrese un num: ");
	scanf("%d",&b);
	da2(a,b);
	system("pause");
	return 0;
}		