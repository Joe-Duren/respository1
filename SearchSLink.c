#include <stdio.h>
#include <stdlib.h>
//���嵥������ 
typedef struct node{
	int data;
	struct node* next;                    
}LNode,*LpNode;

//��һ��pre��Ϊ�м̣����θ���ÿ���ڵ�(β�巨)�����쵥���� 
LpNode CreatL(int Array[]){               //����Ҫ�������� 
	LNode *pre,*p,*head;
	int i;
	head=(struct node*)malloc(sizeof(struct node));      //����ͷ��㣨�ṹ��ͨ��ָ�����ǿ������ת���� 
	head->next=NULL;                     //ͷ����ʼ�� 
	pre=head;
	for(i=0;i<5;i++){
		p=(struct node*)malloc(sizeof(struct node));
		p->data=Array[i];
		p->next=NULL;                    //β���ȷ��ΪNULL 
		pre->next=p;                      //ͷ���Ϳ�ʼ������� 
		pre=p;                           //�����м̽��pre 
	}
	return head;                         //����ͷ��� 
}

int search(struct node* L,int x){
	int count=0;
	LNode* p=L->next;                       //������Ҫ�½�һ���ڵ�������ڱ�ʾ 
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
	LNode* L=CreatL(Array);            //����ָ��head��ͷָ��L(����������L)
	L=L->next;                        //ͷ����������򣬿�ʼ������ 
	scanf("%d",&x);
	count=search(L,x);
	printf("%d",count);
	return 0;
} 
