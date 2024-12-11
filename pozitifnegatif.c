#include <stdio.h>

main(){
	
	int sayi;
	char kontrol;
	
	while(1){
		printf("Bir sayi girin: ");
		scanf("%d", &sayi);
		
		if(sayi > 0){
			printf("Sayi pozitiftir.\n");
		}
		else if(sayi < 0){
			printf("Sayi negatiftir.\n");
		}
		else{
			printf("Sayi notr.\n");
		}	
		
		printf("Yeni bir sayi girmek ister misiniz ? (E/H) :");
		scanf("%s", &kontrol);
		
		if(kontrol == 'H' || kontrol == 'h'){
			printf("Program sonlandirildi.");
			break;
		}
		else if(kontrol == 'E' || kontrol == 'e'){
			printf("Bir sayi girin: ");
			scanf("%d", &sayi);
			
			if(sayi > 0){
				printf("Sayi pozitiftir.\n");
			}
			else if(sayi < 0){
				printf("Sayi negatiftir.\n");
			}
			else{
				printf("Sayi notr.\n");
			}
			
			printf("Yeni bir sayi girmek ister misiniz ? (E/H) :");
			scanf("%s", &kontrol);
		}
		
		else{
			printf("Gecersiz bir ifade girdiniz.");
			break;
		}
	}
}
