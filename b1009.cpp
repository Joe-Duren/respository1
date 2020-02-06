#include<cstdio>
#include<cstring>
int main(){
	char str[90];
	fgets(str,90,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n'&&str[len]=='\0'){
		str[len-1]='\0';
	}               
	char ans[90][90];        //ans[r][c]
	int r=0,c=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=' '){
			ans[r][c++]=str[i];
		}else{
			ans[r][c]='\0';
			r++;
			c=0;
		}
	}
	for(int i=r;i>=0;i--){
		printf("%s",ans[i]);
		if(i>0){
			printf(" ");
		}
	}
	return 0;
}
