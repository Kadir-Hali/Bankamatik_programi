#include<stdio.h>
int main()
{
int tutar,bakiye=1000,islem;

printf("Islemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n\n\n");

printf("Islem seciniz:");
scanf("%d",&islem);

switch(islem)
{
	
	case 1:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Cekilecek tutar:");
		scanf("%d",&tutar);
		
		if (tutar>bakiye)
		{
			printf("Bakiye Yetersiz.\n");
		}
	
	bakiye-=tutar;
	printf("Bakiyeniz:%d",bakiye);
	break;
	
	case 2:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Yatiralacak tutar:");
		scanf("%d",&tutar);
		
	
	bakiye+=tutar;
	printf("Bakiyeniz:%d",bakiye);
	break;
	
	case 3:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Havale yapilacak tutar:");
		scanf("%d",&tutar);
		
		if(tutar>bakiye)
		{
			printf("Bakiye yetersiz.\n");
		}
		
	
	bakiye-=tutar;
	printf("Bakiyeniz:%d",bakiye);
	break;
	
	case 4:
		printf("Bakiyeniz %d\n",bakiye);
		
	break;
	
	case 5:
		printf("Kartiniz iade ediliyor.");
		
	break;
	
	default:
		
		printf("Gecersiz islem.");
	
	
	
	
}

	
	

	return 0;
}
