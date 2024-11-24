#include<stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("Moi ban nhap so thu nhat: ",num1);
	scanf("%d",&num1);
	
	printf("Moi ban nhap so thu hai: ",num2);
	scanf("%d",&num2);
	
	printf("Moi ban nhap so thu ba: ",num3);
	scanf("%d",&num3);
	
	if (num1 <= num3 && num3 <= num2){
		printf("So %d nam trong khoang giua so %d va so %d. \n",num3, num2, num1); 	
	}else if(num2 <= num3 && num3 <= num1){
		printf("So %d nam trong khoang giua so %d va so %d. \n ",num3 ,num2, num1); 
	}else{
		printf("So %d khong nam trong khoang giua so %d va so %d. \n ",num3 ,num2, num1);	
	}  
	return 0; 
}
