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
	for(int i=0;i<=n;i++){                //�˴����д��i<n,�����ֲ�����ȷ������ ,�������k����Ϊk
	                                   //����Ҫ��0��ʼȡ���������ܱ�ʾ����ĵ�һ��ֵ����forѭ����iҲ
									   //��0��ʼȡ���͵��µ�һ�αȽ�ʧȥ���壬�Ӷ�����ʧ���һλֵ 
		if(school[k]<school[i]){
			k=i;
		}
	}
	printf("%d %d",k,school[k]);
	return 0;
}
