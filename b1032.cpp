#include<cstdio>
int main(){
	const int maxn=100010;
    int school[maxn]={0};
	int n,schID,score;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&schID,&score);
		school[schID]+=score;
	}
	int k=0;
	for(int i=0;i<=n;i++){                //此处如果写成i<n,则会出现部分正确的问题 ,问题出在k，因为k
	                                   //必须要从0开始取，这样才能表示数组的第一个值，而for循环的i也
									   //从0开始取，就导致第一次比较失去意义，从而会损失最后一位值 
		if(school[k]<school[i]){
			k=i;
		}
	}
	printf("%d %d",k,school[k]);
	return 0;
}
