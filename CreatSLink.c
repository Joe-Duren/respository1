#include <stdio.h>
#include <stdlib.h>
//���嵥������ 
typedef struct node{
	int data;
	struct node* next;                    //c������Ҫ��struct 
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

int main(){
	int Array[5]={1,2,3,4,5};
	LNode* L=CreatL(Array);            //����ָ��head��ͷָ��L(����������L)
	L=L->next;                        //ͷ����������򣬿�ʼ������ 
	while(L!=NULL){
		printf("%d",L->data);
		L=L->next;                   //ת����һ����� 
	} 
	return 0;
} 
