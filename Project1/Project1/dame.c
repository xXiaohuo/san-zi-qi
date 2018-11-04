/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>*/
/*int main(){
	int i = 0;
	for (i = 1; i <= 10; i++){

		printf("%d\n",i);
	}
	system("pause");
}*/
/*int main(){
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i / 10==9){
			count++;
		}
		if (i % 10 == 9){
			count++;
		}
	}
	printf("%d", count);
	*/
/*int main(){
	int i=1;
	float sum=0;
	for (i = 1; i <=100; i++){
		if (i % 2 == 0){
			sum = sum - 1.0 / i;
		}
		else{
			sum = sum + 1.0 / i;
		}
	}
	printf("%f\n", sum);
	system("pause");
}*/
/*int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 5, 4, 3, 2, 1 };
	int i = 0;
	int tmp;
	for (i=0; i < 5; i++){
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i=0; i < 5; i++){
		printf("%d", a[i]);
	}
	printf("\n");
	printf(".............\n");
	for (i=0; i < 5; i++){
		printf("%d", b[i]);
	}
	printf("\n");
	system("pause");
}
*/

/*
#include <stdio.h>
#include <#define _CRT_SECURE_NO_WARNINGSstdlib.h>
#include <assert.h>
int findDate(int x, int y)
{
	while (1)
	{
		if (x > y){
			x -= y;
		}
		else if (y>x){
			y -= x;
		}
		else{
			return x;
		}
	}
}
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x, y);
	int ret = findDate(x, y);
	printf("  date=%d\n", ret);
	system("pause");
}
*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>
void  Exchange(int *x, int *y)
{
	
	*x+= *y;
	*y =*x-*y;
	*x = *x-*y;
}
int main(){
	int a;
	int b;
	scanf("%d %d", &a, &b);
	Exchange(&a, &b);
	printf("%d %d ", a, b);
	system("pause");
	return 0;
}*/