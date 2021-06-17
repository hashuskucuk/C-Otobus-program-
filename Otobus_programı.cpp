#include <iostream>
using namespace std;
double topcirom;
class otobus {
	private :
		string sehir;
		double bilet_ucreti;
		double yolcu_sayisi;
		// 3 adet deðiþkeni tanýmladýk
		public :
		
	otobus ()
	{};
	// parametresiz yapýcý fonksiyonu tanýmladýk
	otobus (string a,double b){
	
		sehir=a;
		bilet_ucreti=b;
		
	};
	
	void sehir_listesi_goster(){
		
		cout << sehir;
		cout <<'\t';
		cout <<'\t';
		cout <<bilet_ucreti ;
		cout <<'\n';
		}
	
	void sefer_bilgisi_doldur(otobus gelen_nesne,double kac_yolcu){
		sehir=gelen_nesne.sehir;
		bilet_ucreti=gelen_nesne.bilet_ucreti;
		yolcu_sayisi=kac_yolcu;
		
	};

	double ciro_hesapla(){
		double seferciro=	 bilet_ucreti*yolcu_sayisi;
		topcirom+=seferciro;
		return seferciro;
		}
	 
	 void sefer_listesi(){
	 	cout <<sehir<<" ";
	 	cout << yolcu_sayisi;
	 }
	 
}gelen_nesne;

int main()
{
	otobus sehirler[3]={otobus("ankara",80),
                         otobus ("izmir",100),
						 otobus("adana",90)	};
// sehir adý ve bilet ücreti için nesne dizisi oluþtu

otobus sefer_dizisi[30];
/* sefer bilgileri için dizi oluþturuldu GEREKLÝ VERÝLERÝ OLUÞTUR*/
	
	int sehir_no;
	int yolcular;
	int say ;
	int i;
	for (i=0;i<30;i++){

	yaz:
		//goto etiketi
		cout << "----------------------------------------------"<<endl;
		cout <<"Sehir No,	Sehir Adi,	Bilet Fiyati"<<endl;
		cout <<"-----------------------------------------------"<<endl;
		

	for(int j =0;j<3;j++){

	cout <<j;
	cout <<'\t';
	cout <<'\t';
	sehirler[j].sehir_listesi_goster();
	}	
		cout <<endl;

		cout << "Sefer yapilacak sehir no giriniz: ";
		cin>> sehir_no;

		cout<<'\n';
		if (sehir_no>=3||sehir_no<0){

	cout <<"Girilen numara icin sefer bilgisi bulunamadi!"<<endl;
	cout << "Lutfen ekranda belirtilen numaralardan birini giriniz!";
	cout<< endl;
	goto yaz;
}
		cout <<"kac yolcu bilet aldi: ";
		cin>>yolcular;


	sefer_dizisi[i].sefer_bilgisi_doldur(sehirler[sehir_no],yolcular);


		cout << i+1<<".sefer cirosu: "<<sefer_dizisi[i].ciro_hesapla();
		cout << endl;

etiket2:
	cout <<"Yeni giris yapmak ister misiniz: (E ya da H)";

	char cevap; cin >>cevap;
	if(cevap=='E'||cevap=='e')
	{say++;
	continue;
	}
	else if(cevap=='h'||cevap=='H')
	{
		break;
	}
	else {
		cout << "yanlis giris yapildi tekrar deneyiniz ";
		goto etiket2;
	}
}
	
		cout <<"-----------------------------------"<<endl;
		cout << "Yapilan seferler listesi: "<<endl;

	for (int i=0;i<=say;i++){

			cout <<i+1<<" -> ";
			sefer_dizisi[i].sefer_listesi();
			cout << " adet yolcu  "<<endl;
}
	cout <<"-----------------------------------"<<endl;

	cout << "toplam "<<say+1<<" adet sefer yapildi"<<endl;
	cout <<"toplam ciro: "<<topcirom;

	return 0;
}

