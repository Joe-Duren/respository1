#include <stdio.h>
#include <stdlib.h>
typedef struct node{            //节点定义 
	int data;
	node* next;
}node,*List;
	
List create(int Array[]){
	node *p,*pre,*head;
	head=new node;
	head->next=NULL;
	pre=head;
	for(int i=0;i<5;i++){
		p=new node;
		p->data=Array[i];
		p->next=NULL;           //指针初始化
		pre->next=p;
		pre=p; 
	}	
	return head;
}

int main(){
	int Array[5]={1,2,3,4,5};
	node* L=create(Array);
	L=L->next;
	while(L!=NULL){
		printf("%d\t",L->data);
		L=L->next;
	}
	return 0;
}
