#include<stdio.h>
void drawtri(int x)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

}
int main()
{
	int x;
	scanf_s("%d", &x);
	drawtri(x);
	return 0;
}