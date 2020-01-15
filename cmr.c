#include <stdio.h>

int main(){

	int x,y,q;
	char z;

	printf("MERHABA LEYDİM ! Nasılsın ? \n \n 1 = iyiyim  \n \n 2 = kötüyüm \n :");
	scanf("%d",&x);

	if(x == 1){

		printf("Bunun İçin Sevindim ! \n \n Sadece Bunu Senin İçin Yazmak İstemiştim. Umarım Senin Adına Daha Nicelerini Yazarım....");
		return 0;

	}
	else if(x == 2){
		printf("Umarım Sorunun Kaynağı Ben Değilimdir... Bak Şimdi Senin Adına Belirli Bir Hesap Makinesi Yaptım Çok Hoşuna Gidebilir Denemek İster misin ? \n \n 1 = Evet  \n 2 = Hayır \n :");
		scanf("%d",&x);

		if(x == 1){

			printf("\n \n \n ŞİMDİ SURATINI GÜLDÜRME ZAMANIII !!! HADİ HESAP MAKİNEMİZİ BAŞLATALIM...(YERİNDE OLSAM GİTHUBA YİNE BAKARDIM) \n \n İşlemin İçin İlk Sayıyı Girebilirsin :");
			scanf("%d",&y);
			printf("Şimdilik İyi Gidiyorsun İşlemi Yazmaya Ne Dersin ? \n :");
			scanf("%s",&z);
			printf("\n\n TAMAM HARİKA GİDİYORSUN SON SAYIYI YAZAMAYA NE DERSİN ? \n :");
			scanf("%d",&q);

			if (z == '+' && y == 14 && z && 01)
			{
				printf("\n Sonuç : ŞİFREYİ ÇÖZDÜN LEYDİM HARİKA BİR ZEKAYA SAHİP. İYİ Kİ VARSIN VE SENİ SEVİYORUMM..");
				return 0;

			
			}
			else if(z == '+')
			{
				printf("\n LEYDİMİN SONUCU :  ",y+q);
			}
			else if(z == '-'){
				printf("\n LEYDİMİN İSTEDİĞİ SONUÇ :  ",y-q);
			}
			else if(z == '*'){
				printf("\n LEYDİMİN CEVABI :  ",y*q);
			}
			else if(z == '/'){

				printf("\n LEYDİMİN İSTEDİĞİ CEVAP :  ",y/q);
			}
			else{
				printf("\n LEYDİMİN BİR HATASI VAR... TEKRAR DENE...");
				return 0;
			}

		}
		else if(x == 2){
			printf("\n Böyle Bir Şeyle Zamanını Aldığım İçin Özür Dilerim... Umarım En Yakın Zamanda İyi Olursun");
			return 0;
		}
		else{
			printf("\n LEYDİMİN BİR HATASI VAR... TEKRAR DENE...");
		}
	}
	else{
		printf("\n LEYDİMİN BİR HATASI VAR... TEKRAR DENE...");
	}



	return 0;
}
