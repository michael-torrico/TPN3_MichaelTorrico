#include <stdio.h>
#include <stdlib.h>
float da2(int a, int b) {
float total=a+b;
 return a*100/total;

}
int main(){
	float ph,pm;
	int h=0,m=0;
	printf("ingrese cant de hombres :");
	scanf("%d",&h);
	printf("ingrese cant de mujeres:");
	scanf("%d",&m);
	ph=da2(h,m);
	pm=da2(m,h);
	printf("porcentaje mujeres:%.2f\n",pm);
	printf("porcentaje hombres:%.2f\n",ph);
	system("pause");
	return 0;
}	