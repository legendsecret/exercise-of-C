//杨氏矩阵查找
#include<stdio.h>
#include<string.h>
int Find(int arr[3][3], int* r, int* c,int k)
{
	int x = 0;
	int y = *c - 1;
	while (x <= *r - 1 && y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y] > k)
			y--;
		else
		{
			*r = x+1;
			*c = y+1;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int k = 0;//要查找的数
	scanf_s("%d", &k);
	int row = 3;
	int col = 3;
	int ret = Find(arr, &row, &col,k);
	if (ret == 1)
		printf("找到了！\n下标为：%d,%d\n",row,col);
	else
	{
		printf("未找到！\n");
	}
	    
	return 0;
}