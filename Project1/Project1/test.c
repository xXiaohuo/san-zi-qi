
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void back(char str1[], int num){
	int size = strlen(str1);
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++){
		char temp = str1[0];
		for (j = 0; j < size - 1; j++){
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
//#include<stdio.h>
//#include <string.h>//���Դ�С�� 

//�Ƚ�����������򣬽��Ϊret
//��ret�е�һ������λΪһ
//�������õ����


/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void find(int *arr, int size){
	int i = 0;
	int j = 0;
to:
	for (j = j + 1; j < size; ++j){
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
	int arr[] = { 1, 2, 4, 2, 3, 3, 1, 4, 5, 5, 6, 7, 8, 8, };
	int size = (sizeof(arr) / sizeof(arr[0]));
	find(arr, size);
	system("pause");
	return 0;
}
*/

/*
int main()
{
	char str1[20];
	char str2[20];
	strcpy(str1, "to be");
	strcpy(str2, " or not to be");
	strncat(str1, str2, 7);
	puts(str1);
	system("pause");
	return 0;
}
*/
/*

int main(){
	char str[][5] = { "dga", "fgf", "dge" };
	int n;
	puts("ssssssssssssssssssss...........");
	for (n = 0; n < 3; n++){
		if (strncmp(str[n], "dgxx", 2) == 0){
			printf("found %s \n", str[n]);

		}
	}
	system("pause");
	return 0;
}
*/

/*
int main(){

	char str[] = "sajf jasf  000     jasfjsanfj";
	char *pch;
	pch = strstr(str, "000");
	puts(pch);
	strncpy(pch, "sample",6); 
		puts(pch);
	puts(str);
	system("pause");
	return 0;


}*/
/*
int main(){
	char str[] = "-this, a sample string.";
	char *pch;
	printf("splitting string \"%s\"into tokens;\n", str);
	pch = strtok(str, " ,");
	while (pch != NULL){
		printf("%s\n", pch);
		pch = strtok(NULL, " ,");

	}
	system("pause");
	return 0;

}

|*/
/*
int main(){
	FILE*pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL){
		printf("error opening file unexist.ent:%s \n", strerror(errno));
		system("pause");
		return 0;

	}
}|*/



/*
int main(){
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	while (str[i]){
		c = str[i];
		if (isupper(c)){
			c = tolower(c);
	}
			putchar(c);
			i++;
		
	}
	system("pause");
	return 0;
}*/

/*
int my_strlen3(const char*str)
{

	char *p = str;
	while (*p != '\0'){

		p++;
		str++;
	}
	return p - str;
}
int my_strlen2(const char*str){
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1+ my_strlen2(str+1 );
	}
}

int my_strlen(const char *str){
	int count = 0;
	while (*str){
		count++;
		str++;

	}
	return count;

}

int main(){
	char *str = "fshafsha";
	int p1=my_strlen(str);
	int p2 = my_strlen2(str);
	int p3 = my_strlen2(str);
	printf("%d %d %d", p1, p2, p3);
	system("pause");
}*/
/*
int main(){
	char buffer1[] = "dakdsakd";
	char buffer2[] = "dasdksfjk";
	int n;
	n = memcmp(buffer1, buffer2, sizeof(buffer1));
	if (n > 0){
		printf("1da");
	}
	else if (n < 0){
		printf("2da");
	}
	else{
		printf("yiyangda");
	}
	system("pause");
	return 0;
}
*/
/*
char *my_memmove(char *dst, char *src, size_t count){
	char *ret = dst;

	if (dst < src || dst >= src + count){
		while (count--){
			*dst = *src;
			dst++;
			src++;
		}
	}
	else if (dst<src + count&&dst>src)
	{
		dst = dst + count - 1;
		src = src + count - 1;
		while (count--){
			*dst = *src;
			src--;
			dst--;
		}
	}
	return ret;
}
int main(){
	char str[] = "menmove can be very useful ......";
	char *ret = my_memmove(str + 5, str, 11);
	printf("%s", ret);
	system("pause");
	return 0;

}
*/


/*
#include <stdio.h>
#include <stdlib.h>
char *my_memcpy(char  *dst, const char  *src, size_t count)
{
	char *ret = dst;
	while (count--){
		*dst =*src;
		dst = dst + 1;
		src = src + 1;
	}
	return ret;
}
int main(){
	char *src = "adjsjsfkaka";
	char dst[23] = "";
	my_memcpy(dst, src, 3);
	printf("%s", my_memcpy(dst, src, 3));
	system("pause");
}*/
/*
#include <stdio.h>
#include<string.h>
struct {
	char name[40];
	int age;

}person ,person_copy;
int main(){
	char myname[] = "ds jjdjdjs jsj";
	memcpy(person.name, myname, strlen(myname)+1);
	person.age = 46;

	printf("person_copy:%s,%d\n", person.name, person_copy.age);
	system("pause");
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
char *my_memcpy(char *dst, char *src,int num){
	int i = 0;
	while (num--)  {
		dst[i] = *src;
		src++;
		i++;
	}
	return dst;	
}
int main(){
	char src[] = "asddsaABCDrtr";
	char dst[23] = "";
	char *ret=my_memcpy(dst, src,3);
	printf("%s", ret);
	system("pause");
}
*/

/*


char *my_strstr(const char*str1, const char*str2){

	assert(str1 != NULL);
	assert(str2 != NULL);
	char *cp = (char*)str1;
	char *substr = (char *)str2;
	char *s1 = NULL;
	if (*str2 == "\0"){

		return 0;
	}
	while (*cp){
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr)){
			s1++;
			substr++;

		}
		if (*substr == '\0')
		{
			return cp;
		}

		cp++;

	}
}
int main(){
	char *str1 = "asddsaABCDrtr";
	char *str2 = "ABCD";
	char *ret = my_strstr(str1, str2);
	printf("%s", ret);
	system("pause");
}
*/


/*#include <stdio.h>
#include <stdlib.h>
char * strstr(char *str1, char *str2){
	int size1 = strlen(str1);
	int size2 = strlen(str2);
	int count = 0;
	int i = 0;
	for (i = 0; i < size1; i++){
		for (int j = 0; j < size2; j++){
			if (str1[i + j] == str2[j]){
				count++;
				continue;
			}
			else{
				if (count == size2){
					for (j = i - 1; j < size1; j++){
						printf("%c", str1[j]);
					}
				}
				count = 0;
				break;
			}
		}
	}
}

int main(void)
{
	char str1[] = "Borland International";
	char str2[] = "nation";
	strstr(str1, str2);
	system("pause");
	return 0;
}
*/
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
//���Ͼ��� 
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
���飺
1 2 3
2 3 4
3 4 5

1 3 4
2 4 5
4 5 6

#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int find_date(int *arr[][3], int cols , int num){
	
	int row = 0;
	int col = cols - 1;
	while (row < cols && 0 <= col){
		if (arr[row][col] == num){
			printf("�ҵ���\n");
			break;
		}
		else if (arr[row][col] < num){
			++row;
		}
		else {

			--col;
		}
		if (row>2 || col < 0){
			printf("�Ҳ���\n");
		}
	}
	
}
int main(){
	int  arr[3][3] = { { 1,2,3 },{ 2,4,5 }, { 6,7,8 } };
	int a = 0;
	scanf("%d", &a);
	find_date(arr,3,a);
	system("pause");
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void back(int *arr,int size){
	int left = 0;
	int right = size;
	while (left < right){
		while (left <right&&(arr[left]&0x01)!=0){
			left++;
		}
		while (left <right&&(arr[right] & 0x01 )!= 1){
			right--;
		}
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
}

 int main(){
	int arr[] = { 1, 2, 3, 4, 5, 5, 6, 7, 8, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	back(arr, size);
	for (int i = 0; i < size; i++){


		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}
*/


/*#include<stdio.h>
void  reserve_size(char *pleft,char *pright){//ת�ú��������ַ���������ת�ã��Լ�ÿ�����ʵ�ת��
	while (pleft<pright){
		char tep = *pleft;
		*pleft = *pright;
		*pright = tep;
		++pleft;
		--pright;
	}
}
int  strlen(char*arr){
	int count = 0;
	while (*arr++){
		count++;
	}
	return count;
}
void  reserve(char *arr){
	int len = strlen(arr);
	//�Ƚ��ַ�������
	reserve_size(arr, arr+len-1);//����ת�� ���Ϊi am a student 
	char *pstart = arr;//���嵥�ʿ�ͷ
	while (*arr){
		pstart = arr;//��pstart���¶���
		char *pend = arr;//�տ�ʼ��ʱ��ͷ��ĩβ�غ�
		//�ҵ���ĩβ
		while (' ' != *pend && *pend != '\0'){
			++pend;//�ҵ��ʵ�ĩβ
		}
		reserve_size(pstart, pend - 1);//  ��ÿ�����ʽ���ת��  �ҵ��˵���ĩβ��֮�󵥴ʽ���ת�ã���Ϊend�����ڿո��λ�ã����Դ���pend-1
		arr = pend;//�ѿ�ʼ��λ�����ڷ���pend������Ӱ��pstart

		if (*arr == ' '){
			++arr;//��Ϊarr���ڿո񴦣��ո񲻲��뽻������������������һ�£����Ǳ����ǿո������\0;�ͻ��޷�ֹͣ������Ҫ��if���жϣ�������ֱ�Ӽ�1
			continue;
		}
	}	
}
int main(){
	
	char arr[] = "student a am i";
	reserve( arr);
	printf("%s", arr);
	system("pause");
}*/


/*
��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
int main(){
	int a = 0;
	int b = 0;
	int  c = 0;
	printf("��������������");
		scanf("%d %d", &a, &b);
		c = (a + b) >> 1;
	    //c = (( a &  b) + (a^b) >> 1);
        //c=a+(a-b)>>1;
		printf("%d", c);
		system("pause");
}
*/


/*
#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
unsigned int reverse_bit(unsigned int x){
	unsigned int a = 0;
	 int b = 0;
	for (int i = 0; i < 32; i++){

		a = x & 1;
		x = x >> 1;
		b = b+(a << (31 - i));
	}
	return b;
}

int main(){
	int a = 0;
	scanf("%d", &a);
	printf("%u", reverse_bit(a));
	system("pause");
}
*/
/*unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
unsigned int reverse_bit(unsigned int value){
	unsigned int result = 0;
	int num = 0;	
	int bit = 0;	
	while (num <32)	{
		bit = value & 1;//ȡ�����λ	
		value >>= 1;//����һλ��	
		result += bit<<(31-num);  //32λ�� 0 �� 31��
		num++;
	}	
	return result;
}
int main(){

	printf("%u", reverse_bit(25));
	system("pause");
}
*/


/*.
����Ļ�ϴ�ӡ������ǡ�
1
1 1
1 2 1
1 3 3 1
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++){
		arr[i][0] = 1;

		arr[i][i] = 1;
	}

	for (i = 2; i < 10; i++){
		for (j = 1; j < 10; j++){
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i <10; i++){
		for (k = 0; k < 10 - i; k++){

			printf(" ");
		}
		for (j= 0; j<= i; j++){
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	system("pause");
}
*/

/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
	char kiler;
	for (kiler = 'A'; kiler <= 'D'; kiler++){
		if (((kiler != 'A') + (kiler == 'C') + (kiler != 'D') + (kiler == 'D')) == 3){

			printf("kiler��%c ", kiler);
		}
	}
	
	system("pause");
	return 0;

}
*/


/*����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int reverse_bit(unsigned int a){
	int i = 0;
	for (i = 0; i<= 31; i++){
		printf("%d", (a>> i) & 1);

	}
	return 0;
}
int main(){
	unsigned int a = 0;
	scanf("%d", &a);
    reverse_bit(a);
	system("pause");
	return 0;
}*/
/*

int main(){
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;

	scanf("%d %d", &a, &b);
	for (i = 0; i < 32; i++){
		if (((a >> i) & 1) !=( (b >> i) & 1)){
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
*/


/*
int main(){
	int a = 0;
	scanf("%d", &a);
	while (a){
		if (a < 0){
			a = -a;
		}
			printf("%d \n", a % 10);
			a = a / 10;
	}
	system("pause");
	return 0;
}
*/
/*


#include <stdio.h>  
#pragma warning (disable:4996)
int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	printf("��������Ϊ��");
	for (i = 31; i >= 0; i -= 2)  //Ҳ�ǿ���32�Σ�ÿ����������32λ���㣩��ֻ�Ǵ�31λ��ʼ�ƶ�   
	{     

		printf("%d ",(num>>i)&1); //��һ�������ƶ�31λ��1��õ���һλ�����ÿ�α仯2λ�����ɵõ�����λ���    
}  

	printf("\n");    
printf("ż������Ϊ��");  
for (i = 30; i >= 0; i -= 2)  //�����ƶ�30λ������1���ý����ԭ�����ֵĵڶ�λ������28λ...   
{     
	printf("%d ",(num>>i)&1);   
}     
printf("\n");   
return 0;  
}  
*/

/*

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int get_date (unsigned int x)
{
	int i = 0;
	printf("�����������У�");
	for (i = 30; 0<=i; i-=2){
		
			printf("%d", (x >> i) & 1);
	}
	return 0;
}
int get_date2(unsigned int x)
{
	int i = 0;
	printf("ż�����������У�");
	for (i = 31; 1<=i; i -= 2){

		printf("%d", (x >> i) & 1);
	}
	return 0;
}


int main(){
	unsigned int a = 0;
	scanf("%d", &a);
	get_date(a);
	get_date2(a);
	system("pause");
	return 0;
}*/
/*

void  init(int arr[10]){
	int i = 0;
	for (i = 0; i < 10; i++){
	    arr[i] = i;
		printf("%d", arr[i]);
	}
}
void empty(int arr[10]){
	int i = 0;
	for (i = 0; i < 10; i++){
		arr[i] = 0;
		printf("%d", arr[i]);
	}
}
void reverse(int arr[10]){
		int left = 0;
		int right =9;
		int i = 0;
		for (i = 0; i < 10; i++){
			while (left < right){

			int temp= arr[right];
				arr[right] = arr[left];
				arr[left] = temp;
				left++;
				right--;
			}
			printf("%d", arr[i]);
	}
}
int main(){
	int j = 0;
	printf("����1��������䣬2�����鵹�ã�3���������");
	printf("\n");
	printf("��ѡ��");
	scanf("%d", &j);
	int arr[10] = { 0 };

		switch (j){
		case 1:
			init(arr);
			printf("\n");
			break;
		case 2:
			init(arr);
			printf("\n");
			reverse(arr);
			break;
		case 3:
			empty(arr);
			printf("\n");
			break;
		default:
			break;
		}
	system("pause");
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#pragma warning(disable:4996)
void table(int x, int y, int num){
	for (x = 1; x <= num; x++){
		for (y = 1; y <= x; y++){

			printf("%d*%d=%d", x, y, x*y);
			printf(" ");
		}
		printf("\n");
	}
}
int main(){
	int x = 0;
	int y = 0;
	int num = 0;
	scanf("%d", &num);
	table(x, y, num);
	system("pause");
}
*/
/*

int count_one_bits(unsigned int x)
{
	int i = 0;
	int count = 0;
	while (x){
		x = x&(x - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}
int main(){
	unsigned int a = 0;
	scanf("%d", &a);
	count_one_bits(a);
	system("pause");
	return 0;
}
*/

/*
void Swap1(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main(){
	int a = 1;
	int b = 2;
    Swap1(&a,&b);
	printf("num1=%d  num2=%d", a, b);
	system("pause");
	return 0;
}*/
/*
int main(){
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("���Լ����رգ�����00��ȡ���ر�");
		scanf("%s", input);
		if (0 == strcmp(input, "00")){
			system("shutdown -a");
			break;
		}
	}
	return 0;
}*/
/*
int main(){
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	to :
		printf("���Լ����ػ�������00����ȡ���ػ�");
	scanf("%s", input);
	if (0 == strcmp(input, "00")){
		system("shutdown -a");
	}
	else{
		goto to;
	}
	return 0;
}
*/
	/*
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 11; ++i){
		
			if (i % 2 != 0){
				for (k = 6; k = 6-i+1;){
					printf(" ");
				}
				for (j = 1; j <= i; ++j){
					printf("*");
				}
				printf("\n");
		}
	}
	system("pause");
}*/

/*
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right){
		mid = (left + right) >> 1;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else{
			printf("%d\n", mid);
			break;
		}
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	scanf("%d", &key);
	bin_search(arr, left, right, key);
	system("pause");
}
*/
/*
void SwapArray(int*array1, int*array2, int N){

}
int main()
{
	return 0;
}*/
	/*int ch = 0;
	printf("������һ���ַ�:\n");
	while ((ch = getchar()) != EOF)//�Ӽ����л�ȡһ���ַ�����ASCII����ֵ����ch��ch��=��-1���ɽ���whileѭ��
	{
		if (ch >= 'a'&&ch <= 'z')//ch��97��122֮�䣬Ҳ����˵�������Сд��ĸ
		{
			printf("%c\n", ch - 32);//Сд��ĸ��ASCII����ֵ=��д��ĸ��ASCII����ֵ+32
		}
		else if (ch >= 'A'&&ch <= 'Z')//ch��65��90֮�䣬Ҳ����˵������Ǵ�д��ĸ
		{
			printf("%c\n", ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')//ch��48��57֮�䣬Ҳ����˵��������
		{
			;//����������Ե���дһ���ֺ�
		}
		else//�����������������ַ�Ҳ��������
		{
			;
		}
	}
	return 0;
}*/
/*int main(){
	int i = 0;
	char psw[10] = "";
	int j = 3;
	for (i = 0; i <3; ++i){
		printf("�������룺\n");
		scanf("%s", psw);
		if (strcmp(psw, "123") == 0){
			break;
		}
	}
	if (i == 3)
		printf("�˳�");
	else
		printf("�������");
	system("pause");
}*/
/*
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right){
		mid = (left + right) >>1;
		if (arr[mid] > key){
			right = mid-1;
		}
		else if (arr[mid] < key){
			left = mid+1;
		}
		else
			break;
	}
		 if(left<=right) {
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
		}
		else{
			return -1;
		}

}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	scanf("%d", &key);
	bin_search(arr, left,right, key);
	system("pause");
}*/
/*
int main(){
	int M = 0;
	int N = 0;
//���Լ��������M>N��
	scanf("%d %d", M, N);
if (M%N == 0){
	printf("���Լ����:%d" , N);
}*/
/*
else{
	for (int i = 1; i<N; i++){
		for (int j = i + 1; j<N; j++){
			//i�ǹ�Լ��������û�б����ٴ�Ĺ�Լ��
			if ((M%i == 0 && N%i == 0) && (M%j != 0 && N%j != 0)){
				printf("%d",i);
			}
		}
	}
}*/
		
			/*
int findDate(int x, int y)
{
	while (x*y != 0)
	{
		if (x > y){
			x %= y;
		}
		else if (x < y){
			y %= x;
		}
	}
	if ((x %= y) == 0)
	{
		return y;
	}
	else if ((y %= x) == 0)
	{
		return x;
	}
}
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x, y);
	int ret = findDate(x, y);
	printf("  date=%d\n", ret);
	system("pause");
	return 0;
}

*/

/*
void menu(){
	printf("*****************************\n");
	printf("******** 1.play *************\n");
	printf("******** 0.exit *************\n");
	printf("*****************************\n");
}
void game(){
	int random_num = rand() % 100 + 1;//�������������0~100֮��
	int input = 0;
	while (1){
		printf("��������µ�����:\n");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�������\n");
		}
		else if (input < random_num){
			printf("����С��\n");
		}
		else if (input = random_num){
			printf("�������\n");
		}
	}
}
int main(){
	int input = 0;
	srand((unsigned)time(NULL));
	//���srandÿ���������ֵ��һ���ģ���ôÿ�����в����������Ҳ��һ���ģ�
	//��һ���̶�����ֵ��Ϊ������һ��ȱ�㡣
	//ͨ����������  ������һ�����srand((unsigned) time(NULL));��ȡ����������ʹ������Ϊһ�����̶�������
	//����������������Ͳ���ÿ��ִ�ж�һ���ˡ�

	printf("��ѡ��>:\n");
	do{
		menu();
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������ѡ��>\n");
			break;
		}	
	} while (input);
	system("pause");
	return 0;
}
*/
	/*
	int a, i = 0;
	printf("������Դ���룺\n");
	while ((a = getchar()) != EOF)
	{
		if (a == '{')
		{
			i++;
		}
		else if (a == '}' && i == 0)
		{
			printf("�����Ų��ɶԳ���\n");
		}
		else if (a == '}' && i != 0)
		{
			i--;
		}
	}
	if (i > 0)
	{
		printf("�����Ų��ɶԳ���\n");
	}
	else
	{
		printf("�����ųɶԳ���\n");
	}
	*/
	/*
	int i = 0;
	int a = 0;
	int sum = 0;
	int sn = 0;
	scanf("%d", &a);
	for (i = 0; i <= 4; i++)
	{
		sum = sum + a*pow(10, i);//����pow(x,y);//�������Ǽ���x��y�η���x��y������ֵ����double�� ��
		sn = sn + sum;
	}
	printf("%d", sn);
	*/
	/*
	int a = 0;
	int Sn = 0;
	scanf("%d", &a);
	Sn = a + a * 10 + a + a * 100 + a * 10 + a + a * 1000 + a * 100 + a * 10 + a + a * 10000 + a * 1000 + a * 100 + a * 10 + a;
	printf("%d", Sn);
	*/

	/*
	int i = 0;
	int j = 0;
	int c = 0;
	int y = 0;
	for (i = 1; i < 10; i++){
		for (j = 0; j < 10; j++){
			for (c = 0; c < 10; c++){
				if (pow(i, 3) + pow(j, 3) + pow(c, 3) == i * 100 + j * 10 + c)
				{
					y = i * 100 + j * 10 + c;
					printf("%d\n", y);
				}
			}
		}
	}
	*/
	/*
	int i = 0;
	int first = 0;
	int second = 0;
	int third = 0;
	for (i = 10; i<=999; i++)
	{
		first = i / 100;
		second = i % 100 / 10;
		third = i % 100;

		if (i == (first*first*first + second*second*second + third*third*third))
		{
			printf("%d", i);
		}

	}*/
	/*
	
	int a[10];
	long long *first = &a[3];
	long long *second = &a[9];
	printf("%d", second - first);
	*/
	/*
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int key = 7;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid-1 ;
		}
		else if (arr[mid] < key)
		{
			left = mid+1 ;


		}
		else
			break;

	}
	if (left <= right)
	{
		printf("%d\n", mid);
	}
	else
		printf("�Ҳ���");*/
	/*
	// ����n�Ľ׳����
	int i = 1;
	int sum = 1;
	int c = 0;
	do{
		sum = sum*i;
		c = c + sum;
		i++;
	} while (i <10);
	printf("%d\n", sum);
	printf("%d\n", c);

	*/

	/*char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i){
		printf("�����룺>");
		scanf("%s", psw);
		if (strcmp(psw, "wang") == 0){

			break;
		}
		if (i == 3){
			printf("exit\n");

		}
		else{
			printf("log in\n");
		}
	}
	*/

	/*char arr1[] = "asghshdhhsdhhgh";
	char arr2[] = "###############";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);*/
	/*
	while (left <= right){
		Sleep(2000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}*/
	//forѭ��
	/*for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}*/


/*#include <stdio.h>
#include <stdlib.h>
int main(){

	int i = 0;
	int k= 0;
	for (i = 0, k = 0; k = 0; i++, k++){
		k++;
		printf("%d", k);
		system("pause");
		return 0;
	}
*/
	/*int x;
	int y;
	for (x=0,y=0;x<2,y<4;++x,y++){//���ű��ʽ���ս���������һ������

		printf("heheh\n");
	}
	/*int ch = 0;
	while ((ch = getchar())!= EOF)
		putchar(ch);
	return 0;*/

/*
#include <stdio.h>
int main(){
	int i = 1;
	int j = 1;
	for (i = 1; i <= 30; i += 2){
		if (i <= 15){
			for (j = 1; j <= i; j++){
				printf("*");
			}
			printf("\n");
			printf("\n");
		}
		if (i > 15){
			for (j = i; j < 30; j++){

				printf("*");
			}
			printf("\n");

			printf("\n");
		}
	}
	system("pause");
}*/
/*int i = 0;
	while (i <= 10){
		i = i + 1;
		if (i == 5)
			continue;//break; continue ����ֹ����ѭ���ģ�������벻ִ�У�ֱ������while�жϲ��֣������´�ѭ����break��������ֹ
		printf("%d", i);


	}
	*/
/*	int i = 0;
	int j = 0;
	for (i = 1; i <= 10; i++){

		for (j=1; j <= i;j++){

			printf("%d*%d=%d%   ", i, j, i*j);
			printf("\t");
		}
		printf("\n");
	}*/
	/*int n = 1;
	int m = 2;
	switch (n){
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n){//switch����Ƕ��
		case 1:
			n++;
			break;
		case 2:
			m++;
			n++;
			break;
		}
		break;
	case 4:
		m++;
		break;

	default:
		break;

	}
	printf("m=%d ,n=%d", m, n);
	*/
/*#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main(){
	int day = 0;
	scanf("%d", &day);
	switch (day){
	case 1:
	
	case 2:
		
	case 3:
	defult :
		break;
	case 4:
		
	case 5:
		printf("����\n");
		break;
	case 6:
	case 7:
		printf("��ĩ\n");

		break;
	
	}
*/	
	/*int i = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0){
			printf("%d\n", i);
		}
	}*/
	/*int coding = 0;
	printf("���ȥ�ô��룿��ѡ�� 1 or 0������������кܶ෿��ѡ��-1");
	scanf("%d", &coding);
	if (1==coding ){
		printf("���Ӯ\n");
	}
	else if (coding == 0){
		printf("�����ؼ�\n");

	}
	else if (coding == -1){
		printf("�Ǻ�\n");
	}*/
	/*system("pause");
	return 0;
}*/




/*int main(){

	int coding = 0;
	printf("����ô����𣿣�ѡ�񣱣�򣰣�");
		scanf("%d", &coding);
	if (coding = 1){

		printf("����кý��");

	}
	else{
		printf("over");
	}
		system("pause");
}
*/
/*int main()
{


	int num = 10;
	int *p;
	p = &num;
	*p = 2;//�����öԱ������и�ֵ 
	&num;

	printf("%d", num);
	system("pause");
	return 0;
	}*/
/*struct Stu{
	char name[12];
	int age;
	char sex[5];
	char id[13];
};
int main(){
	struct Stu s= { "zss", "13", "nan", "sghdg" };
	printf("%s %d %s %s", s.name, s.age, s.sex, s.id);
	system("pause");
}*/
/*int GetMax(int*a, int num){
	assert(a);
	assert(num > 0);
	int i = 0;
	int max = a[0];
	for (i =0; i < num; i++)
	{
		if (max < a[i]){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int a[] = { 12, 21, 23, 23, 232, 13, 2, 1, 2, 31 };
	int size = sizeof(a) / sizeof(a[0]);
	int max = GetMax(a, size);
	printf("%d", max);
	system("pause");
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10] = { 12, 21, 23, 23, 232, 13, 2, 1, 2, 31 };
	int i = 0;
	int max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (max < a[i]){
			max = a[i];
		}
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define ADD(x,y) (x+y)
#include<stdio.h>
#include <stdlib.h>
 //static int Add(int x, int y)
//{
//	return x + y;

//}

int main (){
	int sum = ADD(4, 5);
	printf("%d\n", sum);

	system("pause");
	return 0;
}*/

	/*

	static int i = 0;//static���ξֲ������ı��������ڣ����ı������򣬵���������������ڲŽ�����
	i++;
	

printf("%d", i);*/
/*int main()
{
	int i = 0;
	for (i= 0; i < 10; i++)
	{
		test();


	}*/
	
	
	/*printf("%d\n", my_add(1,23));

	printf("\n");
	system("pause");*/


//void test()
///{
  //  static int i = 0;
	//i++;
	//printf("%d\n", i);
//}
/*extern  int g_val;

int main()
{
	printf("%d\n", g_val);

	
	printf("\n");
	system("pause");
}*/
	/*int i;
	int j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++){
			
			printf("%d*%d=%d", i,j,i*j);
			printf("\t");
		}
		printf("\n");
	}
	*/


	/*
	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++){
			if (i%j == 0)
				break;

		}
			if (i == j)
			{
				printf("%d\n", i);
			}
		}
	*/

	/*int i = 10;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}
	*/
/*enum SEX
{
	MALE,
	FEMALE,
	SECRET
};*/
/*int Add(int x, int y)
{
	return x + y;


}
int Sub(int x, int y)
{
	return x - y;
}*/
/*int Add(int x, int y,int d){
	int z = x + y+d;
	return z;
}
int main()
{
	int x ;
	int y ;
	int d;
	int sum = 0;
	printf("����������������>");
	scanf("%d %d %d", &x,&y,&d);
	sum = Add(x, y,d);
	printf("sum=%d\n", sum);
	*/
/*{
	printf("�������\n");
	int line = 0;
	while (line < 2000)
	{
		line++;
		printf("��ҪŬ���ɴ���\n");

	}
	if (line==2000){
		printf("��Ҫ�׸���\n");

	}*/
	/*int coding = 0;
	printf("���ȥ�ô�����(ѡ��1 or 0 ):>");
		scanf("%d", &coding);
	if (coding == 1)
	{
		printf("��֣������offer\n");

	}
	else if (coding==2)
	{
		printf("�������ؼ�������\n");

	}
	else
	{
		printf("defualt");
	}*/
	/*printf("%d\n", Add(1, 2));//���üӷ�
	printf("%d\n", Sub(1, 2));//���ü���
*/

	/*printf("%d\n",strlen("c:\test\32\test.c"));
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	*/

	/*3.14;
	1000;
	const float pai = 3.14f;//const����������Ϊ����

	//pai = 5.14;
#define MAX 100;
	*/
	/*int a = 0;
	int b = 0;
	int sum = 0;

	printf("����������������>");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d", sum);*/






/*{
	int local = 2018;
	int global = 2020;
	printf("global=%d\n", global);
	//����ʹ�þֲ�����
	*/


/*{
	int age = 150;
	float weight = 45.5f;
	char ch = 'w';
	rintf("%d %d  %d", age , "weight", ch);

	*/




	/*{
		int a = 0;
		int b = 2;
		if (a == 1)
		
			if (b == 2)
				printf("hehe\n");
		
		else
			printf("haha\n");*/
		
	
	//printf("%d\n", sizeof(char));
	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));*/
	//int i, j;
	//for (i = 100; i <= 200; i++)
	//{

		//for (j = 2; j <=3 i - 1; j++)
		//{
			//if (i%j == 0)
		//		break;//����������������ô�ѭ���������������
		//}
	//	if (j == i)//����������û��������
			//printf("%d ", i);
	//}
	
