#include <stdio.h>
//// 4-29
//// 柔性数组
//
//#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];  //柔性数组的大小是未知的
//	//int arr[0]  //两种形式都可以，是柔性数组成员 -数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	//sizeof 返回的这种结构大小不包括柔性数组的内存  - 答案为4
//	//改变柔性数组大小用malloc函数
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	//ps指向这个开辟的空间
//	//给 n 赋值
//	ps->n = 100;
//	//给arr数组赋值
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//改变结构体内存大小
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

////用另一种方法实现柔性数组数组的大小可变
//
//#include <stdlib.h>
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	//ps指向结构体的地址，ps->arr指向arr存的地址的位置,
//	//两个都用malloc开辟了动态空间，所以都要释放
//	return 0;
//}


//前一种方法(柔性数组)更好，原因：
//1.方便内存释放  
// - 柔性数组只需释放一次内存，而第二次释放了两次，容易出错
//2.这样有利于访问速度.  
//- 连续的内存有益于提高访问速度，也有益于减少内存碎片