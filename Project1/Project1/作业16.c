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

