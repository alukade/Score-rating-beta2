#include<stdio.h>
int main()
{
	char ch;
	printf("��������ĳɼ�������");
	scanf_s("%c", &ch);

	switch(ch)
	{
	case 'A': printf("��ĳɼ���90-100��֮��\n"); break;
	case 'B': printf("��ĳɼ���80-90��֮��\n"); break;
	case 'C': printf("��ĳɼ���70-80��֮��\n"); break;
	case 'D': printf("��ĳɼ���60-70��֮��\n"); break;
	case 'E': printf("��ĳɼ��ڲ����񣡣���\n"); break;
	default:printf("��������ȷ�ĳɼ�������"); break;

	}
	return 0;
}
