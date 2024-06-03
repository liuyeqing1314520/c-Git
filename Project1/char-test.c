#include <stdio.h>
//大小写字符转换
void char_test() {
	char tem = 's';
	printf("tem=%c\n", tem);
	tem = tem - 32;
	printf("tem=%c\n", tem);
	tem = tem+ 32;
	printf("tem=%c\n", tem);

}
//这是为了测试pull
int main() {
	char_test();
	return 0;
}