#include <stdio.h>
#include <stdlib.h>
float da2(float a) {
return a/8;
}
int main(){
	float f,s;
	printf("ingrese un num:");
	scanf("%f",&f);
	s=da2(f);
	printf("la octava parte del numero es:%.2f\n",s);
	system("pause");
	return 0;
}
