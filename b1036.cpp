#include<cstdio>
int main(){
	int n;
	char m;
	scanf("%d",&n);
	getchar();                   //���յ��ո� 
	m=getchar();
	for(int i=0;i<=(n-1)/2;i++){          //i��ʾ�� 
		for(int j=0;j<n;j++){
			if((i==0||i==(n-1)/2)||(j==0||j==n-1)){
			putchar(m);
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
