#include <stdio.h>
int main(){
	int hour1,hour2,min1,min2;
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	
	int ih=hour2-hour1;
	int im=min2-min1;
	if(im<0){
		im=im+60;
		ih--;
	}
	printf("ʱ�����%dСʱ%d����\n",ih,im);
	return 0;
}
