/*
实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

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
.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC

*/

/*
.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.  
AABCD左旋一个字符得到ABCDA 
AABCD左旋两个字符得到BCDAA 
AABCD右旋一个字符得到DAABC

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