#include <stdio.h>
//// 4-29
//// ��������
//
//#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];  //��������Ĵ�С��δ֪��
//	//int arr[0]  //������ʽ�����ԣ������������Ա -����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	//sizeof ���ص����ֽṹ��С����������������ڴ�  - ��Ϊ4
//	//�ı����������С��malloc����
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	//psָ��������ٵĿռ�
//	//�� n ��ֵ
//	ps->n = 100;
//	//��arr���鸳ֵ
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//�ı�ṹ���ڴ��С
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

////����һ�ַ���ʵ��������������Ĵ�С�ɱ�
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
//	//psָ��ṹ��ĵ�ַ��ps->arrָ��arr��ĵ�ַ��λ��,
//	//��������malloc�����˶�̬�ռ䣬���Զ�Ҫ�ͷ�
//	return 0;
//}


//ǰһ�ַ���(��������)���ã�ԭ��
//1.�����ڴ��ͷ�  
// - ��������ֻ���ͷ�һ���ڴ棬���ڶ����ͷ������Σ����׳���
//2.���������ڷ����ٶ�.  
//- �������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ