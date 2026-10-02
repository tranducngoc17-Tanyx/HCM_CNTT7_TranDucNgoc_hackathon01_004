#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int usage[MAX_SIZE] = {120, 250, 180, 95, 310};
	int n = 5;
	int choice;
	int pos;
	
	do{
		printf("=======================================\n");
		printf("CHUONG TRINH QUAN LY DIEN NANG SAO MAI\n");
		printf("=======================================\n");
		printf("1. Them chi so dien tieu thu\n");
		printf("2. Sua chi so dien tieu thu\n");
		printf("3. Xoa chi so dien tieu thu\n");
		printf("4. Tim kiem chi so dien tieu thu\n");
		printf("0. Thoat chuong trinh\n");
		printf("=======================================\n");
		
		printf("Nhap lua chon (0-4): ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				for(i=0, i<n, i++){
					printf
				}
				
				break;
				
			case 2:
				printf("2");
				break;
				
				
			default:
				printf("Lua chon khong hop le!");
				break;
		}
	}while(choice != 0);
	
	return 0;
}
