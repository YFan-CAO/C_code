//#include "Seqlist.h"
//
//void SLinit(SL* ps)
//{
//	assert(ps != NULL);
//	ps->a = NULL;
//	ps->capacity = ps->size = 0;
//
//}
//void SLprintf(SL* ps)//��ӡ����
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
//	//����ʼ���� ��0����
//	if (ps->size == ps->capacity)
//	{
//		int newcapacity = ps->capacity = 0 ? 4 : ps->capacity * 2;//����capacity
//		SLdatatype* tmp = (SLdatatype*)realloc(ps->a, newcapacity * sizeof(SLdatatype));//����ռ�
//		if (tmp == NULL)
//		{
//			perror("realloc");
//			exit(-1);
//		}
//
//		ps->a = tmp;                       //realloc����ʱ����ռ䲻������ܿ�����һ��ռ� ����ps->a��һ��һֱ���Ǹ��ط�
//		ps->capacity = newcapacity;        //����������С
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
//	ps->size++;//�����֮����Ч����size��Ȼ�ͻ��һ�� 
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
//	//�������������Ųһλ
//	int end = ps->size - 1;
//	while (end >= 0)
//	{
//		ps->a[end + 1] = ps->a[end];// *(ps->a + end)== ps->a[end]     arr[5]==*(arr+5)
//		end--;
//
//	}
//	//������ʱ�� end��-1 ��
//
//	ps->a[0] = x;
//	ps->size++;  
//	
//	//SLinsert(ps,0,x) ;
//}
//
//void SLpopback(SL* ps) //βɾ
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);// Ϊ�漴����������
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
//void SLinsert(SL* ps, int pos, SLdatatype x)//pos is the undernum //��������Դ���ͷ�� β��
//{
//	assert(ps != NULL);//�����Լ��
//	assert(pos >= 0 && pos <=ps->size);// ���еķ���
//	 
//	SLcheckcapacity(ps);
//	//Ų������
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
//void SLerase(SL* ps, int pos) //����Ҳ���Ը���ͷɾ(��0)βɾ����size-1��
//{
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size); //����û��С�ڵ��� ����������Ϊ��Ҫ��ʵ��β�巨  
//    
//	int begin = pos;
//	while (begin <= (ps->size - 1))
//	{
//		ps->a[begin] = ps->a[begin + 1];
//		begin++;
//	}
//	ps->size--;
//}
////�����޸�
//int SLfind(SL* ps, SLdatatype x)  //������ modify erase ����  ��һ������λ�÷���ȥ��˱���Զ������ɾ�������޸�
//{
//	assert(ps);//����
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


//ɾ�������ͬ����
//int x = 0;
//scanf("%d", &x);
//
//int pos = SLfind(SL * ps��x);
//
//while (pos != -1)
//{
// 
//	SLerase(SL* ps, pos);
//	 pos = SLfind(SL * ps��x);
//
//}
//
//SLprintf(SL* ps);