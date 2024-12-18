#define _CRT_SECURE_NO_WARNINGS 1

int val = 2024;//全局变量
static int val2 = 2025;//static修饰全局变量时，这个全局变量的外部链接属性就变成内部链接属性，
//所以其他源文件就不可以使用了，修饰后的作用域只是当前文件而不是整个工程
int Add(int x, int y) {
	return x + y;
}