/*
4.ģ��ʵ��strcat
*/
/*
#include <stdio.h>
char strcopy(char *str1, char *str2)
{
int size1 = strlen(str1);
int size2 = strlen(str2);
for (int i = 0; i <size2; i++)
{
str1[size1+i] = str2[i];
}
}
int main(){

char str1[15] = "asdsfsfsf";
char str2[] = "ABCD";
strcopy(str1, str2);
printf("%s", str1);
system("pause");
}
*/





/*
ģ��ʵ��strcpy

#include <stdio.h>
char strcopy(char *str1,char *str2)
{
int size = strlen(str1);
for (int i = 0; i <size; i++)
{
str2[i] = str1[i];
}
}
int main(){

char str1[] = "asdsfsfsf";
char str2[]="ABCD";
strcopy(str1, str2);
printf("%s", str2);
system("pause");
}

*/
/*

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int  come(int b){
int c = 0;
c =b;
while (b>=1){//����������һƿ��ʱ����Ҫ����
c = c+(b / 2);
b = b/ 2;
}
return c;
}
int main(){

come(20);
printf("%d", come(20));
system("pause");

}

*/


/*

/*
һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ����������֣����ʵ��
*/

/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void find(int *arr,int size){
int i = 0;
int j = 0;
to:
for (j = j+1; j < size ; ++j){
for (i = 0; i < size; i++){
if (i == j){
continue;
}

if ((arr[j] ^ arr[i]) == 0){
goto to;
}
}
if (i = size - 1){
if (arr[size - 1] ^ arr[j] != 0){

printf("%d\n", arr[j]);
}
}
}

}

int main(){
int arr[] = { 1,2,4,2,3,3,1,4,5,5,6,7,8,8, };
int size = (sizeof(arr) / sizeof(arr[0]));
find(arr, size);
system("pause");
return 0;
}
*/

/*
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�
*/




