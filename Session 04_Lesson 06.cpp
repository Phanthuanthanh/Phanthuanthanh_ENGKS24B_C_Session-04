#include <stdio.h>

int main(){
	float old_elec_num, new_elec_num, sum;
	
	printf("Nhap vao chi so dien cu: ");
	scanf("%f",&old_elec_num);
	
	printf("Nhap vao chi so dien moi: ");
	scanf("%f",&new_elec_num);
	
	sum = new_elec_num - old_elec_num; 
	printf("Da su dung %.0f so dien\n",sum);
	
	if(sum >= 0 && sum < 50){
		printf("Gia dien: %.0f (VND/kWh)",sum*10000);
	}else if(sum < 100){
		printf("Gia dien: %.0f (VND/kWh)",sum*15000);
	}else if(sum < 150){
		printf("Gia dien: %.0f (VND/kWh)",sum*20000);
	}else if(sum < 200){
		printf("Gia dien: %.0f (VND/kWh)",sum*25000);
	}else{
		printf("Gia dien: %.0f (VND/kWh)",sum*30000);
	}
	return 0; 
}
