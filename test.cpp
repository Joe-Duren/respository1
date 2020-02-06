#include<cstdio>
using namespace std;
int main(){
	int a,b,sum,len=0;
	scanf("%d %d",&a,&b);
	sum=a+b;
	int c[10]={0};
	if(sum<0){sum=-sum;printf("-");}
	if(sum==0){c[len++]=0;}
	while(sum){
		c[len++]=sum%10;
		sum=sum/10;
	}
	for(int i=len-1;i>=0;i--){
		printf("%d",c[i]);
		if(i>0&&i%3==0){printf(",");}
	}
	return 0;
}
