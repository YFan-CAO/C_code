//#include "Seqlist.h"
//
//void SLinit(SL* ps)
//{
//	assert(ps != NULL);
//	ps->a = NULL;
//	ps->capacity = ps->size = 0;
//
//}
//void SLprintf(SL* ps)//打印函数
//{
//	assert(ps!=NULL);
//
//	for (int i = 0; i < ps->size; i++)
//	{
//
//		printf("%d ", *((ps->a) + i));
//	}
//	printf("\n");
//
//
//}
//void SLcheckcapacity(SL* ps)
//{
//	assert(ps != NULL);
//	//检查初始容量 或0或满
//	if (ps->size == ps->capacity)
//	{
//		int newcapacity = ps->capacity = 0 ? 4 : ps->capacity * 2;//更新capacity
//		SLdatatype* tmp = (SLdatatype*)realloc(ps->a, newcapacity * sizeof(SLdatatype));//申请空间
//		if (tmp == NULL)
//		{
//			perror("realloc");
//			exit(-1);
//		}
//
//		ps->a = tmp;                       //realloc扩容时如果空间不够则可能开辟另一块空间 所以ps->a不一定一直在那个地方
//		ps->capacity = newcapacity;        //更新容量大小
//
//	}
//
//}
//void SLdestory(SL* ps)
//{
//	assert(ps != NULL);
//
//	free(ps->a);
//	ps->a = NULL;
//
//}
//
//void SLpushback(SL* ps, SLdatatype x)
//{   
//	assert(ps != NULL);
//	SLcheckcapacity(ps);
//
//	ps->a[ps->size] = x;
//
//	ps->size++;//你插入之后有效数据size自然就会多一个 
//
//
//	//SLinsert(ps,ps->size,x)  ;
//}
//
//void SLpushfront(SL* ps, SLdatatype x)
//{
//	assert(ps != NULL);
//	
//	SLcheckcapacity(ps);
//
//	//将所有数据向后挪一位
//	int end = ps->size - 1;
//	while (end >= 0)
//	{
//		ps->a[end + 1] = ps->a[end];// *(ps->a + end)== ps->a[end]     arr[5]==*(arr+5)
//		end--;
//
//	}
//	//出来的时候 end是-1 了
//
//	ps->a[0] = x;
//	ps->size++;  
//	
//	//SLinsert(ps,0,x) ;
//}
//
//void SLpopback(SL* ps) //尾删
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);// 为真即非零则跳过
//	ps->size--;
//
//	//SLerase(ps, ps->size - 1);
//}
//
//
//
//void SLpopfront(SL* ps)
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);
//	int begin = 1;
//	while (begin < ps->size)
//	{
//		ps->a[begin - 1] = ps->a[begin];
//		begin++;
//	}
//	ps->size--;
//
////	SLerase(ps, 0);
//}
//
//void SLinsert(SL* ps, int pos, SLdatatype x)//pos is the undernum //这个跟可以代替头插 尾插
//{
//	assert(ps != NULL);//防御性检查
//	assert(pos >= 0 && pos <=ps->size);// 特有的防御
//	 
//	SLcheckcapacity(ps);
//	//挪动数据
//	int end = ps->size-1;
//	while (end >= pos)
//	{
//		ps->a[end + 1] = ps->a[end];
//		end--;
//	}
//	ps->a[pos] = x;
//	ps->size++;
//
//
//}
//void SLerase(SL* ps, int pos) //这里也可以复合头删(传0)尾删（传size-1）
//{
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size); //这里没有小于等于 上面有是因为他要是实现尾插法  
//    
//	int begin = pos;
//	while (begin <= (ps->size - 1))
//	{
//		ps->a[begin] = ps->a[begin + 1];
//		begin++;
//	}
//	ps->size--;
//}
////查找修改
//int SLfind(SL* ps, SLdatatype x)  //可以与 modify erase 联合  找一个数把位置返回去如此便可以对这个数删除或者修改
//{
//	assert(ps);//防御
//	for (int i = 0; i < ps->size; i++)
//	{
//		
//		if (x == ps->a[i])
//		{					
//			return i;
//		}
//	}	
//	return -1;
//}
//
//
//void SLmodify(SL* ps,int pos,SLdatatype x)
//{
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size );
//	ps->a[pos] = x;
//
//
//
//}


//删除多个相同数据
//int x = 0;
//scanf("%d", &x);
//
//int pos = SLfind(SL * ps，x);
//
//while (pos != -1)
//{
// 
//	SLerase(SL* ps, pos);
//	 pos = SLfind(SL * ps，x);
//
//}
//
//SLprintf(SL* ps);