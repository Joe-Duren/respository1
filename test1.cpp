#include<cstdio>
int devide(int a,int b,int* c){
	if(b==0){
		return 0;
	}else{
		*c=a/b;
		return 1;
	}
}
int main(){
	int a=10,b=0,result;
	int* p = &result;
	devide(a,b,p);
	if(devide(a,b,p)){
		printf("%d",result);
	}else{
		printf("ERROR");
	}
	return 0;
}
