#include<stdio.h>
int main()
{
	char ch;
	printf("请输入你的成绩评级：");
	scanf_s("%c", &ch);

	switch(ch)
	{
	case 'A': printf("你的成绩在90-100分之间\n"); break;
	case 'B': printf("你的成绩在80-90分之间\n"); break;
	case 'C': printf("你的成绩在70-80分之间\n"); break;
	case 'D': printf("你的成绩在60-70分之间\n"); break;
	case 'E': printf("你的成绩在不及格！！！\n"); break;
	default:printf("请输入正确的成绩评级！"); break;

	}
	return 0;
}
