#include<stdio.h>


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
		return 1 + my_strlen2(str + 1);
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
	int p1 = my_strlen(str);
	int p2 = my_strlen2(str);
	int p3 = my_strlen2(str);
	printf("%d %d %d", p1, p2, p3);
	system("pause");
}