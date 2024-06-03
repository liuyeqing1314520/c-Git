#include <stdio.h>
//´óÐ¡Ð´×Ö·û×ª»»
void char_test() {
	char tem = 's';
	printf("tem=%c\n", tem);
	tem = tem - 32;
	printf("tem=%c\n", tem);
	tem = tem+ 32;
	printf("tem=%c\n", tem);

}
int main() {
	char_test();
	return 0;
}