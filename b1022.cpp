#include<cstdio>
int main(){
	int a,b,d,sum,n;
	int z[31]={0};
	n=0;
	scanf("%d %d %d",&a,&b,&d);
	sum=a+b;
	do{
		z[n]=sum%d;
		sum=sum/d;
		n++;
	}while(sum);
	while(n){
		printf("%d",z[n-1]);
		n--;
	}
	return 0;
}
