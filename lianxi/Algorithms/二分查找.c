#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define num 5
int main()
{
	int arr[num] = { 0 };
	int i = 0;
	int	n = 0;
	while (1)
	{
		scanf("%d", &arr[i]);
		n++;
		if (n >= num)
		{
			break;
		}
		i++;
	}

		printf("please input x\n");
		int x = 0;
		scanf("%d", &x);

		int low = 0;
		int high = num - 1;
		
		int flag = 1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (x == arr[mid])
			{
				printf("%d\n",mid);
				flag = 0;
				break;
			}
			else if (x > arr[mid])
			{
				low = mid+ 1;
			}
			else {
				high = mid- 1;
			}


		}

		if (flag == 1)
		{

			printf("not find");
         }



	return 0;
}