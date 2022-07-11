#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Seqlist
{
	int num[100];
	int size ;

}SL;

void nizhi(SL* ps)
	{
		int src = 0;
		int dst = 0;
		dst = ps->size - 1;
	
		while (src!=dst)
		{

			int c = 0;
			
			
				c = ps->num[src];
				ps->num[src] = ps->num[dst];
				ps->num[dst] = c;
			
				src++;
				dst--;
		}
		int i = 0;

		for ( i = 0; i < ps->size; i++)
		{
			printf("%d ", ps->num[i]);
		}
	}



	int main()
	{
		SL s = { {0} ,0};

		int x = 0;
		scanf("%d", &x);
		s.size = x;
		int m = 0;
		int n = 0;
		int i = 0;
		while (1)
		{
			scanf("%d", &m);
			s.num[i] = m;
			n++;
			i++;
			if(n==x)
			{
				break;
			}
		}

		nizhi(&s);


		return 0;
	}