#include <stdio.h>
#include <locale.h>
#include <math.h>
#define determinant 

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	int asal1,asal2,sayac,i,basamak,basamak1,basamak2,basamak3,sonuc1,sonuc2,basamak1s2,basamak2s2,basamak3s2,determinant1,determinant2,determinant3,determinantsonuc;
	
	
	printf("Özcehar þifre çözücüye hoþ geldiniz! \n \nLütfen ilk asal tam sayýnýzý giriniz : ");
	scanf("%d",&asal1); //ASAL SAYIYI ÝSTEDÝK.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYABÝLECEK BÝR DÖNGÜ YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	printf("\n\nLütfen ikinci asal tam sayýnýzý giriniz : ");
	scanf("%d",&asal2); // BU SEFER ÝKÝNCÝ ASAL SAYIYI ÝSTEDÝK.
	for(i=2;i<asal2;i++)  //YÝNE AYNI DÖNGÜ.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	printf("Girdiðiniz iki asal tam sayýnýn kaç basamaklý olduðunu yazar mýsnýz ? \nNOT: Maksimum 3 basamaklý ve minimum 2 basamaklý olacak þekilde giriniz. \n:");
	scanf("%d",&basamak;) //BASAMAK SAYISINI ALDIK.
	if(basamak == 2){
		
		asal1 % 10 = basamak1; //BURADA BASAMAKLARINA AYIRMAYA BAÞLADIK 10 ÝLE MODUNU ALDIK VE SONUÇ BÝZE BÝRLER BASAMAÐINI VERDÝ.
	    basamak2 = asal1 / 10; //BURADA ÝKÝNCÝ BASAMAÐI BULMAK ÝÇÝN 10'A BÖLDÜK.
		
		if(basamak1-basamak2 < 0){  // BUARADA SONUCUN NEGATÝF BÝR ÞEKÝLDE ÇIKMA ÝHTÝMALÝ OLDUÐU ÝÇÝN ÝF'Ý KULLANIYORUZ.
		
		
		asal1^(basamak1*basamak2)*-1 + asal1*(basamak1-basamak2)*-1 + asal1 + asal2 = sonuc1;
		asal2^(basamak1*basamak2)*-1 + asal2*(basamak1-basamak2)*-1 + asal1 + asal2 = sonuc2; //BU ÝKÝ ÝÞLEMDE FONKSÝYONUMUZU UYGULADIK.
		
		if(sonuc1 >=100 && sonuc2 >=100 && sonuc1 <= 999 && sonuc2 <= 999){ // BURADA SONUÇLARIN 100'DEN BÜYÜK OLDUKLARINI VARSAYARAK ÝÞLEME ALDIK.
			
			sonuc1 % 10 = basamak1; //BÝRLER BASAMAÐINI BULDUK.
			sonuc1 / 10 = basamak2; // ONLAR BASAMAÐINI BULDUK.
		    sonuc1 / 100 = basamak3; // YÜZLER BASAMAÐINI BULDUK.
		    sonuc2 % 10 = basamak1s2; // ÝKÝNCÝ SONUCUN BÝRLER BASAMAÐINI ALDIK.
		    sonuc2 / 10 = basamak2s2 // ÝKÝNCÝ SONUCUN ONLAR BASAMAÐINI ALDIK.
		    sonuc2 / 100 = basamak3s2 // ÝKÝNCÝ SONUCUN YÜZLER BASAMAÐINI ALDIK.
		    basamak1 + basamak1s2 = determinant1; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝLK SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    basamak2 + basamak2s2 = determinant2; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝKÝNCÝ SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    basamak3 + basamak3s2 = determinant3; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÜÇÜNCÜ SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    
		    determinantsonuc = basamak3(basamak2s2 * determinant1 - basamak1s2 * determinant2) - basamak2(basamak3s2 * determinant1 - basamak1s2 * determinant3) + basamak1(basamak3s2 * determinant2 - basamak2s2 * determinant3 );
		    //YUKARIDA DETERMÝNANT SONUCUNU ALDIK.
		    
			
		}
		
	}
	
	else if{basamak== 3}{
	
	
	
	}
		
		
		
	}	
	

	return 0;
	
	
}
