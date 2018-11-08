

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
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
char *my_memcpy(char *dst, char *src, int num){
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
	char *ret = my_memcpy(dst, src, 3);
	printf("%s", ret);
	system("pause");
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int my_strchr(char *src, char *dst){
char *cp = src;
char *s1 = dst;
assert(*src != NULL);
assert(*dst != NULL);
while (*cp) {
while (*s1 == *cp){

return cp;

}
cp++;
}
}
int main(){
char *str1 = "asddsaABCDrtr";
char *str2 = "A";
char *ret = my_strchr(str1, str2);
printf("%s", ret);
system("pause");
}



*/




/*

//strcmp 
#include <stdio.h>
int my_strcmp(const char *src, const char *dst){
int ret = 0;
while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst){
++src;
++dst;
}
if (ret < 0){
ret = -1;
}
else if (ret>0){

ret = 1;
}
return (ret);

}
int main(){
char *src = "adsadd";
char *dst = "adfaffa";

printf("%d",my_strcmp(src, dst));
system("pause");
return 0;
}




*/


/*
//strcmp
#include <stdio.h>
int main(){
const char *str1 = "abcdef";
const char*str2 = "bbb";
if (strlen(str1) - strlen(str2) > 0){

printf("str1>str2");

}
else
{
printf("str2>str1");
}
system("pause");

return 0;
}
*/

//strstr
/*
#include <stdio.h>
#include <stdlib.h>
char * strstr(char *str1, char *str2){
int size1 = strlen(str1);
int size2 = strlen(str2);
int count = 0;
int i = 0;
for ( i = 0; i < size1; i++){
for (int j = 0; j < size2; j++){
if (str1[i + j] == str2[j]){
count++;
continue;
}
else{
if (count == size2){
for (j = i-1; j < size1; j++){
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
char str1[]= "Borland International";
char str2[] = "nation";
strstr(str1, str2);
system("pause");
return 0;
}
*/



/*

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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
while (*s1 && *substr && ( *s1  == *substr)){
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
char *str1= "asddsaABCD";
char *str2= "ABCD";
char *ret= my_strstr(str1, str2);
printf("%s", ret);
system("pause");
}
*/



/*
实现strcpy 
2.实现strcat
3.实现strstr 
4.实现strchr 
5.实现strcmp 
6.实现memcpy 
7.实现memmove
*/


/*#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char *my_strcat(char *dest, char *src){

	char *ret = dest;

	assret(dest != NULL);
	assert(src != NULL);
	while (*dest){
		dest++;
	}
	while ((*dest++ = *src++)){

		;
	}
	return ret;
}
int main(){
	char str1[] = "asddsa";
	char str2[23] = "ABCD";
	my_strcat(str1, str2);
	printf("%s", my_strcat(str1, str2));
	system("pause");
}
*/






/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


char *my_strcpy(char *dest, const char *src){
char *ret = dest;
assert(dest != NULL);
assert(src != NULL);
while ((*dest++ = *src++)){

;
}
return ret;

}
int main(){
char src[] = "adsdsadas";
char dest[23] = "";
my_strcpy(dest, src);
printf("%s", my_strcpy(dest, src));
system("pause");

}

*/

