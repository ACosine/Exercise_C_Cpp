#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#include<string.h>
/************************************* 打印一个整数的每一位**************************************************/

// void Print_bit(int num)
//{
//	if(num>9)//两位数以上进行递归 
//	{
//		Print_bit(num/10);
//	}
//	printf("%d ", num % 10);//直至一位数时打印
//
//}
//int main()
//{
//	printf("请输入要打印的数：\n");
//	scanf("%d", &num);
//	int num = 0;
//	Print_bit(num);
//	return 0;
//}

/************************************* n的阶乘（不考虑溢出的问题）*******************************************/

//int Factorial1(int n)//非递归法
//{
//	assert(n > 0);//负数没有阶乘
//	int res = 1;
//	for (int i = n; i > 1; --i)
//	{
//		res *= i;
//	}
//	return res;
//}
//int Factorial2(int n)//递归法
//{
//	assert(n > 0);//负数没有阶乘
//	if (n <= 1)//0和1的阶乘为1
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Factorial(n - 1);//大于1的进行递归
//	}
//}
//int main()
//{
//
//	int n = 0, Res = 0;
//	printf("请输入要计算的数阶乘：\n");
//	scanf("%d", &n);   // n超过12就会溢出
//	Res = Factorial1(n);
//	printf("Res=%d\n", Res);
//	return 0;
//}


/************************************* my_strlen *************************************************************/

//int my_strlen1(char* arr)//计数法
//{
//	int leng=0;
//	while (0 != *arr++)//直至访问到\0
//	{
//		leng++;
//	}
//	return leng;
//}

//int  my_strlen2(const char* arr)//递归法
//{
//	if (0 == *arr)
//		return 0;
//	else 
//		return 1 + my_strlen2(arr+1);
//	//注意这里不能写成 (arr++);? 会崩溃
//
//}

//int  my_strlen3(char* arr)//指针-指针法
//{
//	char* p = arr;
//	while (0 != *p)
//	{
//		p++;
//	}
//	return p - arr;//指针-指针得到的是指针之间元素个数
//}

//int  my_strlen4(const char* arr) //standard
//{
//	int leng = 0;
//	assert(arr != NULL); //断言 & const保护参数
//	while (*arr)
//	{
//		arr++;
//		leng++;
//	}
//	return leng;
//}

//int main()
//{
//	
//	
//	char arr[20] = {0};
//	int leng = 0;
//	printf("请输入要计算的字符串：\n");
//	gets(arr); //获取字符串
//
//	leng= my_strlen1(arr);  //计数法
//	leng = my_strlen2(arr);   //递归法
//	leng = my_strlen3(arr);   //指针-指针法
//	leng = my_strlen4(arr);   //standard
//
//	printf("该段字符串的有效长度leng=%d\n", leng);
//	return 0;
//
//}

/************************************* 字符串逆序 ************************************************************/
int  my_strlen4(const char* arr) //standard
{
	int leng = 0;
	assert(arr != NULL); //断言 & const保护参数
	while (*arr)
	{
		arr++;
		leng++;
	}
	return leng;
}
void revers_string1(char arr[])//交换法
{
	
}

void revers_string2(char arr[])//递归法
{

}
int mian()
{
	char arr[20];
	gets(arr);

	revers_string1(arr);//交换法
	revers_string1(arr);//递归法

	puts(arr);
	return 0;

}


