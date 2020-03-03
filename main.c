#include <stdio.h>
#include <locale.h>
#include <math.h>
	

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
	int secim,asal1,asal2,sayac,i,x,basamak,basamak1,basamak2,basamak3,basamak1a1,basamak2a1,basamak3a1,basamak1a2,basamak2a2,basamak3a2,basamak1s2,basamak2s2,basamak3s2,basamak1s1,basamak2s1,basamak3s1,determinant1,determinant2,determinant3,asalcarpan1,asalcarpan2,asalcarpan3;
	long long int determinantsonuc,sonuc1,sonuc2;
	
	printf("Özcehar þifrelemeye hoþ geldiniz ! \n \nLütfen þifre oluþturmak için 1'i þifre çözümlemek için 2'yi tuþlayýnýz \n \n : ");
	scanf("%d",&secim);
	if(secim == 1){
	
	
	printf("Özcehar þifre oluþturucuya hoþ geldiniz! \n \nLütfen iki basamaklý ilk asal tam sayýnýzý giriniz \n \n : ");
	scanf("%d",&asal1); //ASAL SAYIYI ÝSTEDÝK.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYABÝLECEK BÝR DÖNGÜ YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý veya iki basamaklý bir sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	
	printf("\n\nLütfen iki ikinci asal tam sayýnýzý giriniz : ");
	scanf("%d",&asal2); // BU SEFER ÝKÝNCÝ ASAL SAYIYI ÝSTEDÝK.
	for(i=2;i<asal2;i++)  //YÝNE AYNI DÖNGÜ.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý veya iki basamaklý bir sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	
	 basamak1 = asal1 % 10;
	 basamak2 = asal1 / 10;     
	 basamak1a2 = asal2 % 10;
	 basamak2a2 = asal2 / 10;	
	
	
	if(basamak2-basamak1 <= -1 ){
		
			if(basamak2a2 - basamak1a2 <= -1){
			
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		
 
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){ 
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);

				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
						
				
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru toplayýnýz \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n Ü(26) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3+2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 +24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 +1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			

		    }
		
	
		
		
		
		if(basamak1a2 - basamak2a2 <=-1){
		
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 

		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
			determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru toplayýnýz \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n Ü(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			}
		
		
		
	}
		
		   else if(basamak1-basamak2 < 0){
		   	
			if(basamak2a2 - basamak1a2 < 0){
		
		sonuc1 = pow(asal1,basamak2-basamak1)+ asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 

	
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝLK SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    determinant2 = basamak2s1 + basamak2s2 + asal2; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝKÝNCÝ SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    determinant3 = basamak3s1 + basamak3s2 + asal1; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÜÇÜNCÜ SÜTUNUNUN DEÐERÝNÝ BULDUK.
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru toplayýnýz \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n Ü(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			
				
			
		}
		
		if(basamak1a2 - basamak2a2 <= -1){
			
		sonuc1 = pow(asal1,basamak2-basamak1) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1; 
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));


		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}

				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru toplayýnýz \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n Ü(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			}
		}
	}
		else if(secim == 2){

	printf("Özcehar þifre çözücüye hoþ geldiniz! \n \nLütfen iki basamaklý ilk asal tam sayýnýzý giriniz \n \n : ");
	scanf("%d",&asal1); //ASAL SAYIYI ÝSTEDÝK.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYABÝLECEK BÝR DÖNGÜ YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý veya iki basamaklý bir sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	
	printf("\n\nLütfen iki ikinci asal tam sayýnýzý giriniz : ");
	scanf("%d",&asal2); // BU SEFER ÝKÝNCÝ ASAL SAYIYI ÝSTEDÝK.
	for(i=2;i<asal2;i++)  //YÝNE AYNI DÖNGÜ.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("Üzgünüz bu bir asal sayý veya iki basamaklý bir sayý deðil.Lütfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdiðiniz tam sayý 1 deðerinden büyük olmalýdýr.");
		return 0;
	}
	
	 basamak1 = asal1 % 10;
	 basamak2 = asal1 / 10;     
	 basamak1a2 = asal2 % 10;
	 basamak2a2 = asal2 / 10;	
	
	
	if(basamak2-basamak1 <= -1 ){
		
			if(basamak2a2 - basamak1a2 <= -1){
			
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		
 
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){ 
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);

				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
						
				
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru çýkartýnýz \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n Ü(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			

		    }
		
	
		
		
		
		if(basamak1a2 - basamak2a2 <=-1){
		
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 

		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
			determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru çýkartýnýz \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n Ü(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			}
		
		
		
	}
		
		   else if(basamak1-basamak2 < 0){
		   	
			if(basamak2a2 - basamak1a2 < 0){
		
		sonuc1 = pow(asal1,basamak2-basamak1)+ asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 

	
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝLK SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    determinant2 = basamak2s1 + basamak2s2 + asal2; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÝKÝNCÝ SÜTUNUNUN DEÐERÝNÝ BULDUK.
		    determinant3 = basamak3s1 + basamak3s2 + asal1; // BURADA 3X3 DETERMÝNANT ÝÞLEMÝMÝZÝN 3'ÜNCÜ SATIRINDAKÝ ÜÇÜNCÜ SÜTUNUNUN DEÐERÝNÝ BULDUK.
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru çýkartýnýz \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n Ü(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			
				
			
		}
		
		if(basamak1a2 - basamak2a2 <= -1){
			
		sonuc1 = pow(asal1,basamak2-basamak1) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1; 
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));


		    if(determinantsonuc == 0){
		    	
		    	printf("Sonuç 0 Çýktý LÜtfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("Lütfen doðru sonucu istiyorsanýz yukarýda gördüðünüz ilk üç asal çarpaný sýrasýyla yazýnýz. \n \n NOT : Eðer verilen sayýnýn asal çarpanlarý üçten az ise boþ kalan yerleri 1 rakamý ile doldurunuz ve çýkan sonuçta -1 deðeri varsa bu deðeri yazmayýnýz görmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}

				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t Ç = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t Ð = 9 \t \t H = 10 \n I  = 11 \t Ý = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t Ö = 19 \t P = 20\n R = 21 \t S = 22 \t Þ = 23 \t T = 24 \t U = 25 \t Ü = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n Þifrelemek istediðiniz metini lütfen yukarýdaki alfabetik sýrasýndaki sayýsal deðerini bulup onlarý %d %d %d sayýlarýyla soldan saða doðru çýkartýnýz \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" ÖRNEK : TÜBÝTAK için  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n Ü(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n Ý(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			}
		}
			
			
			
		}
		else{
			printf("Üzgünüz doðru bir seçim yapmadýnýz programdan çýkartýlýyorsunuz.");
			return 0;
		}
		
			return 0;
		}
	
			
		




				
			
