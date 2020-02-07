#include <stdio.h>
#include <stdlib.h>
//定义单链表结点 
typedef struct node{
	int data;
	struct node* next;                    
}LNode,*LpNode;

//用一个pre作为中继，依次更新每个节点(尾插法)，构造单链表 
LpNode CreatL(int Array[]){               //参数要给出类型 
	LNode *pre,*p,*head;
	int i;
	head=(struct node*)malloc(sizeof(struct node));      //创建头结点（结构体通过指针进行强制类型转换） 
	head->next=NULL;                     //头结点初始化 
	pre=head;
	for(i=0;i<5;i++){
		p=(struct node*)malloc(sizeof(struct node));
		p->data=Array[i];
		p->next=NULL;                    //尾结点确保为NULL 
		pre->next=p;                      //头结点和开始结点链接 
		pre=p;                           //更新中继结点pre 
	}
	return head;                         //返回头结点 
}

int search(struct node* L,int x){
	int count=0;
	LNode* p=L->next;                       //函数中要新建一个节点变量用于表示 
	while(p!=NULL){
		if(p->data==x){
			count++;
		}
		p=p->next;
	}
	return count;
}

int main(){
	int Array[5]={1,2,3,4,5};
	int count=0;
	int x;
	LNode* L=CreatL(Array);            //创建指向head的头指针L(创建新链表L)
	L=L->next;                        //头结点无数据域，开始结点才有 
	scanf("%d",&x);
	count=search(L,x);
	printf("%d",count);
	return 0;
} 
