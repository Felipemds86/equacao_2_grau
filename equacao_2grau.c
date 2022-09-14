#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d,x1,x2; //declaração de variáveis
printf("A:");//começo da entrada de dados
scanf("%d",&a);
printf("B:");
scanf("%d",&b);
printf("C:");
scanf("%d",&c);//final da entrada de dados
d=pow(b,2)-(4*a*c);
printf("Delta=%d\n",d);
if(d<0)
printf("Nao pertence aos numeros reais");
else
{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("X1=%d\n",x1);
	printf("X2=%d\n",x2);
}
getch();
}
