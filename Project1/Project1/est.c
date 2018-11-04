/*
.编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算
int main(){
int b = 0;
int arr[9] = { 0, 0, 2, 2, 3, 3, 4, 4, 1};
for (int i = 0; i < 9; i++){
b = b^arr[i];
}

printf("%d", b);
system("pause");
}

*/



/*unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
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
bit = value & 1;//取出最低位
value >>= 1;//右移一位，
result += bit<<(31-num);  //32位（ 0 到 31）
num++;
}
return result;
}
int main(){

printf("%u", reverse_bit(25));
system("pause");
}
*/

/*.在屏幕上打印杨辉三角。
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


/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
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

printf("kiler是%c ", kiler);
}
}

system("pause");
return 0;

}
*/




/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
int a = 1;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
for (a = 1; a <= 5; a++){

for (b = 1; b <= 5; b++){

for (c = 1; c <=5; c++){

for (d = 1; d <=5; d++){

for (e = 1; e <=5; e++){
if (((b == 2) +( a == 3)) == 1 &&
((e == 4) + (a == 1)) == 1 &&
((b == 2) +( e == 4)) == 1 &&
((c == 1) + (d == 2)) == 1 &&
((c == 5) +( d == 3)) == 1){
if (120 == a*b*c*d*e){

printf("a=%d  b=%d c=%d  d=%d e=%d", a, b, c, d, e);

}


}
}
}
}
}
}

system("pause");
return 0;

}*/



/*两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

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



/*数组三函数
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>

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
	int right = 9;
	int i = 0;
	for (i = 0; i < 10; i++){
		while (left < right){

			int temp = arr[right];
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
	printf("输入1，数组填充，2：数组倒置，3：数组清空");
	printf("\n");
	printf("请选择：");
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
int random_num = rand() % 100 + 1;//將随机数控制在0~100之间
int input = 0;
while (1){
printf("请输入你猜的数字:\n");
scanf("%d", &input);
if (input > random_num)
{
printf("输入大了\n");
}
else if (input < random_num){
printf("输入小了\n");
}
else if (input = random_num){
printf("输入对了\n");
}
}
}
int main(){
int input = 0;
srand((unsigned)time(NULL));
//如果srand每次输入的数值是一样的，那么每次运行产生的随机数也是一样的，
//以一个固定的数值作为种子是一个缺点。
//通常的做法是  以这样一句代码srand((unsigned) time(NULL));来取代，这样将使得种子为一个不固定的数，
//这样产生的随机数就不会每次执行都一样了。

printf("请选择>:\n");
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
printf("选择错误重新选择>\n");
break;
}
} while (input);
system("pause");
return 0;
}


*/


/*函数乘法口诀表
void table(int x, int y,int num){
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

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)

//写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1 
//程序原型：
	/*// 返回 1的位数 
	int count_one_bits(unsigned int x)
	{
		int i = 0;
		for (i = 0; i < 32; i++){
			if (((x >> i) & 1) == 1){
				printf("%d",( x >> i) & 1);
			}
		}

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

写一个函数实现有序数组的二分查找
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
写一个函数交换两个数
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
写一个函数判断瑞年
find_year(int x){
if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
printf("%d是闰年", x);

}
else{
printf("bushi");
}

}

int main(){
int a = 0;
scanf("%d", &a);
find_year(a);
system("pause");


*/


/*
写一个函数判断素数
void find_date(int x){
if (x % 2 != 0)
{
printf("yes");
}
else{
printf("no");
}
}
int main(){
int a = 0;
scanf("%d",&a);
find_date(a);
system("pause");
return 0;
}

*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x = 0;
	int y = 1;
	int z = 7;

	if (x > y){
		if (y > z){
			printf("%d %d %d\n", x, y, z);
		}
		else
		{
			if (x > z){
				printf("%d %d %d\n", x, z, y);
			
			}
			else 
			{
				printf("%d %d %d\n", z, x, y);
			}
		}

	}
	else{
		if (x > z){
			printf("%d %d %d\n", y, x, z);
		}
		else//y>x z>x
		{
			if (z < y){
				printf("%d %d %d\n", y, z, x);

			}
			else{
				printf("%d %d %d\n", z, y, x);
			}

		}
	}
	system("pause");
	return 0;
}*/