#include<stdio.h>
void  array(int(*a)[3], int n)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < sizeof(a[0]) / sizeof(a[0][0]);j++)
		{
			printf("%d ",a[i][j]);
		}
	}


}
int main()
{
	int a[2][3] = { 1, 2, 3, 4, 5, 6, };
	int n = sizeof(a) / sizeof(a[0]);
	array(a, n);
	return 0;



}