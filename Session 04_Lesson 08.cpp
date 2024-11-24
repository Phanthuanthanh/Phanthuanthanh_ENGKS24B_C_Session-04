#include<stdio.h>

int main(){
	float a, b, c;
	
	printf("Moi ban nhap vao canh thu nhat: ");
	scanf("%f",&a);

	printf("Moi ban nhap vao canh thu hai: ");
	scanf("%f",&b);

	printf("Moi ban nhap vao canh thu ba: ");
	scanf("%f",&c);
	
	if(a>0 && b>0 && c>0 && (b+c)>a && (a+c)>b && (a+b)>c){
		printf("La ba canh tam giac. \n"); 
	}else{
		printf("Khong phai ba canh tam giac. \n"); 
	} 
	return 0; 
} 
