#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int uint;//���޷������ζ�����������¶���Ϊunit
static int a1 = 60;
typedef struct  Node
{
	int data;
	struct Node* next;
}Node;//֮�󴴽�����ṹ���ֻ��Ҫʹ��Node����
test() {
	static int a = 0;
	a++;//��static���εľֲ��������������������Ҳ��������
	printf("testִ��%d\n",a);
	return 0;

}
//�ṹ�����
typedef struct person {
	char name[20];
	int age;
	char sex[4];
	char phone[22];


}person;
void print(person* p) {//����һ��person�ĵ�ַ��������Ҫһ��personָ�����������
	printf("%s,%d,%s,%s\n", (*p).name, (*p).age, (*p).sex, (*p).phone);
	printf("%s,%d,%s,%s\n", p->name, p->age, p->sex, p->phone);
}
int main() {
	char password[20] = { 0 };
	char confirm[20] = { 0 };
	int i = 0;int j = 0;
	print("����������\n");
		scanf("%s", &password);
		//scanf���ȴ����뻺�����ж�ȡ���ݣ��������������ݺ�س�����12345\n
		//�������ֶΣ�scanfֻ�Ὣ12345д�뵽password�У��������л�����\n
		//��getchar��ʼ��ȡʱ��ֱ�Ӷ�ȡ\n�Ӷ��޷������ж�
		//�������1��дһ��getchar��ȡ�����ַ�
		//�������2��whileѭ���ж�
		/*getchar();*/
		while ((j = getchar()) != '\n') {
			;
		}
		printf("���ٴ�����\n");
		scanf("%s", &confirm);
		while ((j = getchar()) != '\n') {
			;
		}
		printf("��������ǣ�%s�Ƿ�ȷ��: (Y/N)\n", password);
		if ((i = getchar()) == 'Y') {
			printf("�����ѱ���%s\n",password);
		}
		else
		{
			printf("���������");
		}

	return 0;
}



//int main() {
//	//EOF;//�������-1��ʾend of file
//	printf("������һ���ַ���ctrl+z����");
//	int ch = getchar();//�Ӽ��̻�ȡһ���ַ�,ctrl+z����
//	int ch2 = 0;
//	while ((ch2=getchar())!=EOF) {
//			putchar(ch2);//����ַ�
//			
//	}
//	
//	printf("\n");
//
//	printf("����һ�����������ֿ�ʼѭ��\n");
//	int i = 0;
//	int j = 0;
//	
//	scanf("%d", &j);
//	while (j < 10) {
//		printf("��ʼwhileѭ��%d\n", j);
//		j++;
//	}
//	printf("����һ�������������ж����ڼ�\n");
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");break;
//	case 7:
//		printf("������\n");break;
//	default:print("����������\n");
//		break;
//	}
//
//	person p1 = { "����",20,"��","17558802328" };
//	printf("%s,%d,%s,%s\n", p1.name, p1.age, p1.sex, p1.phone);
//	int* p = &p1.age;
//	*p = 30;
//	printf("%s,%d,%s,%s\n", p1.name, p1.age, p1.sex, p1.phone);
//
//	//ȡ��p1�ĵ�ַ,���ú���������ӡ
//	print(&p1);
//	return 0;
//}






////ָ�����
//int main() {
//
//	int a = 10;//���ڴ�����4���ֽڴ洢10
//	printf("%d\n", a);
//	//ȡ��ַ������
//	printf("%p\n", &a);
//	//ָ�����
//	/*ָ�����һ����ַ��ָ������������ڴ��ָ�������*/
//	int* p = &a;
//	printf("%p\n", p);
//	/*a�ı�����10����ַ����Ϊ0x011122
//	����һ��ָ�����p���a�ĵ�ַ����ʱp�д�ŵľ���0x011122
//	p������Ϊint*��*˵��p��ָ�������int˵��ָ��Ķ�����int���ͣ���pָ��a
//	*/
//	*p=20;
//	/* �����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���
//		��ʱpָ��ͨ����ַ��a�е������޸�Ϊ20*/
//	printf("%d\n", a);
//	/*ָ��Ĵ�Сȡ�����ַ�Ĵ�С
//	64λ�����ϵĵ�ַ��64bitλ-8byte������ָ������Ĵ�С����8���ֽ�*/
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(float*));//8
//	printf("%zu\n", sizeof(double*));//8
//
//
//	return 0;
//}


//�����
//#define ADD(x,y) ((x)+(y))  //����(��Ĳ���������������) �����弴�����壩
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
//	//typedef�ؼ���
//	uint num = 1;
//	uint num2 = 6;
//	printf("%d,%d\n", num, num2);
//	//Node a;
//while(num2 < 20) {
//		test();
//		num2++;
//
//	}
//extern val;//�����ⲿ����
//printf("%d\n", val);
//
//extern int Add(int x, int y);
//   int x=Add(num, num2);
//   printf("%d", x);
//   
//
//
//   //�Ĵ�������
//   register int num = 3;//����3����ڼĴ���
//
//
//	return 0;
//
//	//static ��̬�ؼ���
//	//1.���ξֲ�������2.����ȫ�ֱ�����3.���κ���

	
//}
