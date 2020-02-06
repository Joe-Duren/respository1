#include<cstdio>
#include<cstring>
int main(){
	char str[255]="";
	char str1[255]="";              //字符串元素全部定义为0 
	while(scanf("%s",&str)!=EOF){
		int j=strlen(str)-1;
		for(int i=0;i<strlen(str);i++){
			str1[j]=str[i];
			j--;
		}
		if(strcmp(str,str1)){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
		memset(str,0,strlen(str));
		memset(str1,0,strlen(str1));    //对数组中每个元素赋相同的值 
	}
	return 0;
}
