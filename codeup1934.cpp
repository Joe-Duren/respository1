#include<cstdio>
const int maxn=200;
int main(){
	int s[maxn]={0};
	int n,x,y=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&x);
	for(int j=0;j<=n;j++){
		if(s[j]==x){
			y=j;
		}
	}
	printf("%d",y);
	return 0;
}
