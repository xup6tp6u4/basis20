#include<stdio.h>
#include<stdlib.h>
struct Phone{
	char *brand;
	char *model;
	char *year;
	int   price;
	char *name;
	char *cellphone;
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"htc","u12+","2015/4/23",15000,"jason","0905385612",
	                     "asus","zef6","2019/6/12",18999,"shiauyu","0905362125",
						 "asus","zef4","2017/4/29",10210,"jamas","0125362125",
						 "asus","zef6","2019/6/12",18999,"browm","0806362125",
						 "asus","zef6","2019/6/12",18999,"jiaming","0600362155"};
	for(i=0;i<5;i++){
		printf("%s�����----------\n",phone[i].name);
		printf("����~�P:");
		puts(phone[i].brand);
		printf("�������:");
		puts(phone[i].model);
		printf("����X�t���:");
		puts(phone[i].year);
		printf("�������:");
		printf("%d\n",phone[i].price);
		printf("�ϥΪ�:");
		puts(phone[i].name);
		printf("������X:");
		puts(phone[i].cellphone);
		printf("----------------\n\n");
	}                    
	system("pause");
	return 0;
}
