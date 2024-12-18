#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int uint;//将无符号整形定义的名称重新定义为unit
static int a1 = 60;
typedef struct  Node
{
	int data;
	struct Node* next;
}Node;//之后创建这个结构体就只需要使用Node即可
test() {
	static int a = 0;
	a++;//被static修饰的局部变量，就算出了作用域也不会销毁
	printf("test执行%d\n",a);
	return 0;

}
//结构体相关
typedef struct person {
	char name[20];
	int age;
	char sex[4];
	char phone[22];


}person;
void print(person* p) {//传入一个person的地址，所以需要一个person指针变量来接受
	printf("%s,%d,%s,%s\n", (*p).name, (*p).age, (*p).sex, (*p).phone);
	printf("%s,%d,%s,%s\n", p->name, p->age, p->sex, p->phone);
}
int main() {
	char password[20] = { 0 };
	char confirm[20] = { 0 };
	int i = 0;int j = 0;
	print("请输入密码\n");
		scanf("%s", &password);
		//scanf会先从输入缓冲区中读取数据，当键盘输入数据后回车会有12345\n
		//这样的字段，scanf只会将12345写入到password中，缓冲区中会留下\n
		//当getchar开始读取时会直接读取\n从而无法进行判断
		//解决方法1，写一个getchar获取残余字符
		//解决方法2，while循环判断
		/*getchar();*/
		while ((j = getchar()) != '\n') {
			;
		}
		printf("请再次输入\n");
		scanf("%s", &confirm);
		while ((j = getchar()) != '\n') {
			;
		}
		printf("你的密码是：%s是否确认: (Y/N)\n", password);
		if ((i = getchar()) == 'Y') {
			printf("密码已保存%s\n",password);
		}
		else
		{
			printf("请从新输入");
		}

	return 0;
}



//int main() {
//	//EOF;//定义的是-1表示end of file
//	printf("请输入一个字符，ctrl+z结束");
//	int ch = getchar();//从键盘获取一个字符,ctrl+z结束
//	int ch2 = 0;
//	while ((ch2=getchar())!=EOF) {
//			putchar(ch2);//输出字符
//			
//	}
//	
//	printf("\n");
//
//	printf("输入一个阿拉伯数字开始循环\n");
//	int i = 0;
//	int j = 0;
//	
//	scanf("%d", &j);
//	while (j < 10) {
//		printf("开始while循环%d\n", j);
//		j++;
//	}
//	printf("输入一个阿拉伯数字判断星期几\n");
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");break;
//	case 7:
//		printf("星期天\n");break;
//	default:print("请重新输入\n");
//		break;
//	}
//
//	person p1 = { "张三",20,"男","17558802328" };
//	printf("%s,%d,%s,%s\n", p1.name, p1.age, p1.sex, p1.phone);
//	int* p = &p1.age;
//	*p = 30;
//	printf("%s,%d,%s,%s\n", p1.name, p1.age, p1.sex, p1.phone);
//
//	//取出p1的地址,并用函数方法打印
//	print(&p1);
//	return 0;
//}






////指针相关
//int main() {
//
//	int a = 10;//想内存申请4个字节存储10
//	printf("%d\n", a);
//	//取地址操作符
//	printf("%p\n", &a);
//	//指针变量
//	/*指针就是一个地址，指针变量就是用于存放指针的容器*/
//	int* p = &a;
//	printf("%p\n", p);
//	/*a的变量是10，地址假设为0x011122
//	创建一个指针变量p存放a的地址，此时p中存放的就是0x011122
//	p的类型为int*，*说明p是指针变量，int说明指向的对象是int类型，即p指向a
//	*/
//	*p=20;
//	/* 解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象
//		此时p指针通过地址将a中的数据修改为20*/
//	printf("%d\n", a);
//	/*指针的大小取决与地址的大小
//	64位机器上的地址：64bit位-8byte，所以指针变量的大小就是8个字节*/
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(float*));//8
//	printf("%zu\n", sizeof(double*));//8
//
//
//	return 0;
//}


//定义宏
//#define ADD(x,y) ((x)+(y))  //宏名(宏的参数，参数无类型) （宏体即工作体）
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d", c);
//	return 0;
//}


//int main() {
//
//	int a = 20;
//	int b = 30;
//	int c = 100;
//	int d =(c> (a > b ? a : b)?c:(a>b?a:b));
//	//           c18      b38       a58
//	int e = (c = a - 2, b = a + c, a = b + a);
//	printf("%d\n", e);
//	printf("%d\n", d);
//
//	//typedef关键字
//	uint num = 1;
//	uint num2 = 6;
//	printf("%d,%d\n", num, num2);
//	//Node a;
//while(num2 < 20) {
//		test();
//		num2++;
//
//	}
//extern val;//声明外部符号
//printf("%d\n", val);
//
//extern int Add(int x, int y);
//   int x=Add(num, num2);
//   printf("%d", x);
//   
//
//
//   //寄存器变量
//   register int num = 3;//建议3存放在寄存中
//
//
//	return 0;
//
//	//static 静态关键字
//	//1.修饰局部变量，2.修饰全局变量，3.修饰函数

	
//}
