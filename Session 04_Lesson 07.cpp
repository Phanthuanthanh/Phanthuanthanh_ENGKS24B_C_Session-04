#include<stdio.h>

int main(){
	int year;
	
	printf("Moi ban nhap vao so nam: ");
	scanf("%d",&year);
	
	if(year % 400 == 0){
		printf("Nam %d la nam nhuan. \n",year); 
	}else if(year % 4 == 0 && year % 100 != 0){
		printf("Nam %d la nam nhuan. \n",year);
	}else{
		printf("Nam %d khong phai la nam nhuan. \n",year); 
	} 
	return 0; 
 } 
