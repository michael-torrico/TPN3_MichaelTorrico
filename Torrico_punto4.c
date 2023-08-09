#include <stdio.h>
#include <stdlib.h>
void da2(float a,float b) {
float p=a/b;
printf("presion:%.2f\n",p);
}
int main(){
	float f,s,p;
	printf("ingrese la fuerza:");
	scanf("%f",&f);
	printf("ingrese la superficie:");
	scanf("%f",&s);
	da2(f,s);
	system("pause");
	return 0;
}	