/*
ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void back(char str1[],int num){
int size = strlen(str1);
int i = 0;
int j = 0;
for (i = 0; i < num; i++){
char temp = str1[0];
for (j = 0; j < size-1; j++){
str1[j] = str1[j + 1];
}
str1[size - 1] = temp;

}
}
int main(){
char str1[] = "ABCDEF";

back(str1, 3);
printf("%s", str1);
system("pause");
return 0;
}
*/



/*


void reverse( char *pleft, char *pright){
while (pleft < pright){
char temp = *pleft;
*pleft = *pright;
*pright = temp;
pleft++;
pright--;
}
}
void back(char *arr,int size,int num){
char *start = arr;
char  *end = arr + size -1;
reverse(start, end);
reverse(start, end - num);
reverse( end - num+1,end);
}
int main(){
char arr[] = "ABCDEF";
int size = strlen(arr);
back(arr, size, 3);
printf("%s", arr);
system("pause");
}
*/
/*
.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.

AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC

*/

/*
.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.  
AABCD����һ���ַ��õ�ABCDA 
AABCD���������ַ��õ�BCDAA 
AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int back(char str1[], char str2[]){
	int size = strlen(str1);
	int i = 0;
	int j = 0;
	for (i = 0; i < size; i++){
		char temp = str1[0];
		for (j = 0; j < size; j++){
			str1[j] = str1[j + 1];
		}
		str1[size - 1] = temp;

		if (0 == strcmp(str1, str2)){
			return 1;
		}
	}
		return 0;
}
int main(){
	char str1[] = "ABCDEF";
	char  str2[] = "CDEFAB";
	back(str1, str2);
	printf("%d", back(str1, str2));
	system("pause");
	return 0;
}*/