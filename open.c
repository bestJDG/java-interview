#include<stdio.h>
#include<stdlib.h>

struct symbol
{
	char sym;
	struct symbol *next;
};

struct symbol *createsym(struct symbol *p)
{
	struct symbol *p1,*p2;
	p1=p2=(struct symbol *)malloc(sizeof(struct symbol));//开辟空间
	printf("请输入字符串以enter结束\n");
	scanf("%c",&(p1->sym));//初始化
	p1->next=NULL;//对p1进行初始化
	p=p1;//p为头节点
	while(p1->sym!='\n')
	{
		p2=p1;
		p1=(struct symbol *)malloc(sizeof(struct symbol));
		scanf("%c",&(p1->sym));
		p1->next=NULL;
		p2->next=p1;
	}
	printf("输入完成\n");
	return p;
}

void listsym(struct symbol *p)
{
	if(!p)
	{
		printf("字母表为空！\n");
	}
	else
	{
		printf("字母序列为：\n");
		while(p)
		{
			printf("%c",p->sym);
			p=p->next;
		}
	}

}

int main(){
	struct symbol *head;
	head=NULL;
	head=createsym(head);
	listsym(head);
	return 0;
}


	
