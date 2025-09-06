#include <iostream>
#include <cmath>
 //using namespace std;
 /*int main() {
	int s;
	cout << "bir sayi giriniz:" << endl;
	cin >> s;
	for (int i=1;i<=s;i++) {
		for (int k=1;k<=i;k++){
		cout << k;
	    } 
	    for (int m=i-1;m>0;m--) {
	    	cout << m;
	    
		} cout << endl;
	} */
	
 /*int main() {
	int sayi;
	cout << "lutfen bir sayi giriniz:";
	cin >> sayi;
	for (int i=sayi;i>0;i--) {
	     int m= i*(i-1);
	    cout << m*;
	}
} */
 
 /*int ust(int t,int u) {
	int sonuc=1; 
	for (int i=1;i<=5;i++){
	sonuc = sonuc*i;
    }
    return sonuc;
}
int main () {
	for (int i=1;i<=5;i++)
	cout << ust(2,i) << endl;
} */
 /*int main () {
	for (int i=1;i<=5;i++) {
	cout << pow(2,i) << endl; }
}*/
	
	/*int ust(int t,int u) {
	int sonuc=1; 
	for (int i=1;i<=5;i++){
	sonuc = sonuc*i;
    }
    return sonuc;
}
int main () {
	cout << ust(2,4)<< endl;
} */
 /*int ust(int t,int u) {
 int sonuc = 1;
 for (int i=1;i<=u;i++){
 	sonuc = sonuc*t;
 }
 return sonuc;
  
}
int main(){
	for (int i=1;i<=5;i++)
	  cout << ust(2,i) << " ";
} */
 // FONKS�YONLAR

 /*int f(int y) {
int sayi =1;
int k;
cout <<"k?";
 	cin >> k;
for (int i=1;i<=k;i++){
	 sayi= sayi*i;
	 
}
return sayi;
}
 int main() {
    int k;
 	f(k);
 	cout << f(k);
 } */
 
 
 /* RECURS�VE FONKS�YON
 int pow(int m,int n) {
 	int sonuc =1;
 	for (int i=1;i<=n;i++){
         sonuc =sonuc *m;
	 }
	 return sonuc;
 }
 
 int main () {
 	for (int i=1;i<=5;i++){
 		cout << pow(2,i) << endl; 
	 }
 } */

/*bool asalmi(int x) {
	for (int i=2;i<=x;i++){
	     if (x%i == 0) {
	     	return false;
		 }
	}
	return true;
}
int main (){
	//cout << asalmi(13);
	int c= 0;
	for (int i=2;c<20;i++) {
		if (asalmi(i)){
			cout << i<< endl;
			c++;
		}
	}
} */
 /*
int carpim (int x,int y){
	return x + carpim (x, y-1);
}
int main(){
	cout << carpim (3, 4);
} */
/*int carpim (int x, int y){
int sonuc = 0;
     for (int i=1;i<=y;i++){
     	sonuc = sonuc + x;
	 }
	 return sonuc;
} 
int main (){
	cout << carpim (3 , 4) << endl;
}  */

// RASTGELE  �al��mad�
 /*#include <math.h>
#include <ctime>
#include <stdlib.h>
int main (){
	int rg;
	srand ( time( NULL ) );
	rg = srand()%6+1; // 6 ile 1 aras�nda bir say� d�nd�r
	cout << rg << endl;
}*/

//	D�Z�LER
 /*int main() { 
	int a[5];
	for (int i=0;i<5;i++){
		cin >> a[i];
	}
	for (int i=0;i<5;i++){
		cout << a[i] << " ";
	}
} */
/*
int main () {
	int a[3]={5,6,7};
	cout << a[1];
} */
/* EN BUYUK VE EN KUCUK DEGER� BULMA
int main() {
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	// en buyuk
	int eb = a[0];
	for(int i=0;i<5;i++){
		if (a[i]>eb){
		eb = a[i];
	    }
    } 
	cout << "en buyuk:" << eb;
	// en kucuk deger
	int ek = a[0];
	for(int i=0;i<5;i++){
		if (ek>a[i]){
		ek = a[i];
	    }
    }
	cout << "en kucuk deger" << ek; 
} */
/*int main() {
	int tektoplam= 0;
	int tektoplamsayisi= 0;
	int cifttoplamsayisi= 0;
	int cifttoplam= 0;
	int a[5] = {3,6,5,8,7};
	for (int i=0;i<5;i++){
		if(a[i]%2 == 0){
			cifttoplam += a[i];
			cifttoplamsayisi ++;
	    }
		if(a[i]%2 != 0){
			tektoplam += a[i];
			tektoplamsayisi ++;
			
		}
	    }
		cout << "cift toplam:" << cifttoplam << endl << "cift toplam sayisi" <<  cifttoplamsayisi << endl;
		cout << "tek toplam :" << tektoplam << endl << "tek toplam sayisi" <<  tektoplamsayisi << endl;
		 

} */

// 2 BOYUTLU D�Z�LER 
/* //24 yazd�r�yor ?
 //00 
int main() {
	int a[2][2] = {(1,2),(3,4)} ;
	    for (int i=0;i<2;i++){
	    	for (int j=0;j<2;j++){
	    		cout << a[i][j] << "";
			}
			cout << endl;
		}
} */

/*int main () {
	int a[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			a[i][j] = i+j;
				
		}
	}
	for (int i=0;i<3;i++ ){
		for (int j= 0;j<3;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
		}
} */

// iki diziyi kar��la�t�r�p birinci dizinin ikinci dizinin  bir par�as� olup olmad���n� bulunuz

/*int main () {
	int a[3] = {1,2,3};
	int b[7] = {9,5,1,2,3,6,7};
	for (int i=0;i<3;i++){
		for (int k=0;k<6;k++){
			if (a[i] == b[k]) {
				cout << a[i] << " ";
		}
			
		}
	}
} */
 // MATR�SLERDE TRANSPOZ ALMA �SLEM�         //5 4 7  (yanl�s)       5 4 7 (dogru)    5 4 3
  /*int main () {                            //4 0 10                4 0 10           4 0 4
                                             //7 10 3                3 4 3            7 10 3
     int a[3][3] = {5,4,3,4,0,4,7,10,3} ;
     for (int i=0;i<3;i++){
     	for (int j=0;j<3;j++){
     		cout  << a[i][j] << " ";
		 }
		 cout << endl;
	 }
	 cout << endl;
	 for (int i=0;i<3;i++){
	 	for (int j=0;j<3;j++){
	 		a[i][j] = a[j][i];
	 		cout << a[j][i] << " ";
		 }
		 cout << endl;
	 }	
     } 3  */
// G�STER�C�LER (PO�NTERLAR)
/*int main (){
	int x=7;
	int *ptr;
	ptr = &x;
	cout << *ptr << endl; // 7
	cout << ptr << endl; // adres:1000
	cout << &x << endl; // adres: 1000
} */
//MATR�SLERDE TOPLAMA ��LEM�
/*int main() {
	int c[2][3];
	int a[2][3]={0,1,3,9,8,7};
	int b[2][3]={6,5,4,3,4,5};
	for (int i=0;i<2;i++){
		for (int j=0;i<3;j++){
			c[i][j] = a[i][j] + b[i][j];
	   }
	   cout << endl;
	}
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			cout << " " << c[i][j];
		}
		cout << endl;
	}
} */
/*
int main() {
	int a[2][3]={0,1,3,9,8,7};
	int b[2][3]={6,5,4,3,4,5};
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			a[i][j] = a[i][j]+b[i][j];
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
} */

/*int main () {
	cout << "lutfen 5 adet sayi  giriniz:" << endl;
	int *p;
	p=(int *)malloc(sizeof(int)*5);
	for (int = 0;i<5;i++){
		cin >> p[i];
	}
	for (int i=0;i<5;i++){
		cout << p[i];
	}
} */ 
/*int main() {
	int b =5;
	int a=10;
	int *p;
	p=&a;
	cout << *p << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << &a << endl;
}*/


/*int main(){
	int x[3]={1,2,3};
	int *p;
    p=&x[0];
	cout << p[1] << endl; //2
	p[1]=8;
	cout << p[1] << endl; //8
} */
#include <stdlib.h>
/*int main (){
	int a[3];
	int*p=(int*)malloc(sizeof(int)*3);
	
	p=&a[0];
	cout<<p[2]<< endl; //52
	cout << a[2] << endl; //52

} */
//Pointer kullanarak kullan�c�dan 5 say� al�n�z ve sonra al�nan say�lar� s�ras�yla ekrana geri bast�r�n�z
/*int main(){
	cout << "lutfen 5 adet say� giriniz:" << endl;
	int *p;
	p=(int*)malloc(sizeof(int)*5);
	for (int i=0;i<5;i++){
		cin >> p[i];
	}
	for (int i=0;i<5;i++){
		cout << p[i]<<endl;
	}
		for (int i=0;i<5;i++){
		cout << &p[i];
	}
} */

// FOKNS�YONLARIN D�Z�LER� PARAMETRE ALMASI
	/*int f(int*p){
		p[2]=10;
	}
	
int main (){
	int a[3]={1,2,3};
	int *p;
	p=a;
	cout << a[2] << endl; // 3
	f(p);
	cout << p[2] << endl; //10 
} */


/*int topla (int *a,int boyut) {
	int toplam= 0;
	for(int i=0;i<boyut;i++){
		toplam = toplam + a[i];
	}
	return toplam;
}
int main() {
	int a[3]={1,2,3};
	cout << "toplam:" << topla(a,3) << endl;
	
} */

/*int main (){
	int *m;
	int a[3]={1,2,3};
	m=&a[0];
	int toplam=0;
	for (int i=0;i<3;i++){
		toplam = toplam + m[i];
   }
   cout << toplam;
} */

/*int main () {
	int *m;
	int a[3]={1,2,3};
	m=&a[0];
	for (int i=0;i<3;i++){
		for (int j=0;j<=i;j++){
			cout << m[j];
		}
		cout << endl;
	}
} */


/*int main (){
	int carpim =1;
	for (int i=0;i<5;i++){
		cout << carpim << " ";
		carpim = carpim*2;
	}
} */

/*int ust(int t,int u){
	int sonuc =1;
	for (int i=1;i<=u;i++){
	sonuc = sonuc*t;
   }
   return sonuc;
}
int main (){
	for (int i=1;i<=5;i++){
	cout << ust(2,i) << endl;
    }
} */

/*int faktoriyel (int n){
	if (n == 1){
		return 1;
	}
	return n* faktoriyel(n-1);
}
int main (){
	for (int i=1;i<6;i++){
	cout << faktoriyel (i) << endl;
}
} */ 

// fonksiyon ile bir dizideki en buyuk ve en kucuk degeri d�ndurme

   
/*int f(int *a,int boyut){
	int eb= a[0];
	int ek= a[0];
	for (int i=0;i<boyut;i++){
		if(a[i]>eb){
			eb=a[i];
		}
	    if (ek>a[i]){
	        ek=a[i];
			}
	}
	cout << "en buyuk deger:" << eb << " " << "en kucuk deger:" << ek << endl;
    cout << " aradaki fark:" << eb-ek << endl;
	return eb- ek;
}
int main() {
	int a[5]={1,3,4,5,6};
	cout << f(a,5) << endl;
} */

// D�ZG�LER
/*int main(){
	char *s="evren";
	cout << s[0] << endl; // e
	cout << &s; // adresi verir
	char c[6]="evren";
	cout << c[5] << endl; // /'0' a denk geldi�inden hi� bi�i yazmaz
	s=c;
	cout << &c << endl;
	cout << s[4] << endl;
} */

#include <string.h>
/*int main(){
	char *c="evren";
	char *s="evren";
	c=s;
	cout << &s << endl;
	cout << &c << endl;
	if (c == s){
		cout <<"esitler" << endl; 
	}
	else{
		cout <<"esit degiller" << endl;
	}
	if (strcmp(c,s)==0){
		cout << "esitler" << endl;
	}
	else {
		cout <<"esit degiller" << endl;
	}
} */

// STR�NG FONKS�YONU YAZMA �al��mad� yeniden dene
 /*int boyut(char *s){
	int b=0;
    char c= s[0];
    while ( *c =! '/0'){
    	 c =s[++b];
	}
	return b;
}
int main (){
	char *s= "evren";
	cout <<  boyut(s) << endl; 
}  */

/*int main(){
	string s = "evren";
	cout << s.size() << endl; // 5
	s.append(" deneme");
	cout << s << endl;
	cout << s.substr(2,8) << endl; // ren dene 
	cout << s[1]; // v
} */
/*int main () {
	string s;
	char *p= "evren";
	s=p;
	cout << s.size() << endl;
	cout << s.append("deneme") << endl;
	cout << s[1];
} */

// POL�NDROME 

/*int main(){
	cout << "lutfen bir kelime giriniz:" << endl; 
	char c[100];
	cin  >> c;
	char *p,*q;
	p=c;// p nin ilk deger olmas�n� saglar
	q=c;
	while (*q == '/0'){
		q++;
	} 
	q--; // dizginin son eleman�
	bool palindrome = true;
	while (q>p){
		if(*p!=*q){
			palindrome = false;
		}
		p++;
		q--;
	}
	if (palindrome)
	   cout << "giriilen dizgi bir palindromdur" << endl;
	else
	cout << "girilen dizgi bir palindrom de�ildir" << endl;
} */


 /*//Ak�� stream aa�n�flar� ve dosyalar
vekt�re bak �ablonlara bak ge�en haftak� konu ile ilgili
vekt�r dinamik bir dizidir
dizi ile ilgili sorularda vekt�r kullan�l�y�r
BTK akademi ye de bakabililrsin dersler i�in 
verileri bilgisayar kapand�p�nda gitmesin istiyoruz 
ge��i dosyalar ram �zerine
kal�c� dosyalar belleke kaydedil�r
s�ral� eri�imli kay�t dosyalar� �rne�in kasaetler biitkten sonrada ba�a sarabillyorsun

inputaouputstream iostream input olarak veriyi klavyeden al�p output olarak ekranda g�ster�yordu

C++Ak�� (Steram) s�n�flar�
ofstream (outputfile):dosya yazma i�lemlerinde kullan�l�r
 ifstream      fstream 
 
buradan soru kes�n ��kacsak

ios::int okuma  modunda a�ar
ios::out dosyay� yazma modunda a�ar e�er bi�i varsa da siler
ios::ate dosyay� a�arken imleci dosyan�n sonuna yerle�tirir
ios::trunc e�er dosya varsa i�eei�ini sili� yeni dosya a��y�r


Dosya emniyet seviyeleri

0: normal dosya
1: salt okumam dosya dosyada de�ii�ikl�k yap�lmas�na z�izin vermaz
2: sakl� dosya  dosyan�n dizinde g�r�nmez olmas�n� sa�lar
4: sistem dosyas�
8:ar�iv dosyas�  
	dosyaOlusturmaOrnegi.open("Ornek.txt",ios::out , 2) dosyay� gizli yapar */
//#include <fstream>	
using namespace std;
/*int main(){
	//dosya yazma
	ofstream dosyaYaz("Yaz.txt",ios::out);
	dosyaYaz << "Merhaba,bu bir test mesajidir" <<endl;
	dosyaYaz.close();
	
	//dosya yazma
	ifstream dosyaOku("Yaz.txt",ios::in);
	string okunan;
	while (getline(dosyaOku,okunan)){
		cout << okunan << endl;
	}
	dosyaOku.close(); //ram de yer kaplamas�n diye close ile kapad�k
	return 0;
	} */
	
/* 	seekg dosya okuma i�aret�isi bel�rl� bir konuma al�r
	seekp dosya yazma i�aret�isni belirli bir konuma al�r
	ios::beg ba�lang��
	ios:: */

/*int main(){
	ofstream dosyaIsleme; //dosya yazma i�in nesne olu�turur
	char alfabe[]="ABCDEF"; //cahar dizisi olu�turur
	dosyaIsleme.open("alfabe.txt",ios::out);
	for(int i=0;i<6;i++){
		dosyaIsleme<<alfabe[i]; // dosyaya 6 adet eleman yazd�r�r
	}
	dosyaIsleme.close(); //a��lan dosya kapat�l�r
	return 0;
}*/
 /*int main(){
	char karakter;
	fstream dosyaIsleme;
	dosyaIsleme.open("alfabe.txt",ios::in | ios::out);
	
	dosyaIsleme.seekp(2L,ios::beg); //3.karakterin konumuna gider C
	dosyaIsleme<< 'X'; // c yerine x yazar
	
	dosyaIsleme.seekg(-2L,ios::cur); //2 karakter geri gider B
	dosyaIsleme>>karakter; // B karakterini okur
	
	dosyaIsleme.seekp(-2L,ios::end); // sondan 2.karaktere gider
	dosyaIsleme << karakter; //E yerine B yazar
	
	dosyaIsleme.close(); // dosya kapat�r
	return 0;
	
} */

// ASAL MI DE��LM� KONTROLU
/*bool asalmi(int x){
	for (int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	//cout << asalmi(19) << endl; // 1 degeri yazar
	int x=13;
     for(int i=2;i<x;i++){
         if (asalmi(x)){
         	cout<< i << endl;
		 }
	 }
} */
/*int main (){
	int sayi =1;
	for (int i=1;i<=5;i++){
		sayi = sayi*i;
	}
}*/
//1 den 20 ye kadar b�t�n �ift say�lar� ekrana yazd�ran kod
/*int main(){
for (int i=1;i<20;i++){
	if(i%2==0){
		cout << i<<" ";
	}
}
}*/
//Kullan�c�n�n konsoldan girdi say�n�n fakt�riyelini hesaplayan kod yaz�n�z
/*int main(){
int sayi;
cout << "lutfen bir sayi giriniz:"<< endl;
cin >> sayi;
int sonuc =1;
for (int i=1;i<=sayi;i++){
	sonuc = sonuc*i;
}
cout << sonuc;
}*/
/*int main(){
	for(int i=1;i<4;i++){
		for (int k=1;k<=i;k++){
			cout << i ;
		}
		cout << endl;
	}
}*/
// SW�TCH CASE 
/*int main(){
	int sayi;
	cout <<"sayi:";
	cin >> sayi;
	switch(sayi){
		case 1:
			cout << "seciminiz 1" << endl;
		default:
			cout << "1 sayisni giriniz" ;
			break;
	}
}*/
//FONKS�YONLAR 
/*int alanhesapla(int x,int y){
   int	alan = x*y;
   return alan;
}
int main(){
	int x=3;
	int y=2;
	cout << alanhesapla(3,2);
} */

//herhangi bir sayi d�nd�rmeyen fonksiyonlara void denir
/*void mesaj(){
	cout << "merhaba";
}
int main(){
	mesaj();
	retun 0;
}*/

/*void ekranamesajver(string mesaj){
	cout << mesaj ;
}
int main(){
	ekranamesajver("hello");
}*/

//F�BONACC� YAPIMI
/*int main(){
	int a=1;
	int b= 1;
	int c= a+b;
	cout << "1" << endl;
	cout << "1" << endl;
	for(int i=1;i<=5;i++){
		c=a+b;
		cout << c << endl;
		a=b;
		b=c;
	}
} */
/*int main (){
	int x= 2;
	int sayi=1;
	for (int i=1;i<9;i++){
		cout << sayi <<" ";
		sayi = sayi *2;
	}
} */

// �ARPIM TABLOSU YAPIMI
/*int main(){
	for (int i=1;i<5;i++){
		for (int k=1;k<5;k++){
			cout << i*k <<" ";
		}
		cout << endl;
	}
}*/

/*int main(){
	for (int i=4;i>0;i--){
		for (int k=4;k>0;k--){
			cout << i*k <<" ";
		}
		cout << endl;
	}
}*/

//YILDIZ YAPIMI 
/*int main(){
	for(int i=1;i<4;i++){
		for (int k=1;k<=i;k++){
		cout << "*";
		}
		cout << endl;
	}
} */

//TERS YILDIZ YAPIMI
/*int main(){
	int bosluk;
	for (int i=5;i>0;i--){
		for (int k=1;k<=i-1;k++){
		     cout << " ";
		 }
		for(int m=5;m>=i;m--){
			cout << "*";
		}
		cout << endl;
	}	
} */
/*int main(){
	int bosluk;
	for (int i=5;i>0;i--){
		for (int k=1;k<=i-1;k++){
		     cout << "*";
		 }
		for(int m=5;m>=i;m--){
			cout << " ";
		}
		cout << endl;
	}	
} */
/*int main(){
	int bosluk;
	for (int i=5;i>0;i--){
		for (int k=5;k>i;k--){
		     cout << " ";
		 }
		for(int m=1;m<i;m++){
			cout << "*";
		}
		cout << endl;
	}	
}*/
/*int main(){
	for(int i=1;i<5;i++){
		for (int k=1;k<i;k++){
			cout << " ";
		}
		for (int m=1;m<5-i+1;m++){
			cout<< "*";
		}
		cout << endl;
	}
} */


/*int main(){
	for (int i=1;i<=3;i++){
		for(int k=1;k<=(5-i)/2;k++){
			cout << " ";
		}
		for (int m=1;m<=2*i-1;m++){
			cout << " *";
			
		}
		cout << endl;
	}
} */
//FONKS�YONLAR
/*int f(int x){
	return x+2;
}
int main(){
	cout << f(5)<< endl;
} */

//fonksiyonlar ile fakt�reiyel hesab�
 /*f(int y){
	int sayi=1;
	for (int i=1;i<=y;i++){
		sayi = sayi*i;
        cout << sayi << endl; 
	}
}
int main (){
	cout << f(5);
} */

/*int f(int y){
	int carpim=1;
	cout << "1" << " ";
	for (int i=1;i<y;i++){
		carpim = carpim*2;
		cout << carpim << " ";	
	}
	return 0;
}
int main(){
	cout << f(5) << endl;
} */
 
// RECURS�VE FONKS�YON (�ZY�NEL� FONKS�YON)
/*int faktoriyel(int y){
	if (y==1){
		return 1;
	}
	return y*faktoriyel(y-1);
}
int main(){
cout << faktoriyel(5) << endl;
} */

/*int main(){
	for (int i=1;i<5;i++){
		cout << pow(2,i) << " ";
	}
} */

/*bool asalmi(int x){
	for(int i=2;i<x;i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	cout << asalmi(19) << endl; // ekranda 1 yazar dogru anlam�nda
	for (int i=2;i<13;i++){
		if (asalmi(i)){
			cout << i << endl;
		}
	}
}*/
//recursive fonksiyon ile �arpma i�lemi
/*int f(int y,int x){
	if(x==0){
		return 0;
	}
	return y+f(y,x-1);
}
int main (){
	cout << f(3,5);
} */
//RASTGELE SAYILAR
#include <ctime>
/*using namespace std;
int main(){
	int rg;
	srand(time(NULL));
	rg=rand()%6 +1; // 6 ile 1 aras�nda say� d�nd�r�r
	cout << rg << endl;
	rg= rand()%2; //0 veya 1 gelir
	cout << rg << endl;
	rg=rand()%100;
	cout << rg << endl; //15
}*/

// D�Z�LER
//dizilerde ne b�y�k ve en k���k de�eri bulma
/*int main (){
int a[5]={1,2,3,4,5};
int ek=a[0];
int eb=a[0];
   for(int i=0;i<5;i++){
   	  if(a[i]>eb){
   	  	eb=a[i];
		 }
	 if(a[i]<ek){
	 	ek=a[i];
	 }
   }
   cout << "eb:" << eb << "ek" << ek;
} */

/*int main (){
int a[5]={1,2,3,4,5};

int eb,eb2,eb3=a[0];
   for(int i=0;i<5;i++){
   	   if(eb<a[i]){
   		eb3=eb2;
   		eb2=eb;
   		eb=a[i];
	   }
	   else if(eb2<a[i]){
	   	eb3=eb2;
	   	eb2=a[i];
       }
	   else if(eb3<a[i]){
	   	eb3=a[i];
	   }
   }
   cout << "en buyuk 3 deger:"<<" " << eb <<" "<<eb2<< " " << eb3;
} */

//Tek say�lar�n toplam� 
/*int main(){
	int a[5]={1,2,3,4,5};
	int tektoplam =0;
	for (int i=0;i<5;i++){
		if(a[i]%2==1){
			tektoplam = tektoplam +a[i];
		}
	}
	cout << "tek toplam:" << tektoplam;
}*/

// en buyuk ve en kucuk cift say�lar�n ortalamas�
/*int main(){
int a[6]={1,2,3,4,5,6};
     int eb,ek=a[0];
     for (int i=0;i<6;i++){
     	if(a[i]%2==0){
     		if(a[i]>eb){
     			eb= a[i];
			 }
		 }
		 if(a[i]%2==1){
		 	if(ek>a[i]){
		 		ek=a[i];
			 }
		 }
     	
	 }
	 cout << "en buyuk cif sayi ve en kuvuk tek sayi ortalamas�:" << (eb+ek)/2 ;
} */

// TOPLAMA OYUNU
//kulllan�c�dan 5 say� al�n Bu say�lardan 4 tanesi ile �retilebilecek en buyuk ve en kucuk degerleri ekrana bast�r�n
/* ek -1 oluyor nedenine bak int main(){
	int a[5];
	int eb,ek=a[0];
	cout << "5 adet sayi giriniz:";
	for (int i=0;i<5;i++){
		cin >> a[i];
	}
	int toplam =0;
	for (int i=0;i<5;i++){
	    toplam = toplam + a[i];	
	}
	for(int i=0;i<5;i++){
		if(eb<a[i]){
			eb=a[i];
		}
		if(ek>a[i]){
			ek= a[i];
		}
	}
	cout << "toplam:" << toplam <<endl<< "eb:" << eb << endl << "ek:"<< ek <<endl << a[0] <<endl;
	cout << "uretilebilecek en buyuk deger:" << toplam-ek <<endl<< "uretilebilecek en kucuk deger:" << toplam-eb;
} */

// 2 boyutllu diziler
/*int main(){
	int a[2][2]={1,2,3,4};
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			cout <<a[i][k]<< " "; 
     	}
     	cout << endl;
	}
}*/
/*int main(){
	int a[2][2]={1,2,3,4};
	for(int i=1;i>=0;i--){
		for(int k=1;k>=0;k--){
			cout <<a[i][k]<< " "; 
     	}
     	cout << endl;
	}
}*/
//ZAR ATMA OYUNU
/*int main(){
	int n;
	cin >> n;
	srand(time(NULL));
	int skor=0;
	int b[n];
	int a[n];
	for(int i=0;i<n;i++){
		int z1=rand()%6+1;
		int z2=rand()%6+1;
		a[i]=z1;
		b[i]=z2;
		if(z1>z2){
			skor ++;
		}
		if(z2>z1){
			skor --;
		}
	}
	for(int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
	cout<< endl;
	for (int i=0;i<n;i++){
		cout << b[i] << " ";
	}
	cout << endl;
	if (skor>0){
		cout << "1 kazandi" << endl;
	}
} */

// MATR�SLERDE TRANSPOZ ALMA ��LEM�
/*int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			b[k][i]=a[i][k];
       }
	}
	for (int i=0;i<3;i++){
		for (int k=0;k<3;k++){
			cout << b[k][i];
		}
		cout << endl;
	}
} */
// MATR�S{LERDE TOPLAMA
/*int main(){
	int a[2][2]={1,2,3,4};
	int b[2][2]={5,6,7,8};
	int c[2][2];
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			c[i][k]=a[i][k]+b[i][k];
			cout << c[i][k] << " ";
		}
		cout << endl;
	}
}*/

//G�STER�C�LER (PO�NTERS) 
/*int main(){
	int a=1;
	int *p;
	p=&a;
	cout << *p << endl;
	cout << p << endl;
	cout << &a << endl;
	cout << &*p << endl;
	cout << &p;
}*/
//D�Z�LER�N G�STER�C�LERDE KULLANIMI
/*int main(){
	int x[3]={1,2,3};
	int *q;
	q=&x[0];
	cout << &q[2]<< endl; // 10 adrs
	cout << &q[1]<< endl; // 4 adres
	cout << *q<< endl; 
	q=x;
	q[2]=8;
	cout << &q[2] << endl; // 10 adres
	cout << q[2] << endl <<endl; //8
} */
// RAM DE YER TUTUP O YERLERE DE�ER ATAMA
/*int main(){
	int *p=(int*)malloc(sizeof(int)*3);
	p[1]=3;
	p[2]=6;
	cout << p[2]<< endl;
	cout<< &*p << endl;
	cout << &p<< endl; 
	cout << &p[2] << endl;
	cout << *(p+1); // 3 yazar
}*/
#include <stdlib.h>
// PO�NTER KULLANARAK KULLANICIDAN 5 SAYI OKUYUNUZ VE SONRA OKUNAN SIRAYLA GER� EKRANA BASTIRINIZ
/*int main (){
	cout << "lutfen 5 adet sayi giriniz:"<< endl;
	int *p;
	p=(int*)malloc(sizeof(int)*5);
	for (int i=0;i<5;i++){
		cin >> p[i];
	}
	for (int i=0;i<5;i++){
		cout << p[i] << endl;
	}
	
	cout << &*p << endl;
	cout << &p << endl;
}*/
//PO�NTER AR�TMET���
/*int main(){
	cout << "l�tfen 5 adet sayi giriniz:" << endl;
	int *p;
	p=(int*)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>> *(p+i);
	}
	for (int i=0;i<5;i++){
		cout << *(p+i);
	}
}*/
//FONKS�YONLARIN D�Z�LER� PARAMETRE ALMASI
/*int f(int *p){
	p[2]=10;
}
int main(){
	int a[3]={1,2,3};
	int *p;
	p=a;
	cout << a[2] << endl;//3
	f(p);
	cout << a[2] << endl;//10
}*/
//B�R FONKS�YONDA EN B�Y�K VE EN K���K DE�ER�N FARKINI D�ND�RME
/*int f(int *a,int boyut){
	int eb=a[0];
	int ek=a[0];
	for (int i=0;i<boyut;i++){
		if(ek>a[i]){
			ek=a[i];
		}
		if(eb<a[i]){
			eb=a[i];
		}
	}
	return eb -ek;
}
int main(){
	int a[9]={5,3,7,33,44,11,5,-2,0};
	cout << f(a,9)<< endl;
}*/
//D�ZG�LER
/*int main(){
	char *s="evren"; // stringlerin i�eri�i de�i�tirilemez
	cout << s << endl; // evren
	cout << s[2] << endl; // r
	char c[6]= "evren";
	cout << c << endl;
	cout << c[6] << endl;//  \0 a denk gelir yani hi� bi�i yazmaz
} */

// STR�NG FONKS�YONU YAZMA
/*int boyut (char *s){
	int b=0;
	char c=s[0];
	while(c!= '\0'){
		c=s[++b];
	}
	return b;
} //
int main(){
	char *s="evren";
	char c[6]="evren";
	cout << boyut (s) << endl;
	cout << boyut (c) << endl;
} */
//STR�NG T�P
/*int main(){
	string s;
	char *p="evren";
	s=p;
	cout << s.size() << endl; //5
	cout << s.append("deneme") << endl;//evrendeneme yazar
	cout<< s.substr(2,8)<< endl; //rendenem yazar ?	
}*/
/*KULLANICIDAN 12L�K S�S�TEMDEN SAYI ALIP 24L�K S�STEME �EV�REN KODU YAZINIZ
  07:05:02PM 
  �IKTI: 19:05:02 */
/* YEN�DEN DENE OLMADI int main(){
	cout << "lutfen 12lik sistemden bir sayi giriniz:"<< endl;
	char s[11];
	cin >>  s;
	if (s[8]== 'P'){
	   char x[3];
	   x[0]=s[0];
	   x[1]=s[1];
	   x[2]='\0';
	   int saat=0;
	   saat = saat + (x[0]-48)*10;
	   saat = saat + x[1]-48;
	   cout << "saat:"<< endl;	
	}
	else {
		s[8]='\0';
		cout << s << endl;
	}
} */

//PAL�NROME
/*int main(){
	cout << "lutfen bir kelime giriniz:"<< endl;
	char c[100];
	cin>> c;
	char *p,*q;
	p=c;// ilk de�er olmas�n� sa�lar
	q=c;
	while(*q!='\0'){
		q++;// dizgi sonu
	}
	q--;//dizginin son eleman�
	bool palindrome=true;
	while(q>p){
	if(*p!=*q){
		palindrome = false;
	}
	p++;
	q--;
	}
	if (palindrome){
		cout << "girilen dizi bir palindromdur."<< endl;
	}
	else {
		cout <<"girilen dizi bir palindrom degildir."<< endl;
	}	
}*/
/* // artt�rma azaltma
int main()
{
	int a=5,b=3;
//	int result = a*b++; //��kt� 15
    int result = a*++b;//20 yazar	
	cout<< result;	
}*/
/*int main(){
	int x=5;
	//int y= x++;
	//cout <<y;// 5 yazar
	int y= ++x;
	cout<<y;// 6 yazar 
}*/
/*int main(){
	int a=1;
	int b= --a;
	cout <<a<<b; // 00 yazar
}*/
/*int main(){
	int a=1;
	int b= a++;
	cout <<a<<b;//21 yazar
}*/
/*int main(){
	int a=1;
	cout << a--<<a;//10
}*/
/*int main(){
	int a=1;
	cout << --a<<a; //00 yazar
}*/

//Say� basamaklar�
/*int main()
{
	int a;
	cout <<"3 basamakl� de�erini giriniz";
	cin>>a;
	int basamak;
	while(a>0)
	{
		int basamak = a%10;
		a= a/10;
		cout<<basamak;
	}
}*/
// say� basamaklar�n� diziye atama
 /*int main(){
	int sayi;
	cin>>sayi; // 123
	cout <<endl;
	int dizi[3];
	int i=0;
	while(sayi>0){
		dizi[i]=sayi%10;
		sayi=sayi/10;
		i++;
    }
    
    for(int i=0;i<3;i++){
    	cout<<dizi[i];
	}// 321 
	
	for(int i=2;i>=0;i--){
		cout<<dizi[i]; //123
	}
}*/

//BREAK VE CONTUN�E
/*int main(){
	for(int i=0;i<5;i++){
		if(i == 3) break;
		cout<<i; //012 yazar
	}
	for(int k=0;k<6;k++){
		if(k==4) continue;
		cout << k; //01235 yazar
	}
}*/

/*int main(){
	int a=10;
	for(int i=1;i<3;i++){
		cout << a++ <<endl;//10  11 yazar
	}
}*/
/*int main(){
	int a=10;
	for(int i=1;i<3;i++){
		cout << ++a <<endl;//11 12 yazar
	}
}*/
/*int main(){
	int number,sum=0;
	do{
		cout<<"Bir sayi girin";
		cin>>number;
		sum += number;
	}while(number != 0);
	cout << "Toplam:"<< sum << endl;
	return 0;
}*/


// D�Z�LER
/* // �al��mad� yeniden dene
int main(){
	int dizi[4][4];
	for(int i=0;i<4;i++){
		for(int k=0;k<4;k++){
			dizi[i][k]= i+k;
		}
	}
}*/

//KARAKTER D�Z�S�
/*int main(){
	char isim[]="elif";
	cout<<isim[3]; // f yazar isim[4]=\0 d�r
}*/

//D�Z� YAZDIRMA
/*void diziyazdir(int dizi[],int boyut){
	for(int i=0;i<boyut;i++){
		cout<<dizi[i];
	}
}
int main(){
	int dizi[5]={1,2,3,4,5};
	diziyazdir(dizi,5);
	return 0;
}*/

//D�Z�LERDE ARANAN ELEMANI BULMA
/*void aranan(int dizi[],int boyut,int ara){
	for(int i=0;i<boyut;i++){
		if(dizi[i]==ara){
			cout<<ara<<"bulundu";
		}
	}
}
int main(){
	int dizi[3]={1,2,3};
	aranan(dizi,3,2);
    return 0;
}*/

//D�Z�LERDE SIRALAMA
/*void sirala(int dizi[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int minindex =i;
		for(int j= i+1;j<boyut;j++){
			if(dizi[j]<dizi[minindex]){
				minindex = j;
			}
		}
		swap(dizi[minindex],dizi[i]);
	}
}
int main(){
	int dizi[4]={4,9,7,3};
	sirala(dizi,4);
	for(int k=0;k<4;k++){
		cout<<dizi[k];
	}
}*/

/*int main(){
	int matris[4][4];
	for(int i=0;i<4;i++){
		for(int k=0;k<4;k++){
			matris[i][k]=i+k+1;
		}
	}
	for(int i=0;i<4;i++){
		for(int k=0;k<4;k++){
			cout<<matris[i][k];
		}
		cout<<endl;
	}
}*/

//D�Z�Y� TERS �EV�RME
/*void terscevir(int dizi[],int boyut){
	int k = boyut-1;
	for(int i=0;i<boyut/2;i++){
		swap(dizi[i],dizi[k]);
		--k;
	}
}
int main(){
	int dizi[5]={1,2,3,4,5};
	terscevir(dizi,5);
	for(int m=0;m<5;m++){
		cout<<dizi[m];
	}
}*/

/*void terscevir(int dizi[],int boyut){
	int k = boyut-1;
	int i=0;
	int c= dizi[i];
	for(int i=0;i<boyut/2;i++){
		dizi[i]=dizi[k];
		dizi[k]=c;
		--k;
	}
}
int main(){
	int dizi[5]={1,2,3,4,5};
	terscevir(dizi,5);
	for(int m=0;m<5;m++){
		cout<<dizi[m];
	}
}*/

//KEL�MEN�N PAL�NDROM OLUP OLMADI�ININ KONTROL�
/*void palindrom(char kelime[],int boyut){
	int k=boyut-1;
	int m=0;
	for(int i=0;i<boyut/2;i++){
		if(kelime[i]!=kelime[k]){
			++m;
		}
		--k;
	}
	if(m>0){
		cout<<"ifade palindrom degil";
	}
	if(m==0){
		cout<<"ifade palindrom";
	}
	
}
int main(){
	char kelime[]="kayak";
	palindrom(kelime,5);
}*/

//D�Z�DEK� EN B�Y�K VE EN K���K ELEMANI BULMA
/*void enbuyukvekucuk(int dizi[],int boyut){
	int eb=dizi[0];
	for(int i=1;i<boyut;i++){
		if(eb<dizi[i]){
			eb=dizi[i];
		}
	}
	int ek=dizi[0];
	for(int k=1;k<boyut;k++){
		if(ek>dizi[k]){
			ek=dizi[k];
		}
	}
	cout<<eb - ek;
}
int main(){
	int a[4]={1,2,3,4};
	enbuyukvekucuk(a,4);
}*/

/*
int main(){
	int dizi[4]={1,2,3,4};
	int eb = dizi[0];
	for(int i=1;i<4;i++){
		if(eb<dizi[i]){
			eb=dizi[i];
		}
	}
	cout<<eb;
}*/

// Bir karakter dizisi (string) verildi�inde, bu diziyi ters �eviren bir fonksiyon yaz�n
/*void terscevir(char str[],int boyut){
	int n= boyut;
	for(int i=0;i<boyut/2;i++){
		char temp = str[i];
		str[i]=str[n-i-1];
	    str[n-i-1]=temp;
	}
	cout<<str;
}
int main(){
	char str[]="elifi";
	terscevir(str,5);
}*/

// Bir tam say� dizisi ve bir hedef say� verildi�inde, toplamlar� hedef say�ya e�it olan t�m benzersiz �iftleri bulun.
/*void toplam(int dizi[],int boyut,int sayi){
	for(int i=0;i<boyut-1;i++){
		for(int m=1;m<boyut;m++){
			if(dizi[i]+dizi[m]==6){
				cout<<dizi[i]<<dizi[m];
			}
		}
	}
}
int main(){
	int dizi[6]={1,5,4,2,3,3};
	toplam(dizi,6,6);
}*/

//PO�NTERLAR
/*int main(){
	char *p= "elif";
	cout<<p;//elif yazar
	cout<<*p;// e yazar
}*/

// D�Z�Y� PO�NTERA �EV�RME
/*void pointeracevir(int *dizi,int boyut){
	for(int i=0;i<boyut;i++){
		dizi[i];
	}
	cout<<&dizi[0];
}
int main(){
	int dizi[5]={1,2,3,4,5};
	pointeracevir(dizi,5);
}*/


/*int main(){
 int matris[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
 int (*p)[3] = matris;
 cout << p[1][2]; // 6'y� yazd�r�r
}*/

//D�NAM�K D�Z� OLU�TURMA VE S�LME
/*int main(){
	int *ptr =new int(10);
	cout << "Dinamik olarak tahsis edilen deger: " << *ptr<< endl;
}*/

//D�Z�DEK� HER ELEMANI KEND� KARES� �LE DE���T�RME
/*void degistir(int *dizi,int boyut){
	for(int i=0;i<boyut;i++){
		dizi[i]=i*i;
	}
	for(int k=0;k<boyut;k++){
		cout<<dizi[k]<<endl;
	}
}
int main(){
	int dizi[5]={1,2,3,4,5};
	degistir(dizi,5);
}*/

/*int main(){
	cout << "lutfen bir kelime giriniz:"<< endl;
	char c[100];
	cin>> c;
	char *p;
	char *q;
	p=c;// ilk de�er olmas�n� sa�lar
	q=c;
	while(*q!='\0'){
		q++;// dizgi sonu
	}
	q--;//dizginin son eleman�
	bool palindrome=true;
	while(q>p){
	if(*p!=*q){
		palindrome = false;
	}
	p++;
	q--;
	}
	if (palindrome){
		cout << "girilen dizi bir palindromdur."<< endl;
	}
	else {
		cout <<"girilen dizi bir palindrom degildir."<< endl;
	}
}*/
#include <string>
/*int main(){
string a;
cout << "bir string girin:";
cin>>a;
//boyut kontrol�
cout << a.size() << endl;  // merhaba yaz�nca 7 ��k�yor 
}*/
//KULLAN�C�DAN 3 ADET STR�NG �FADE ALINIR VE HER B�R�N�N BOYUTU 5 KARAKTER OLUP OLMADI�I KONTROL ED�L�R.SONUNDA STR�NG�N ��ER��� TEM�ZLEN�T VE PROGRAM SONLANIR
/*int main(){
	string a;
	a.reserve(3);
	cout << "5 karakter boyutunda 3 adet string giriniz:";
    int degiskensayisi=0;
    while(degiskensayisi<3){
    	cout << endl << "string ifadeyi giriniz:";
    	cin >> a;
    	if(a.length()==5){
    		cout << "ifade kabul edildi.";
    		degiskensayisi++;
		}
		else{
			cout << "lutfen 5 karakter i�eren bir ifade giriniz.";
		}
	}
	a.clear();
	}*/
	
/*int main(){
	string a="merhaba";
	cout <<"boyut:"<< a.size() << endl;
	cout << a.capacity()<< endl;
	a.clear();// metni temizler
	cout << "bos mu?"<< a.empty() << endl;//bos mu kontrol� yapar ekranda do�ru anlam�nda 1 yazar
	string c="merhaba";
	string b="hello";
	string c = string c + string b;
	cout << string c << endl;
}  */  
// KULLANICIDAN ALINAN B�R METN� HER KEL�MEN�N �� SIRALAMASINI KORUYARAK TERSTEN YAZDIRAN B�R C++ PROGRAMI YAZINIZ 
// KOD �ALI�MADI
/*int main(){
	string metin; " ";
	string tersmetin=" ";
	string kelime=" ";
	cout << "bir metin giriniz:";
	cin >> metin;
	metin= metin +" ";// son kelimeyi de alabilmek i�in eklenir
	for (int i=0;i<metin.length();i++){
		if(metin[i]==' '){
			tersmetin=kelime + " " + tersmetin;
			kelime=" ";
			cout << kelime << endl;
		}
		else {
			kelime = kelime + metin [i];
		}
	}
	cout << "ters metin:" << tersmetin << endl;
	return 0; 
} */
/*int main(){
	string a= "elif inalkac";
	cout << a << endl;
	cout << a.length()<< endl;
	for(int i=0;i<=a.length()-1;i++){
		cout << a[i];
	} cout << endl;
	for (int i=a.length()-1;i>=0;i--){
		cout << a[i];
	}
}*/
/*int main(){
	string a="elif inalkac";
	string ters= " ";
	string kelime =" ";
	for (int i=0;i<a.length();i++){
		kelime = a[i];
		if(a[i]==' '){
			ters = kelime +ters;
		}
		cout << ters;
	}
} */

// KULLANICIDAN ALINAN B�R C�MLEDEK� HER KEL�MEN�N UZUNLU�UNU EKRANA YAZDIRAN KODU YAZINIZ
/*int main(){
	string cumle=" ";
	string kelime =" ";
	cout << "bir cumle giriniz:"<< endl;
	getline(cin,cumle);
	for (char harf;cumle){
		if(harf==' '){
			cout << "kelime uzunlugu:"<< kelime.length()<< endl;
			kelime = " ";
		}
		else {
			kelime = kelime + harf;
		}
	}
	return 0;
}*/
#include <iostream>
#include <string>

/*int main() {
    std::string cumle;

    // Kullan�c�dan c�mleyi al
    std::cout << "Bir cumle giriniz: ";
    std::getline(std::cin, cumle);

    // Bo�luklara g�re c�mleyi par�ala
    size_t baslangic = 0;
    size_t bosluk = cumle.find(' ');

    while (bosluk != std::string::npos) {
        // Kelimenin uzunlu�unu hesapla ve ekrana yazd�r
        std::cout << "Kelime uzunlu�u: " << bosluk - baslangic << std::endl;

        // Bir sonraki kelimeye ge�
        baslangic = bosluk + 1;
        bosluk = cumle.find(' ', baslangic);
    }

    // Son kelimenin uzunlu�unu hesapla ve ekrana yazd�r
    std::cout << "Son kelime uzunlu�u: " << cumle.length() - baslangic << std::endl;

    return 0;
}*/
/*int main(){
	int k=0;
string a="merhaba d�nyadan selamlar";
for(int i=0;i<=a.length();i++){
	cout << a[i];
	k++;
}
cout << "stringin uzunlugu:"<< k;
}*/
/*int main(){
	int k=0;
	string a="merhaba dunyadan selamlar";
	for (int i=0;i<a.length();i++){
		k++;
		if(a[i]== ' '){
			cout<<"kelime uzunlugu="<<k-1;
			k=0;
		}
		cout << endl;
	}
}*/

//KULLANICIDAN B�R SAYI ALARAK BU SAYIYA E��T UZUNLUKTA RASTGELE HARFLER ��EREN B�R STR�NG OLU�TURAN VE BU STR�NG� EKRANA YAZDIRAN KODU YAZIN
/*int main(){
	int sayi;
	cout<<"bir sayi giriniz:";
	cin>>sayi;
	string a;
	srand(time(NULL));
	char k;
	string olusturulanmetin=" ";
	for (int i=0;i<sayi;i++){
		char k =rand()%26 + a ;
		olusturulanmetin = olusturulanmetin + k;
	}
	cout << "rastgele olusturulan metin:" << olusturulanmetin;
}  */

//KULLANICIDAN MET�NDEN EN UZUN KEL�MEY� BULUP EKRANA YAZDIRAN KODU BULUN
/*int main(){	
    string girilenmetin;
	string enuzunkelime=" ";
	string kelime;
	int enuzunuzunluk=0;
	cout <<"bir metin giriniz:"<< endl;
	getline(cin,girilenmetin);//kullan�c�adan t�m metni okur
	int metinuzunlugu=girilenmetin.length();
	int kelimebaslangic=0;
	int kelimeuzunluk=0;
	for(int i=0;i<=metinuzunlugu;i++){
		//E�er metin veya kelime sonu ise kelimeyi degerlendir
		if(girilenmetin[i] == ' ' || i== metinuzunlugu){
			if(kelimeuzunluk>enuzunuzunluk){
				enuzunuzunluk = kelimeuzunluk;
				enuzunkelime=girilenmetin.substr(kelimebaslangic,kelimeuzunluk);
			}
			kelimebaslangic= i+1; // yeni kelimenin baslang�c�n� d�zenle
			kelimeuzunluk=0;//kelime uzunlupunu s�f�rla
		}else{
			kelimeuzunluk++;//kelimenin uzunlu�unu artt�r�r
		}
	}
	cout << "en uzun kelime:" << enuzunkelime << endl;
	return 0;
} */

//KULLANICININ G�RD��� B�R MET�NDEKi HER HARF�N KA� KERE GE�T���N� BULAN KODU YAZINIZ
/*#include <cctype>
int main(){
	string metin;
	int harffrekanslari[26]={0};//ingiliz alfabaesi i�in 26 harf
	cout << "bir metin giriniz:";
	getline(cin,metin);
	for(char harf:metin){ // hata veriyor
		if(isalpha(harf)){
			harf=tolower(harf);//b�y�k harfleri k���k harfe �evirir
			harffrekanslari[harf-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		if(harffrekanslari[i]>0){
			cout << char(i+'a')<< ":"<<harffrekanslari[i]<< endl;
		}
	}
	return 0;
} */ 
/*int main(){
	string a="elif";
	cout << a.at(0) << endl; // e
	cout << a[0] << endl;// e
	string x= "dun";
	string b;
	b = a+x;
	cout << b<< endl;// elifdun yazar
	cout << a.append("muh")<< endl;// elifmuh
//	cout << a.push_back('!') << endl; // hata verdi nedenine bak
	cout << a.assign("muhendis")<< endl; // stringin i�erii�i  de�i�tit direk muhendis yazar
	cout << a.insert(0,"m") << endl; // mmuhendis yazar insert belirli bir konuma string veya karakter ekler
	cout << x.erase(0,1)<< endl; // un yazar
	cout << a.replace(0,3,"degis")<< endl;
}*/

// �ABLONLAR
/*int main(){
double x=5.3;
double y=10.6;
cout << max(x,y) << endl; // 10.6 yazar
}*/
//STANDART �ABLON K�T�PHANES� (STL)
  //VECTOR:dizideki �gelere diziler �zerinden eri�ilebilir ancak boyutlar� �al��ma zaman�nda de�i�ebilir
 
/*#include <vector>
int main(){
	vector<int>v; // int t�r�nden bir vekt�r olu�turuluyot
	//��E EKLEME
	v.push_back(10);// vekt�re 10 degelrini ekliyor
	v.push_back(20);
	
	//��EYE ER���M
	cout << "ilk oge:"<< v.front() << endl;// vekt�r�n ilk �gesine (front) eri�im sa�lan�yor ve yazad�r�l�yor 10 yazar
	cout << "ikinci oge:"<< v.at(1) << endl;// vekt�r�n ikimci �gesine indis kullanarak eri��m uygulan�y�r ve yazd�r�l�yor v.at(1) de kullan�labilir di
}  */ 

/*int main(){
	int a=20;
    int b=15;
    cout << a << " ";
    cout << b << " ";
    cout << endl;
    if(a/2>b/2){
    	cout << b << " " ;
    	cout << a<< " ";
    	cout << endl;
    	a= a/2;
    	b=b/2;
    	
    	if(a>b){
    		cout << "*";
    		cout << endl;
		}
	}
	return 0;
}*/
/*int main(){
	for(int i=1;i<5;i++){
	    for (int m=0;m<(5-i)/2;m++){
			cout << "  ";
		}
	    for (int k=1;k<=i;k++){
	    	cout << k << " ";
		}

		for (int j=1;j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
}
}*/

// STR�NGLER
/*int main(){
	string a="elif";
	a.insert(4,"hello");
	cout << a; //elifhello yazar
	a.assign("dunya");
	cout << a << endl;// dunya yazar
	a.push_back('!');
	cout << a << endl;// dunya! yazar
	a.append("su");
	cout << a << endl;// dunya!su yazar
	cout << a.at(0)<< endl; // d;
	cout << a.empty()<< endl; // 0 d�nd�
	cout << a[2] << endl;// n
    a.assign("zeynep");
    cout << a.erase(0,2) << endl;// ynep yazar
    string b="zeynep";
    cout << b.erase(0,2) << endl;// ynep yazar
    cout << b.replace(0,3,"elif") << endl; // elifp yazar	
}*/
/*int main(){
	string a;
	cout << "kelime girini:";
	getline(cin,a);
	if(a.length()<5){
		cout <<"kelime kabul edildi" << endl;
	}
	else{
		cout << "kelime kabul edilmedi"<< endl;
	}	
}*/
// Kullan�c�dan 3 tane string al�n ve herbirinin boyutunun 5 karakter olup olmad���n� kontrol edin
/*int main(){
	string a;
	for(int i=1;i<4;i++){
		cout << "kelime giriniz:";
		getline(cin,a);
		if(a.length()==5){
			cout << i << ".kelime kabul edildi"<< endl;
		}
		else{
			cout <<i<<".kelime kabul edilmedi"<< endl;
		}
	}
}*/
 // Kullan�c�dan 3 tane string al�n ve herbirinin boyutunun 5 karakter olup olmad���n� kontrol edin.spnunda al�nanstringlerin i�eri�ini temizleyin
/* int main(){
 	string a;
 	a.reserve(5);
 	cout << "5 karakter boyutunda 3 string ifadeyi giriniz:";
 	int k=0;
 	while(k<3){
 		cout << endl <<k+1<< ".kelimeyi giriniz:" << endl;
 		cin >> a;
 		if(a.length()==5){
 			cout <<"kelime kabul edildi.";
 			k++;
		 }
		 else{
		 	cout <<"lutfen 5 karakter i�eren ifade giriniz.";
		 }
	 }
	 a.clear();
     return 0;
 }*/
/*int main(){
	string a="elif";
	a.clear();
	cout<< a;// ekranda hi�bi�i yazmaz
}*/
// bir metindeki sesli harfleri bulma
/* for k�sm�nda hata verdi kod
int main(){
	string metin;
	cout <<"metin giriniz"<< endl;
	getline(cin,metin);
	int seslisayisi;
	for(char c : metin){
		switch(tolower(c)){
			case 'a';
			case 'e';
			case 'i';
			case 'o';
			case 'u';
			   seslisayisi ++;
			   break;
		}
	}
	cout << "sesli harf say�s�:" << seslisayisi << endl;
	retun 0;
}*/

// bir metin i�erisinde aranan metni bulma
/*int main(){
	string anametin,arananmetin;
	cout << " ana metni giriniz:";
	getline(cin,anametin);
	cout << "aranan metni giriniz:";
	getline(cin,arananmetin);
	size_t bulunan=anametin.find(arananmetin);
	if (bulunan != '\0'){
		cout <<"aranan metin bulundu"<< endl;
	}
	else{
		cout <<"aranan metin bulunamadi" << endl;
	}
	return 0;
}*/
// Kullann�c�dan al�nanbir c�mledeki 
// STANDART �ABLON K�T�PHANES� (STL)
//VECTOR
#include <vector>
/*int main(){
	vector<int>v;// int t�r�nden bir vekt�r olu�turuluyor
	 
	 //�ge ekleme
	 v.push_back(10);// vekt�re 10 de�erini ekliyot
	 v.push_back(20); // vekt�re 20 de�erini ekliyot
	 
	 // �geye eri�im 
	 cout << "ilk �ge" << v.front() <<endl;// front ilk �geye yani 10 say�s�na eri�im sa�lar
	 cout << "ikinci �ge" << v.at(1)<< endl;// vekt�r�n ikici �gesin eeri�im sa�lan�yor yani 20 yazr
} */
/* kod �al��mad� nedenine bak int main(){
	vector <int>vec={1,2,3,4,5};// bir tamsay� vekt�r� olu�turuluyor ve 1 den 5  e kadar de�erlelrle ba�lat�l�yor
	
	// vekt�rdeki de�erleri dola�mak i�in bir d�ng�
	for (auto it=vec.begin();it != vec.end();++it){
		cout << *it <<" ";// her bir �geyi ekrana yazd�r�yor "it" bir iterat�r ve "it" o anki �genin de�erini temsil ediyor
		
	}
}*/

//AKI� STERAM SINIF VE DOSYALAR
#include <fstream>
/*int main(){
	ofstream dosyaolusturma;
	dosyaolusturma.open("ornekdosya.txt",ios::out);// dosyay� yazma modunda a�ar
	return 0;
} */ //yaz�lan kodu silsem bile genede belgeler k�sm�nda duruyor

/*int main(){
	//dosya yazma
	ofstream dosyayaz("yazburaya.txt",ios::out);
	dosyayaz <<"merhaba bu bir test mesajidir" << endl;
	dosyayaz.close();
	//dosya okuma
	ifstream dosyaoku("yazburaya.txt",ios::in);
	string okunan;
	while(getline(dosyaoku,okunan)){
		cout << okunan << endl;
	}
	dosyaoku.close();
}*/

//SINIF MEVCUDUNUN SINAV PUANLARINI DOSYAYA YAZMA
/*int main(){
	ofstream dosyaornek;
	dosyaornek.open("ornekkk.txt",ios::out);
	int puan;
	 for(int i=0;i<10;i++){ //iterasyon �al���r ��renci say�s� kadar
	 	cout << "ogrenci puanini giriniz:";
	 	cin >> puan;// her iterasyonda bir ��rencinin notu grilir
	 	cout << endl;
	 	dosyaornek<< puan <<endl;//puan dosyaya yaz�l�r
	 }
     dosyaornek.close(); 
	 return 0;	
}*/
//metin dosyas�na karakter dizisi yazma
/*int main(){
	ofstream dosyaisleme;//dosya yazma i�in nesne olu�turulur
	char alfabe[]="ABCDEF";// char dizisinden olu�ur
	dosyaisleme.open("alfabedosyasi.txt",ios::out);
	for(int i=0;i<6;i++){
		dosyaisleme << alfabe[i];//dosyaya 6 eleman yaz�l�r
		cout << alfabe [i];
	}
	dosyaisleme.close();
}*/

//doya i�eri�ini de�i�tiren ve okuyan program
// alfabedosyasi.txt dosyas�ndaki bazi karaketer de�i�ikleikleri yap�l�r ve okuma i�lemi ger�ekle�ir

/*int main(){
	char karakter;
	fstream dosyaisleme;
	dosyaisleme.open("alfabedosyasi.txt",ios::in | ios::out);
	
	dosyaisleme.seekp(2L,ios::beg);//3.karakterin konumuna gider (C)
	dosyaisleme << 'X';// C yerine X yazar
	
	dosyaisleme.seekp(-2L,ios::cur);// 2 karakter geri gider (B)
	dosyaisleme >> karakter;// B karakterini okur
	
	dosyaisleme.seekp(-2L,ios::end);//sondan 2.karaktere gider (E)
	dosyaisleme <<'Y';// E yerine B yazar
	
	dosyaisleme.close();
	return 0;
	}*/

#include <fstream>
/*int main(){
	//DOSYA YAZMA
	ofstream dosyayaz("yaz.txt",ios::out);
	dosyayaz <<"merhaba bu bir test mesaj�d�r."<<endl;
	dosyayaz.close();
	
	//DOSYA OKUMA
	ifstream dosyaoku("yaz.txt",ios::in);
	string okunan;
	while(getline(dosyaoku,okunan)){
		cout<<okunan << endl;
	}
	dosyaoku.close();
	return 0;
}*/
//SINIF MEVCUDUNUN PUANLARINI DOSYAYA YAZMA
/*int main(){
	ofstream dosyaornek;
	dosyaornek.open("dosya.txt",ios::out);
	int puan;
	for(int i=1;i<=10;i++){
		cout << "ogrenci notunu girini:";
		cin >> puan;
		cout<< endl;
		dosyaornek << puan << endl;
	}
	dosyaornek.close();
	return 0;
}*/

// MET�N DOSYASINA KARAKTER D�Z�S� YAZMA
/*int main(){
	ofstream dosyaisleme;
	char alfabe[]="ABCDEF";
	dosyaisleme.open("alfabe.txt",ios::out);
	for (int i=0;i<6;i++){
		dosyaisleme << alfabe[i];
	}
	dosyaisleme.close();
	return 0;
}*/
/*int main(){
	char karakter;
	ofstream dosyaisleme;
	dosyaisleme.open("alfabe.txt",ios::in | ios::out | ios::trunc);
	
	dosyaisleme.seekp(2L,ios::beg); //3. karakterin konumuna gider
	dosyaisleme<<'X';// C yerine x yazar 
	// trunc oldu�undan kaynakl� C yerinde x yazar di�er yerlerde hi�bi�i yazmaz
	
	dosyaisleme.seekp(4L,ios::beg);
	dosyaisleme<<'y';// E yerinde y yazar
	// 3. karakterde x 5.karakterde y yazar	
}*/

/*int main(){
	char karakter;
	fstream dosyaisleme;
	dosyaisleme.open("alfabedosyasi.txt",ios::in | ios::out);
	
	dosyaisleme.seekp(2L,ios::beg);//3.karakterin konumuna gider (C)
	dosyaisleme << 'X';// C yerine X yazar
	
	dosyaisleme.seekp(-2L,ios::cur);// 2 karakter geri gider (B)
	dosyaisleme >> karakter;// B karakterini okur
	
	dosyaisleme.seekp(-2L,ios::end);//sondan 2.karaktere gider (E)
	dosyaisleme <<'Y';// E yerine B yazar
	
	dosyaisleme.close();
	return 0;
	}*/
//B�RDEN 10 A KADAR DOSYALARI OLU�TURUN VE EKRANA YAZDIRIN
/*int main(){
	ofstream dosyasayi("sayilar.txt");
	if(!dosya.is_open()){
		return 1;//dosya a��lmasa aprogram� sonland�r
	}
	for(int i=1;i<=10){
		dosya << i<< "\n";
	}
	dosyasayi.close();
	return 0;
}*/

//B�R DOSYA ��ER��� OKUYUN VE EKRANA YAZDIRIN
/*int main(){
	ifstream dosyasayi("sayilar.txt");
	string satir;
	
	if(!dosyasayi.is_open()){
		return 1;// dosya a��lmazsa
	}
	while(getline(dosyasayi,satir)){
		cout << satir << endl;// her satira eleman yazd�r�r
	}
	dosyasayi.close();
	return 0;
	
} *///ekrana yaz�lmad� yeniden bak

// B�R DOSYADAN 3.SATIRI OKUYUP EKRANA YAZMA
/*int main(){
	ifstream doyasayi("sayilar.txt");
	string satir;
	int satirno=0;
	if(!dosyasayi.is_open()){
		return 1;//dosya a��lmazasa program� sonland�r�r
	}
	while(getline(dosyasayi,satir)){
		++satir;
		if(satirno==3){
			cout << satir << endl;
			break;
		}
	}
	dosyasayi.close();
	retun 0;
}*/

// Bir dosyadan i�eri�i okuyun ve ekrana yaz�d�rn
/*int main(){
	ofstream sayilardosyasi;
	sayilardosyasi.open("rakam.txt",ios::out);
	cout << "sayi giriniz";
	int sayi;
	for (int i=1;i<=10;i++){
		cin >> sayi;
		cout << endl;
		sayilardosyasi << sayi << endl;
	}
	sayilardosyasi.close();
	return 0;
}*/

/*int main(){
	ifstream sayilardosyasi("rakam.txt");
	string satir;
	while(getline(sayilardosyasi,satir)){
		cout << satir << endl;
	}
	sayilardosyasi.close();
	return 0;
}*/

// DOSYADAN BEL�RL� B�R SATIRI OKUMA
/*int main(){
	ifstream sayilardosyasi("rakam.txt");
	string satir;
	int satirno=0;
	while(getline(sayilardosyasi,satir)){
		++satirno;
		if(satirno==3){
			cout<< satir << endl;
			break;
		}
	}
	sayilardosyasi.close();
	return 0;
}*/

// Dosyaya rastgele eri�im ile yazma
/*int main(){
	fstream dosya;
	dosya.open("metin.txt",ios::out | ios::in);
	dosya << "merhaba d�nya \n";
	dosya.close();
	return 0;
}*/
// Dosyada kelime de�i�tirme
/*int main(){
	ifstream dosyaoku("metin.txt");
	stringstream buffer;
	buffer << dosyaoku.rdbuf();
	dosyaoku.close();
	string icerik=buffer.str();
	size_t pozisyon=icerik.find("eski");
	if(pozisyon != string:npos){
		icerik.replace(pozisyon,4,"yeni");
	}
	ofstream dosyayaz("metin.txt");
	dosyayaz << icerik;
	dosyayaz.close();
	return 0;
	} */
	
/*int main(){
	ifstream dosya("metin.txt");
	string kelime;
	if(!dosya.is_open()){
		cout << "dosya acilmadi";
		return 1; // dosya a��lmazsa program� sonland�r
	}
	while(dosya >> kelime){
		if(kelime.size()==5){
		cout << kelime;
	    }
	}
}*/
//ZAR ATMA OYUNU
/*int main(){
	int n;
	cin>>n;
	srand(time(NULL));
	int skor=0;
	int a[n];
	int b[n];
	for(int i=1;i<=n;i++){
		a[i]=rand()%6+1;
		cout << "1.sayi "<<a[i] <<" ";
		cout << endl;
		b[i]=rand()%6+1;
		cout <<"2.sayi"<< b[i] << " ";
		cout << endl;
		if(a[i]>b[i]){
			skor++;
		}
		if(b[i]>a[i]){
			skor--;
		}
	}
	if(skor>0){
		cout << "1kazandi" << endl;
	}
	else if(skor<0){
		cout <<"2kazandi"<< endl;
	}
	else {
		cout<<"berabere"<<endl;
	}
}*/

//ZAR ATMA OYUNU
/*int main(){
	int n;
	cout <<"kac kere zar atilacagini giriniz"<<endl;
	cin>>n;
	srand(time(NULL));
	int skor=0;
	int z1[n];
	int z2[n];
	for(int i=1;i<=n;i++){
		z1[i]=rand()%6+1;
		z2[i]=rand()%6+1;
		if(z1[i]>z2[i]){
			skor ++;
		}
		if(z2[i]>z1[i]){
			skor --;
		}
	}
	cout << "z1=";
	for (int i=1;i<=n;i++){
		cout << z1[i] << " ";
	}
	cout << endl;
	cout<<"z2=";
	for(int i=1;i<=n;i++){
		cout << z2[i] << " ";
	}
	cout << endl;
	if(skor>0){
		cout<< "z1 kazandi!"<<endl;
	}
	else if(skor<0){
		cout<<"z2 kazandi!"<< endl;
	}
	else{
		cout<<"berabere!"<< endl;
	}
}*/

//SAAT D�N���M�
//kullan�c�dan 12lik bir sistemde say� al�p 24l�k sisteme �eviern kodu yaz�n�z
/*int main(){
	cout <<"lutfen 12lik sistemde bir sayi giriniz" << endl;
	char s[11];
	cin >> s;
	if(s[8]=='P'){
		char x[3];
		x[0]=s[0];
		x[1]=s[1];
		x[2]='\0';
		int saat =0;
		saat = saat + (x[0]-48)*10;
		saat = saat + x[1]-48;
		cout << "saat"<< saat+12<<endl;
	}
}*/
/*int main(){
	cout <<"lutfen 12lik sayi sisteminde bir saat giriniz"<< endl;
	char s[11];
	cin>>s;
	if(s[8]=='P'){
		char x[3];
		x[0]=s[0];
		x[1]=s[1];
		x[2]='\0';
		int saat =0;
		saat = saat + (x[0]-48)*10;
		saat =saat + x[1] -48;
		saat = saat +12;
		s[0]=(char)48 + saat/10;
		s[1]=(char)48  + saat%10;
		s[8]='\0';
		cout << s << endl;
	}
}*/
//D�ZG� OYUNU
// aabbcccdd ��kt� olarak bc verir
/*char *f(char *s){
	int i=0;
	char c= s[i];
	if (c=='\0')
	   return s;
	bool kontrol =false;
	while (c!='\0'){
		char c1=s[i+1];
		if(c==c1&&i==0){
			s=&s[i+2];
			kontrol = true;
		}
		else if(c==c1){
			kontrol = true;
			while(s[i]!='\0'){
				s[i]=s[i+2];
				i++;
			}
			s[i]='\0';
		}
		i++;
		c=s[i];
	}
	if(kontrol == false)
	    return s;
	else
	    return f(s);
}
int main(){
	cout <<"lutfen bir dizgi giriniz"<< endl;
	char c[100];
	cin >> c;
	cout << f(c);
} */
//PAL�NDROM KONTROL�
/*int main(){
	cout <<"lutfen bir kel�me girirnz"<< endl;
	char c[100];
	cin>> c;
	char *p,*q;
	p=c;
	q=c;
	while(*q!=0){
		q++;//dizgi sonu \0 var
	}
	q--;// dizginin son eleman�
	bool palindrome =true;
	while(q>p){
		if(*p!=*q){
			palindrome = false; // bir tanae bile e�it olmad�klar� durum olursa palindrome false olur
		}
		p++;
		q--;
	}
	if(palindrome) // palindrom true ise buraya girecek
	cout<<"girilen dizgi bir palindromdur"<< endl;
	else
	   cout <<"girilend dizgi bir palindrom degildir"<< endl;
}*/
//WH�LE D�NG�S�
/*int main(){ // 2nin katlar�n� yazd�rma
	int sonuc=2;
	int  i=1;
	while (i<5){
		sonuc = sonuc *2;
		cout << sonuc << " ";
		i++;
	}
}*/
/*int main(){// 3 e b�l�nen sayilar� yazd�rma
    int i=3;
    while(i<=15){
    	if(i%3==0){
    		cout << i <<" ";
		}
		i++;
	}
}*/
//FOR D�NG�S�
/*int main(){ //kullanicini girfi�i sayini fak�triyel�ni alan kod
    int n;
    cin>>n;
    cout<< endl;
    int faktoriyel=1;
    for(int i=1;i<n;i++){
    	faktoriyel= faktoriyel*i;
	}
	cout << faktoriyel;
}*/
//YILDIZ YAPIMI
/*int main(){
	for(int i=1;i<=5;i++){
		for(int k=1;k<=i;k++){
			cout << k <<" ";
		}
		cout << endl;
	}
}*/
/*int main(){
	for(int i=5;i>0;i--){
		for(int k=5;k>=i;k--){
			cout <<k<<" ";
		}
		cout << endl;
	}
}*/
/*int main(){
	for(int i=1;i<5;i++){
		for(int k=5;k>i;k--){
			cout << " ";
		}
		for(int m=1;m<=i;m++){
			cout << m;
		}
		cout << endl;  
	}
}*/
/*int main(){
	for(int i=1;i<5;i++){
		for(int k=1;k<=i;k++){
			cout << k << " ";
		}
		for (int m=1;m<i;m++){
			cout << m << " ";
		}
		cout << endl;
	}
}*/
//F�BONACC� EKRANDA YAZDIRMA
/*int main(){
	int a=1;
	int b=1;
	int c= a+b;
	for (int i=0;i<8;i++){
		c=a+b;
        a=b;
        b=c;
        cout << c << " ";
        
	}
}*/
//�ARPIM TABLOSU YAPIMI
/*int main(){
	for (int i=1;i<5;i++){
		for (int k=1;k<5;k++){
			cout << i*k << " ";
		}
		cout << endl;
	}
}*/
//FONKS�YONLAR
// Fonksiyonlar ile fakt�riyel hesaplama
/*int f(int x){
	int faktoriyel=1;
	for (int i=1;i<=x;i++){
	faktoriyel = faktoriyel *i;
	cout << faktoriyel << " ";
	}
	return faktoriyel;
}
int main(){
	cout << f(5) << endl;
}*/
//RECURS�VE FONKS�YON �LE FAKTOR�YEL HESABI
/*int f(int x){
	if(x==1){
		return 1;
	}
	return x*f(x-1);
}
int main(){
	cout << f(5) << endl;
}*/

/*int f(int x,int y){
     if(y==1){
     	return 2;
	 }
	 return x*f(x,y-1);  
}
int main(){
	cout << f(2,5)<< endl;
}*/
/*bool asalmi(int x){
	for(int i=2;i<x;i++){
		if(x%i==0){
			return false ;
		}
	}
	return true;
}
int main(){
	cout << asalmi(19)<< endl;
	for (int i=3;i<20;i++){
		bool asalmi(i);
		if (true){
			cout << i << " ";
		}
	}
}*/
//D�Z�LER
/*int main(){
	int x[5]={1,2,3,4,5};
	int eb=x[0];
	for (int i=0;i<5;i++){
		if(x[i]>eb){
			eb= x[i];
		}
	}
	cout << eb ;
}*/
// en buyuk 3 sayiyi bulma
/*int main(){
	int a[4]={1,2,3,4};
	int eb1=a[0];
	int eb2=a[0];
	int eb3=a[0];
	for (int i=0;i<4;i++){
		if(a[i]>eb1){
			eb3=eb2;
			eb2=eb1;
			eb1= a[i];
		}
		else if(a[i]>eb2){
			eb3=eb2;
			eb2=a[i];
		}
		else{
			eb3=a[i];
		}
	}
	cout << "en buyuk 3 sayi"<< eb1 << eb2 << eb3 << endl;
}*/
/*int main(){
	int a[5]={4,2,5,25,8};
	int eb=a[0];
	int ek=a[0];
	for (int i=0;i<5;i++){
		if(a[i]%2==0){
			if(a[i]>eb){
				eb=a[i];
			}
			if(ek>a[i]){
				ek=a[i];
			}
		}
	}
	cout << eb << "  " << ek;
}*/
// 2 BOYUTLU D�Z�
/*int main(){
	int a[2][5]={1,2,3,4,5,6,7,8,9,10};
	for (int i=0;i<2;i++){
		for(int k=0;k<5;k++){
			cout << a[i][k] <<" ";
		}
		cout << endl;
	}
}*/
/*int main(){
	int a[3]={1,2,3};
	int b[7]={5,4,1,2,3,9,8};
	int aboyut=3;
	int bboyut=7;
	for(int i=0;i<bboyut;i++){
		bool esit = true;
		for(int j=0;j<aboyut;j++){
			if(a[j]=b[i+j]){
				esit=false;
				break;
			}
		}
		if(esit){
			cout<<"alt eleman� vard�r ve"<< i << "den baslar"<< endl;
		}
	}
}*/
//MATR�SLERDE TRANSPOZ ALMA ��LEM�
/*int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			b[k][i]=a[i][k];
		}
	}
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			cout << b[i][k]<<" ";
		}
		cout << endl;
	}
}*/
//G�STER�C�LER (PO�NTERS)
/*int main(){
	int a[3];
	int *p=(int*)malloc(sizeof(int)*3);
	p[2]=6;
	cout << p[2];
}*/
/*int main(){
	int *p=(int*)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>> p[i];
	}
	for (int i=0;i<5;i++){
		cout << p[i];
	}
}*/ 
// D�Z�LER 
//se�mlei s�ralama fonksiyonu
/*void secmelisirala(int dizi[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int minindex=i;
	for(int j=i+1;j<boyut;j++){
		if(dizi[j]<dizi[minindex]){
			minindex = j;
		}
	}
	swap(dizi[minindex],dizi[i]);
    }
}
int main(){
	int sayilar[]={64,25,12,22,11};
	secmelisirala(sayilar,5);
	//siralanm�� diziyi yazd�rma
	for(int i=0;i<5;i++){
		cout << sayilar[i] << " ";
	}
	cout << endl;
	return 0;
}*/

/*void secmelisirala(int dizi[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int minindex=i;
	for(int j=i+1;j<boyut;j++){
		if(dizi[j]<dizi[minindex]){
			minindex = j;
		}
	}
	swap(dizi[minindex],dizi[i]);
    }
}
int main(){
	int sayilar[]={64,25,12,22,11};
	secmelisirala(sayilar,5);
	//siralanm�� diziyi yazd�rma
	for(int i=0;i<5;i++){
		cout << sayilar[i] << " ";
	}
	cout << endl;
	return 0;
}*/

/*void terscevir(char str[]){
	int n=strlen(str);
	for(int i=0;i<n/2;i++){
		//ilk ve son karakterdi degistirir
		char temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
}
int main(){
	char str[]="Merhaba Dunya";
	terscevir(str);
	cout << "ters cevrilmis hali:"<< str << endl;
	return 0;
}*/
/*int main(){
	char s[]="merhaba dunya";
	for(int i=12;i>=0;i--){
		cout << s[i];
	}
}*/

// fonksiyonu k adet eleman sa�a d�nd�ren fonksiyon yaz�n�z
/*void rotateright(int arr[],int n,int k){
	k=k%n;
	int temp[n];
	for (int i=0;i<n;i++){
		temp (i+k)
	}
}*/
// D�Z� ���NDEK� SAYILARI K���KTEM B�Y��E SIRALAMA FONKS�YON �LE
/*void sirala(int dizi[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int minindex=i;
		for(int k=i+1;k<boyut;k++){
			if(dizi[k]<dizi[minindex]){
				minindex=k;
			}
		}
		swap(dizi[minindex],dizi[i]);
	}
}
int main(){
	int a[5]={11,34,12,56,87};
    sirala(a,5);
	for(int i=0;i<5;i++){
		cout << a[i]<< " ";
	}
}*/
//L�NEER ARAMA FONKS�YONU
/*void arama(int sayi[],int boyut,int aranan){
	for(int i=0;i<boyut;i++){
		if(sayi[i]==aranan){
			cout << "eleman bulundu";
		}
	}
}
int main(){
	int sayi[]={1,2,3,4,5};
	arama(sayi,5,2);
	cout << arama << endl;
}*/

//KABARCIK SIRALAMA
/*void siralama(int dizi[],int boyut){
	for(int i=0;i<boyut -1;i++){
		for(int k=i+1;k<boyut;k++){
			if(dizi[k]<dizi[i]){
				swap(dizi[i],dizi[k]);
			}
		}
	}
}
int main(){
	int sayi[]={11,34,54,12};
	siralama(sayi,4);
	for(int i=0;i<4;i++){
		cout << sayi[i]<< " ";
	}
}*/
//MATR�SLERDE  TOPLAMA bu kodda hata var gibi
/*int main(){
	int a[3][3]={(1,2,3),(4,5,6),(7,8,9)};
	int toplam=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			toplam=toplam + a[i][j];
		}
	}
	cout << "matrislerin toplam�:"<< toplam << endl;
	return 0;
}*/

// bir stirng dizisi verilidi�inde bunu tersine �eviren fonksiyon yaz�n�z
/*void terscevir(char a[],int boyut){
	for(int i=boyut-1;i>=0;i--){
		cout << a[i] ;
	}
}
int main(){
	char b[]="Merhaba Dunya";
    terscevir(b,13);
	cout << terscevir << endl; 
}*/
//B�R TAMSAYI D�Z� VR B�R HEDEF SAYI VER�LD���NDE TOPLAMLARI HEDEF SAYIYA E��T OLAN T�M BENZERS�Z TAMSAYI ��FTLER�N� BULUNUZ
/*int f(int dizi[],int boyut){
	int hedef =9;
	for(int i=0;i<boyut;i++){
		for(int k=i+1;k<boyut;k++){
			if(dizi[i]+dizi[k]==hedef){
				cout << dizi[i] << dizi[k] << endl;
			}
		}
	}
}
int main(){
	int sayi[]={2,7,11,15,6,3,4,5};
	int hedef=9;
	f(sayi,8);
	cout << f ;
}*/
//D�Z�LER VE PO�NTERLAR
/*int main(){
int dizi[5]={1,2,3,4,5};
int *p=&dizi[0];
cout << *(p+2)<< endl; // 3 yazar
cout << *p << endl; // 1 yazar
cout << &p << endl;
cout << &*p << endl;
cout << &p[0] << endl;
cout << p[0] << endl;
}*/
//D�Z�LER VE FONKS�YONLAR
/*void yazdir(int *p,int boyut){
	for (int i=0;i<boyut;i++){
		cout << p[i];
	}
}
int main(){
	int a[4]={1,2,3,4};
	int *b=a;
	yazdir(b,4);
	cout << yazdir << endl;
}*/
//�OK BOYUTLU D�Z�LER ���N PO�NTER KULLANILAB�L�R
/*int main(){
int matris[3][3]={1,2,3,4,5,6,7,8,9};
int (*p)[3]=matris;
cout << p[1][3]<< endl;
cout << &p[1][3]<< endl;
}*/
/*int main(){
int *p = new int;//dinamik bellek olarak bellek tahsis edilir
*p=5;
cout << p<< endl;// alttaki ile ayn� adres de�erini verir
cout << &*p<< endl;
cout << *p << endl; // 5 yazar
delete p; // bellek iade edilir
}*/
//D�NAM�K D�Z� OLU�TURMA VE S�LME
/*int* diziolustur(int boyut){
	int* yenidizi=new int(boyut);
	//de�erleri ata
	return yenidizi;
}
int main(){
	diziolustur(5);
	cout << diziolustur;
}*/
//PO�NTER TANIMLAMA VE KULLANIMI
/*int main(){
	int sayi=10;
	int *p=&sayi;
	cout << *p << endl; // 10 yazar
	cout << p << endl;// adres de�erini verir
}*/

//PO�NTER VE FONKS�YONLAR
/*void arttir( int *p){
	*p=*p+1;
}
int main(){
	int sayi=5;
	arttir(&sayi);
	cout<< "arttirilmis deger:" << sayi << endl;
}*/
//D�NAM�K BELLEK Y�NET�M�
/*int main(){
	int *p= new int(10);
	cout << "dinamik olarak tahsis edilen deger:"<< *p<< endl;
}*/
//PO�NTERLAR VE D�Z�LER
/*int main(){
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	for(int i=0;i<5;i++){
		cout << &p[i]<< endl;
	}
}*/
//PO�NTERLAR VE �OK BOYUTLU D�Z�LER
/*int main(){
	int a[2][3]={1,2,3,4,5,6};
	int (*p)[3]=a;
	for(int i=0;i<2;i++){
		for(int k=0;k<3;k++){
			cout<<p[i][k]<< " ";
		}
		cout << endl;
	}
}*/

/*int main(){
	int a[2][3]={1,2,3,4,5,6};
	int *p;
	for(int i=0;i<2;i++){
		for(int k=0;k<3;k++){
		p=&(a[i][k]);
		cout << *p << " ";
		}
		cout << endl;
	}
}*/
// HER ELEMANI KEND� KARES� �LE DE���T�REN PO�NTER FONKS�YONU YAZINIZ
/*void karesi(int dizi[],int boyut){
	for(int i=0;i<boyut;i++){
		dizi[i]=dizi[i]*dizi[i];
	}
}
int main(){
	int a[5]={1,2,3,4,5};
	int *p;
	karesi(a,5);
	for (int i=0;i<5;i++){
		p=&a[i];
		cout << *p << " ";
	}
}*/

/*int main(){
	int boyut;
	cout << "dizinin boyutunu giriniz:";
	cin>> boyut;
	int *dizi=new int(boyut);//Dinamik dizi olu�turma
	for(int i=0;i<boyut;i++){
		dizi[i]=i+1;
	}
	for(int i=0;i<boyut;i++){
		cout << dizi[i] <<" ";
	}
}*/
//�K� D�Z�N�N ��ER���N� DE���T�RME PO�NTER VE FONKS�YON KULLANARAK
/*void degis(int dizi1[],int dizi2[],int boyut){
	for(int i=0;i<3;i++){
		swap(dizi1[i],dizi2[i]);
	}
}
int main(){
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	int *p;
	int *c;
	degis(a,b,3);
	cout << "a dizisi:";
	for(int i=0;i<3;i++){
		p=&a[i];
		cout << *p <<" ";
	}
	cout << endl;
	cout << "b dizisi:";
	for(int k=0;k<3;k++){
		c=&b[k];
		cout <<*c << " ";
	}
}*/

//selamla isimli bir fonksiyon tan�mlan�yor
/*void selamla(){
	cout <<"merhaba"<< endl;// fonksiyon �a�r�ld���nda ekrana"merhaba" yazd�r�r
}
// 'vedaet' isimli bir fonksiyon tan�mlan�yor
void vedaet(){
	cout << "hoscakal"<< endl;// fonksiyon �a�r�l���nda ekrana ho��akal yazd�r�r
}
int main(){
	//funcptr ad�nda bir fonksiyon pointer� tan�mlan�yor.Bu pointer,geri d�n�� de�eri olmayan ve parametre almayan fonksiyonlaro g�sterrebilir
	void(*funcptr)();
	funcptr=selamla;//funcptr pointer�na selamla fonksiyonunun adresi atan�yor
	funcptr();// funcptr �zerinden selamla fonksiyonu �a�r�l�ypr ve merhaba yazd�r�l�yot
	funcptr=vedaet;// funcptr pointer�na vedaet fonksiyonunun adresi atan�yor
	funcptr();// funcptr �zerinden vedaet fonksiyonu �a�r�l�yor ve ho��akal yazd�r�l�yor
	return 0;
}*/

//iiki tamsay� de�i�kenin de�erlerini birbiri ile de�i�tirebilen bir fonkiyon yaz�n
// bu fonksiyon pointerlar kullanarak de�i�kenlerin orijinal de�erlerini de�i�tirmelidir
/*void terscevir(int *c,int *d){
        swap(*c,*d);
}
int main(){
	int a=3;
	int b=5;
	terscevir(&a,&b);
	cout <<"a" << a << endl;
	cout <<"b"<< b<< endl;
}*/
// bir dizinin tersini olu�turan bir fonksiyon yaz�n.fonksiyon dizinin ba�lang�� ve biti� po�nter�n� almal� ve diziyi yerinde ters �evirmeli

/*void ters(int *start,int *end){
	while(*start<*end){
		swap(*start,*end);
		start++;
		end--;
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	ters(&arr[0],&arr[4]);
	for(int i=0;i<5;i++){
		cout << arr[i]<< " ";
	}
	return 0;
}*/
//bir karakter dizisindeki t�m harfleri b�y�k harfe d�n��t�ren bir fonksiyon yaz�n.Fonksiyon.bir char pointer� almal� ve diziyi yerinde de�i�tirmeli

/*void touppercase(char *str){
	while(*str != '\0'){
		if(*str >= 'a'&& *str<='z'){
			*str=*str-'a'+'A';
		}
		str ++;
	}	
}
int main(){
	char str[]="Hello World";
	touppercase(str);
	cout << str;
	return 0;
}*/
// bir tamsay� dizisinin elemanlar�n�n toplam�n� d�nd�ren bir fonksiyon yaz�n.fonksiyon dizinin ba�lang�� adresini ve dizinin boyutunu almal�d�r
/*void toplam(int *a,int boyut){
	int toplamlar=0;
	for(int i=0;i<boyut;i++){
		toplamlar = toplamlar + a[i];
	}
	cout << "toplam deger:" << toplamlar<< endl;
	
}
int main(){
	int a[5]={1,2,3,4,5};
	toplam(&a[0],5);
	cout << toplam<< endl; 
}*/
//Bir tamsay� pointer� dizisi i�erisindeki en b�y�k eleman� bulan bir fonksiyon yaz�n Fonksiyon pointer dizisini ve boyutunu almal�d�r
/*void enbuyuk(int *k,int boyut){
	int eb=k[0];
	for(int i=0;i<boyut;i++){
		if(k[i]>eb){
			eb=k[i];
		}
	}
	cout << "en buyuk sayi:"<< eb << endl;
}

int main(){
	int a[4]={1,2,3,4};
	enbuyuk(&a[0],4);
	cout << enbuyuk << endl;
}*/
//Bir tam say� matrisinin her bir s�tundaki en buyuk eleman� bulan ve bu degeri bir diziye kopyalayan bir fonksiyon yaz�n
//fonksiyon matrislerin ba�lang�� adreslerini sat�r ve s�tun say�lar�n� almal� ve en buyuk de�erlerin sakland��� bir dizi d�nd�rmelidir



    
//AKI� STREAM SINIFLARI DOSYALAR
/*int main(){
	ofstream dosyaolusturmaornegi;
	dosyaolusturmaornegi.open("ornek.txt",ios:out)//dosya yazma modunda a��l�r
	return 0;
}*/
//DOSYA OKUMA VE YAZMA
/*int main(){
	ofstream dosyayaz("yaz.txt",ios::out);
	dosyayaz << "merhaba dunya"<< endl;
	dosyayaz.close();
	
	//dosya okuma
	ifstream dosyaoku("yaz.txt",ios::in);
	string okunan;
	while(getline(dosyaoku,okunan)){
		cout << okunan << endl;
	}
	dosyaoku.close();
}*/

//SINIF MEVCUDUNUN SINAV PUANLARINI DOSYAYA YAZMA
/*int main(){
	cout << "puanlari giriniz:"<< endl;
	int p;
	ofstream dosyaornek("ornek.txt",ios::out);
		for(int i=1;i<=10;i++){
			cin>> p;
			dosyaornek <<p<< endl; 
		}
		dosyaornek.close();
}*/

/*int main(){
	ofstream dosyaornek;
	dosyaornek.open("alfabe.txt",ios::out);
	char a[]="ABCDEF";
	for(int i=0;i<6;i++){
		dosyaornek << a[i];
	}
	dosyaornek.close();
}*/

/*int main(){
	char karakter;
	fstream dosyaornek;
	dosyaornek.open("alfabe.txt",ios::out | ios::in);
	
	dosyaornek.seekp(2L,ios::beg); 
	dosyaornek<< 'L';
	
	dosyaornek.seekp(-2L,ios::cur);// B karakterine gider
	dosyaornek >> karakter; // B karakterini okur
	
	dosyaornek.seekp(2L,ios::end);
	dosyaornek << karakter; // E yerine B yazar
	
	dosyaisleme.close();
}*/
//DOSYADAN BEL�RL� B�R SATIRI OKUMA
/*int main(){
	ifstream dosya("sayilar.txt");
	string satir;
	int satirno=0;
	while(getline(dosya,satir)){
		++satirno;
		if(satirno==3){
			cout << satir << endl;
			break;
		}
	}
	dosya.close();
}*/
//VECT�RLER
/*int main(){
	vector<int>v;//int t�r�nde bir vekt�r olu�turuluyor
	v.push_back(10);// vekt�re 10 de�erini ekliyor
	v.push_back(20);// vekt�re 20 de�erini ekliyor
	v.pop_back();//vek�r�n sonundaki �geyi ��kart�r
	cout << v[0]<< endl;
	cout << v[1] << endl;	
}*/

//STR�NGLER
/*size ve length boyutu yazd�r�r
append sonuna karakter ekler
resize boyutu yeniden ayarlar
reserve belirli bir kapasiteyi ay�r�r
capacity kapasiteyi yazd�r�r
erase stringden belirli bir b�l�m� siler
replace stringin belirli bir b�l�m�n� belirli bir string ile de�i�ir
int karsilastirma=tamisim.compare("karsilastirilacak metin")*/

/*int main(){
	string a;
	cout <<"lutfen bir stirng giriniz:"<< endl;
	cin>> a;
	if(a.size()>10){
		cout <<"uzun"<< endl;
	}
	else{
		cout << "kabul" << endl;
    }
}*/

//KULLAN�C�DAN 3 TANE STR�NG ALINIR VE HERB�R�N� BOYUTUNUN 5 KARAKTER OLUP OLLMADI�I KONTROL ED�L�R
/*int main(){
	string a;
	for(int i=1;i<4;i++){
		cout <<"string giriniz"<< endl;
		cin>>a;
		if(a.size()==5){
			cout <<"kabul edildi"<< endl;
		}
		else{
			cout<<"kabul edilmedi"<< endl;
		}
	}
}*/
/*int main(){
	string a="elif";
	cout << a.append("naber")<< endl;
	cout << a.capacity()<< endl; // 9 yazdi
}*/
/*int main(){
	string b="elif";
	b.clear();
	cout << b.empty() << endl; // dogru anlam�nda 1 d�ner
}*/
/*int main(){
	string anametin,arananmetin;
	cout << "anametni giriniz:";
	getline(cin,anametin);
	cout <<"arananmetni giriniz:";
	getline(cin,arananmetin);
	size_t bulunanpozisyon = anametin.find(arananmetin);
	if(bulunanpozisyon != string::npos){
		cout << "arananmetin bulundu"<< endl;
	}
	else{
		cout << "aranan metin bulunmadi"<< endl;
	}
	
}*/


/*int main(){
	srand(time(NULL));
	int a= rand()%100;
	cout << a << endl;//77
	int b= rand()%200 +100;
	cout<< b << endl; // 223
	int c= rand()%500+100;
	cout << c << endl;	
}*/

/*int main(){
	char b[5]="elif";
	cout << endl;
	cout << b[3];// f yazar
}*/
/*int main(){
	int i,b =0;
    char a[20];
    cout << "gir"<< endl;
    cin >> a;
    for(i=0;a[i]!='\0';i++){
    	b++;
	}
	cout << "ifadenin uzunlugu:"<< b;
}*/

/*#include<iostream>

using namespace std;

int main()
{
  int i, count=0;
  char ch[20];
  cout << "Herhangi bir ifade giriniz: ";
  gets(ch);

  for(i=0;ch[i]!='\0';i++)
  {
      count++;
  }

  cout<<"Ifadenin Uzunlugu: " << count;
  return 0;
}*/
// i�eri�i ters de�i�tirme
/*int main(){
	char a[5]="elif";
	char b[5]="emir";
	for(int i=0;i<4;i++){
		swap(a[i],b[i]);
		cout << a[i];
	}
}*/

#include<iostream>
  
/*using namespace std;
  
int main()
{
    char line[150];
    int i,v,c,ch,d,s,o;
    o=v=c=ch=d=s=0;
    cout<<"Bir satir ifade giriniz :\n";
    gets(line);
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++v;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            ++c;
        else if(line[i]>='0'&& line[i]<='9')
            ++d;
        else if (line[i]==' ')
            ++s;
    }
    cout << "Unlu harfler: "<< v;
    cout << "\nUnsuz harfler: "<< c;
    cout << "\nRakam: "<< d;
    cout << "\nBosluk: "<< s;
    return 0;
}*/

// bir ifadenin i�inden ge�en harfin ka� kere ge�ti�ini bulma
/*int main(){
	int b=0;
	char c[20];
	cout << "bir ifade giriniz:";
	cin>>c;
	char istenenharf;
	cout << "istenen harfi girin:";
	cin>>istenenharf;
	
	for(int i=0;c[i]!='\0';i++){
		if(c[i]==istenenharf){
			b++;
		}
	}
	if(b==0){
		cout << "istenilen harf bulunamadi";
	}
	if(b>=1)
	   cout <<"istenen harfin gecis sayisi:"<< b;
}*/

/*int main()
{
    char ch1[50] = "caner";
    char ch2[50] = "canbaz";
    cout << "1. Ifade: " << ch1;
    cout << "\n2. Ifade: " << ch2;
    strcat(ch1,ch2);
    cout << "\nBirlestirilmis ifade : " << ch1;
    return 0;
}*/

/*int main(){
	char a[20];
	cout << "birinci ifadeyi giriniz:";
	cin>> a;
	char b[20];
	cout << "iknci ifadeyi giriniz:";
	cin>> b;
	int sayac=0;
	for(int i=0;a[i]!='\0' && b[i]!='\0';i++){
		if(a[i]!=b[i]){
			sayac ++;
		}
	}
	if (sayac >0){
		cout <<"ifadeler esit degildir."<< endl;
	}
	if(sayac == 0){
		cout << "ifadeler esittir."<< endl;
	}
}*/

// SAYININ BASAMAKLARINI BULMA
/*int main(){
	int a= 5422;
	int b=0;
	while(a>0){
		a=a/10;
		b++;
	}
	cout << b << endl;
}*/

//basamaklar toplam�n� bulma
/*int main(){
	int a=1234;
	int b;
	int c=0;
	while(a>0){
		b=a%10;
		a=a/10;
		c=c+b;
	}
	cout << c;
}*/

// say�y� ters yazd�rma
/* main(){
	int a=1234;
	int i=0;
	int c;
	int b[i];
	while(a>0){
		c=a%10;
		b[i]=c;
		a=a/10;
		i++;
	}
	cout << "i:"<<i<<endl;
	for(int k=0;k<i;k++){
		cout << b[k]<< " "; // 4321 yazar
	}
	cout << endl;
	for(int k=i-1;k>=0;k--){
		cout << b[k] << " ";//1234 yazar
	}
}*/

// say�n�n palindrom olup olmad���n� bulma

//kod �al��mad�
/*int main(){
int a=11211;
int i=0;
int b[i];
int c;
while(a>0){
	c=a%10;
	b[i]=c;
	a=a/10;
	i++;
}
int m=0;
int k=0;
while(k>i){
	if(b[k]!=b[i-1]){
		m++;
	}
	k++;
	i--;
}
if(m>0){
	cout<<"ifade palindrom degildir"<< endl;
}
if(m=0){
	cout<< "ifade panlindromdur"<< endl;
}
}*/
/*int main(){
	int a;
	cout <<" a sayisini giriniz"<<endl;
	cin>>a;
	int temp=0;
	int c=0;
	int b=a;
	while(a>0){
		c=a%10;
		a=a/10;	
	    temp=temp*10+c;
	}
	if(b==temp){
		cout << "ifade palindromdur"<< endl;
	}
	else{
		cout << "ifade palindrom degildir"<< endl;
	}
}*/

/*int main(){
	cout << pow(27,1.0/3.0)<<endl;
	cout << pow(16,1.0/2.0)<<endl;
}*/
/*int main(){
	int sayi;
	int b=0;
	cout<<"bir sayi giriniz:"<< endl;
	cin >> sayi;
	for(int i=2;i<sayi;i++){
		if (sayi%i == 0){
			b++;
		}
	}
	if(b>0){
	    cout <<"sayi asal degil"<< endl;
	}
	if(b==0){
		cout << "sayi asaldir"<< endl;
	}
}*/

/*bool asalmi(int x){
	for (int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	//cout << asalmi(19) << endl; // 1 degeri yazar
	int x=13;
     for(int i=2;i<x;i++){
         if (asalmi(x)){
         	cout<< i << endl;
		 }
	 }
} */
// yeniden yapmay� dene
/*int main(){
	int sayi;
	cout << "bir sayi giriniz:"<<endl;
	cin>> sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=(sayi-i)/2;k++){
			cout << " ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout << "*";
		}
		cout << endl;
	}
}*/

/*int main(){
	int i=0;
	int s;
	cout<<"say� giriniz:";
	cin>>s;
	s=s*s;
	cout << s;
	int c;
	int p[i];
	while(s>0){
		c=s%10;
		p[i]=c;
		s=s/10;
		i++;
	}
	int a=0;
	for(int m=0;m<i/2;m++){
		a=a+p[m];
	}
	int k=0;
	for(int n=i-1;n>=i/2;n--){
		k=k+p[n];
	}
	cout << endl;
	cout << "a ve k toplami:"<< a+k << endl;
}*/

/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<a;i++){
		for(int k=1;k<(a-i)/2;k++){
			cout << " ";
		}
		for(int m=1;m<2*i+1-1;m++){
			cout << m;
		}
		cout << endl;
	}
}*/
/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int k=1;k<=i;k++){
			cout << k;
		}
		for (int m=i;m>0;m--){
			cout << m;
		}
		cout << endl;
	}
}*/

/*int asalmi(int x){
	for(int i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
		else{
			return x;
		}
	}
}
int main(){
	int a;
	cout << " a degeri giriniz:"<<endl;
	cin>> a;
	for(int k=2;k<a;k++){
		cout << asalmi(k);
		cout <<endl;
	}
}*/

//KARAKTER D�Z�S�N�N TERS�N� ALMA
/*int main(){
	string a="Merhaba Dunya";
	for(int k=12;k>=0;k--){
		cout << a[k];
	}
}*/

/*int main(){
	char a[14]="Merhaba Dunya";
	for(int k=12;k>=0;k--){
		cout << a[k];
	}
}*/
/*int main(){
	char *c="Merhaba Dunya";
	cout << c<<endl;//Merhaba Dunya 
	for(int k=0;k<13;k++)
	     cout << c[k];//Merhaba Dunya
    cout << endl;
	for(int i=12;i>=0;i--)
	   cout << &c[i]<<endl;
}*/
/*int main(){
	string b="Merhaba Dunya";
	for(int k=12;k>=0;k--){
		cout << &b[k] <<cout <<endl;
	}
}*/

/*int main(){
	string a="Merhaba Dunya";
	for(int i=a.length()-1;i>=0;i--)
	    cout << a[i];
}*/

//MET�NDEK� KEL�ME SAYISINI HESAPLAYAN PROGRAM
/*int main(){
	string a;
	cout<<"bir cumle giriniz"<<endl;
	getline(cin,a);
	int kelime=0;
	for(int i=0;i<=a.length();i++){
		if(a[i]==' '){
			kelime++;
		}
	}
	cout << kelime+1;
}*/
// D�Z� ELEMANLARINI SIRALAMA
// kod �al��mad�
/*void sirala(int x[],int boyut){
	for(int i=0;i<boyut-1;i++){
	    int	ek=i;
		for(int k=i+1;k<boyut;k++){
			if(x[ek]>x[k]){
				ek=k;
			}
		}
		swap(x[ek],x[i]);
	}	
}
int main(){
    int a[100];
    cout <<endl;
    int b;
    cout << "boyutunu giriniz:"<<endl;
    cin>> b;
    cout <<"dizi degerlerini giriniz"<<endl;
    for(int i=0;i<b;i++){
    	cin>>a[i];
	}
	sirala(a,b);
	cout << "siralanan dizi"<<endl;
	for(int i=0;i<b;i++){
		cout << a[i];
	}
}*/
/*void DiziSiralama(int dizi[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (dizi[j] > dizi[j + 1]) {
                swap(dizi[j], dizi[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    
    cout << "Dizinin eleman sayisini girin: ";
    cin >> n;
    int dizi[100];
    
    cout << "Dizi elemanlarini girin:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> dizi[i];
    }
    
    DiziSiralama(dizi, n);
    
    cout << "Siralanan dizi:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << dizi[i] << " ";
    }
    cout << endl;
    
    return 0;
}*/
//say�n�n basamaklar�n� bulma
/*int main(){
	int a=1234;
	int c;
	int i=0;
	int dizi[100];
	while(a>0){
		c=a%10;
		dizi[i]=c;
		a=a/10;
		i++;
	}
	cout <<dizi[2];
}*/

// PAL�NDROM SAYI KONTROL�
/* // 2.while k�sm�nda �al��mad�
int main(){
	int s;
	cout <<"sayi giriniz";
	cin>>s;
	cout <<endl;
	int i=0;
	int dizi[i];
	int c;
	while(s>0){
		c=s%10;
		dizi[i]=c;
		s=s/10;
		i++;
	}
	int k=0;
	while(k<s){
		cout << dizi[k];
		k++;
	}
	cout << dizi[0];
}*/
//PAL�NDROM SAYI KONTROL�
/*int main(){
	int a;
	cout <<" a sayisini giriniz"<<endl;
	cin>>a;
	int temp=0;
	int c=0;
	int b=a;
	while(a>0){
		c=a%10;
		a=a/10;	
	    temp=temp*10+c;
	}
	if(b==temp){
		cout << "ifade palindromdur"<< endl;
	}
	else{
		cout << "ifade palindrom degildir"<< endl;
	}
}	*/ 

/*int main(){
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	for(int i=0;i<5;i++){
		cout << p[i];
	}
}*/
//YILDIZ YAPIMI YILDIZ YAPIMI
/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			cout <<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout << "*";
		}
		cout <<endl;
	}
}*/
//BAKLAVA DESEN� YAPIMI
/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			cout <<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout <<"*";
		}
		cout<<endl;
	}
	for(int i=sayi;i>=0;i--){
	for(int k=sayi;k>=i;k--){
		cout <<" ";
	}
	for(int m=2*i-3;m>0;m--){
			cout <<"*";
	}
		cout<<endl;
	}
}*/

/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int m=1;m<=sayi-i;m++){
			cout << " ";
		}
		for(int n=1;n<=2*i-1;n++){
			cout << "*";
		}
		cout <<endl;
	}
	for(int m=sayi;m>=0;m--){
		for(int n=sayi;n>=m;n--){
			cout << " ";
		}
		for(int k=2*m-3;k>0;k--){
			cout << "*";
		}
		cout <<endl;
	}
}*/
//��� BO� BAKLAVA DESEN� YAPIMI
/*int main(){
	int a;
	cin>>a;
	int y=1;
	while(y<=1){
	for(int i=1;i<=a;i++){
		for(int k=1;k<=a-i;k++){
			cout <<" ";
		}
		for(int m=1;m<=1;m++){
			cout <<"*";
		}
		for(int n=1;n<2*i-3;n++){
			cout<< " ";
		}
		for(int t=1;t<=1;t++){
			cout << "*";
		}
		cout <<endl;
	}
	y++;
}
     for(int j=a;j>1;j--){
			for(int g=a;g>=j;g--){
				cout << " ";
			}
			for(int p=1;p<=1;p++){
				cout << "*";
			}
			for(int f=1;f<=2*j-4;f++){
				cout << " ";
			}
			for(int d=1;d<=1;d++){
				cout << "*";
			}
			cout <<endl;
		}
}*/

/*int main(){
	int a=1;
	int b= --a;
	cout << a;//0
	cout << b;//0
	int c=++a;
	cout << c;// 1 yazar
}*/
//D�NAM�K BELLEK KULLANIMI
/*int main(){
	int *dizi;
	dizi=new int[5];// BELLEKTE 5 TANE YER AYRILDI
	dizi[1]=8;
	cout<<dizi[1];//8yazar
	cout <<&dizi[1];
}*/
//STR�NGLER
/*int main(){
	char *p="elif";
	cout << &p[1];//lif yazd�
}*/
/*int main(){
	string s="elif";
	cout << &s[1];//lif yazd�
}*/
/*int main(){
	string a="elif";
	cout << a.append("dunya")<<endl;//elifdunya
	cout << a.erase(4,8)<<endl;//elif
	cout << a.insert(4,"ler")<<endl;//elifler 
	cout << a.assign("merhaba")<<endl;//merhaba yazar yeni de�er atam�� olduk
	cout << a.size()<<endl;// 7 yazar
	cout << a.replace(0,7,"elif")<<endl;// elif
}*/

// MET�N ���NDEK� SESL� HARF SAYISINI BULMA
/*int main(){
	string m;
	getline(cin,m);
	int p=0;
	char c[6]="aeiou";
	for(int i=0;i<m.size();i++){
		for(int n=0;n<5;n++){
		   if(m[i]== c[n] ){
			  p++;
		   }
	    }
	}
	cout <<"sesli harf sayisi:"<<p;
}*/

//MET�N ���NDE ARANAN METN� BULMA
/*int main(){
     string anametin,arananmetin;
     getline(cin,anametin);
     getline(cin,arananmetin);
     size_t bulunan=anametin.find(arananmetin);
     if(bulunan != ' '){
     	cout <<"aranan metin bulundu"<<endl;
	 }
}*/

/*int main(){
string a="elif";
for(int i=0; a[ i ] != '\0' ; i++){
if(a[ i ]>96 && a[ i ]<123)
a[ i ] = a[ i ]-12;
}
}*/
/*int main(){
	int s;
	cin>>s;
	for(int i=0;i<=s;i++){
		for(int m=0;m<=i;m++){
			cout << char (m+65);
		}
		cout <<endl;
	}
}*/
/*int main(){
	ofstream dosya;
	dosya.open("yazi.txt",ios::out);
	if(dosya.is_open()){
		dosya<<"merhaba dunya";
		dosya.close();
	}
	else{
		cout<< "dosya acilamadi";
	}
	ifstream dosyaoku("yazi.txt",ios::in);
	string satir;
	if(dosyaoku.is_open()){
		while(getline(dosyaoku,satir)){
			cout <<satir;
		}
	}
	dosyaoku.close();
}*/
	
/*int main(){
	ofstream dosya;
	dosya.open("yazi.txt",ios::out);
	if(dosya.is_open()){
		int a;
		cin >>a;
		int sayi;
		cin>>sayi;
		for(int b=0;b<2;b++){

	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			dosya <<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			dosya <<"*";
		}
		dosya<<endl;
	}
	for(int i=sayi;i>=0;i--){
	for(int k=sayi;k>=i;k--){
		dosya <<" ";
	}
	for(int m=2*i-3;m>0;m--){
			dosya <<"*";
	}
		dosya<<endl;
}
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			dosya <<" ";
		}
		for(int m=1;m<=1;m++){
			dosya <<"*";
		}
		for(int n=1;n<2*i-3;n++){
			dosya<< " ";
		}
		for(int t=1;t<=1;t++){
		    dosya << "*";
		}
		dosya<<endl;
	}

     for(int j=sayi;j>1;j--){
			for(int g=sayi;g>=j;g--){
				dosya << " ";
			}
			for(int p=1;p<=1;p++){
				dosya << "*";
			}
			for(int f=1;f<=2*j-4;f++){
				dosya<< " ";
			}
			for(int d=1;d<=1;d++){
				dosya<< "*";
			}
			dosya <<endl;
		}
    }
}
	else{
		cout<< "dosya acilamadi";
	}
	ifstream dosyaoku("yazi.txt",ios::in);
	string satir;
	if(dosyaoku.is_open()){
		while(getline(dosyaoku,satir)){
			cout <<satir<<endl;
		}
		dosya<<endl;
	}
	dosya<<endl;
	dosyaoku.close();
}*/

/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int k=1;k<=a-i;k++){
			cout <<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout <<"*";
		}
		cout <<endl;
	}
	for(int g=a-1;g>0;g--){
		for(int m=a-1;m>=g;m--){
			cout <<" ";
		}
		for(int n=1;n<=2*g-1;n++){
			cout << "*";
		}
		cout <<endl;
	}
}*/

/*int main(){
	int a;
	cin>>a;
	int bosluk;
	int yildiz;
	bosluk=a-1;
	yildiz=1;
	for(int i=1;i<=a;i++){
		for(int m=1;m<=bosluk;m++){
			cout<<" ";
		}
		for(int n=1;n<=yildiz;n++){
			cout<<"*";
		}
		bosluk = bosluk -1;
		yildiz=yildiz+2;
		cout << endl;
	}
}*/
/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int m=1;m<=a-i;m++){
			cout << " ";
		}
		for(int n=1;n<=2*i-1;n++){
			cout <<"*";
		}
		cout <<endl;
	}
	for(int m=a-1;m>=1;m--){
		for(int g=a;g>m;g--){
			cout<<" ";
		}
		for(int f=1;f<=2*m-1;f++){
			cout<<"*";
		}
		cout<<endl;
	}
}*/

//i�i bo� baklava deseni yap�m�
/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int m=1;m<=a-i;m++){
			cout<<" ";
		}
		for(int d=1;d<=1;d++){
			cout<<"*";
		}
		for(int n=1;n<=2*i-3;n++){
			cout << " ";
		}
		if(i>1){
		for(int s=1;s<=1;s++){
			cout<< "*";
		}
	    }
		cout <<endl;
	}
	for(int k=a-1;k>=1;k--){
		for(int f=a;f>k;f--){
			cout <<" ";
		}
		cout <<"*";
		for(int h=1;h<=2*k-3;h++){
			cout <<" ";
		}
		if(k>1){
		cout << "*";
	}
		cout <<endl;
	}
}*/

/*int main(){
	ofstream dosya;
	dosya.open("dizi.txt",ios::out);
	for(int i=1;i<=5;i++){
		dosya<<i;
	}
	dosya.close();
    ifstream dosyaoku("dizi.txt",ios::in);
    string satir;
    while(getline(dosyaoku,satir)){
    	cout<<satir;
	}
	dosya.close();
}*/ 
//Dosya da yer de�i�ikli�i
/*int main(){
	char a[]="ABCDEF";
	ofstream dosya;
	dosya.open("alfabeler.txt",ios::out);
	for(int i=0;i<=6;i++){
		dosya<<a[i];
	}
	dosya.close();
	string satir;
	ifstream dosyalar("alfabeler.txt",ios::in);
	while(getline(dosyalar,satir)){
		cout<<satir;
	}
	dosyalar.close();
	return 0;
}*/
/*int main(){
	fstream dosya;
	dosya.open("alfabeler.txt",ios::out | ios::in);
	char karakter;
	dosya.seekp(2L,ios::beg);
	dosya<<"3"; //AB3DEF yazar
	
	dosya.seekg(-2L,ios::end);
	dosya>>karakter;
	
	dosya.seekp(-2L,ios::cur);
	dosya<<karakter;
}*/

// DOSYADAN BEL�RL� UZUNLUKTAK� KEL�MELER� BULMA
/*int main(){
	ofstream dosya;
	string a="dunya";
	dosya.open("cumle.txt",ios::out);
	dosya<<a;
	dosya.close();
	
	ifstream dosyalar("cumle.txt",ios::in);
	string satir;
	while(getline(dosyalar,satir)){
		cout << satir;
	}
	dosyalar.close();
}*/

/*int main(){
	ifstream dosya("cumle.txt",ios::in);
	int satirno=0;
	string satir;
	while(getline(dosya,satir)){
		satirno++;
		if(satirno==1){
			cout << satir;
		}
	}
	dosya.close();
}*/
/*int main(){
	ifstream dosya("cumle.txt",ios::in);
	int satirno=0;
	string satir;
	while(getline(dosya,satir)){
		if(satir.size()==5){
			cout <<satir;
		}
		satirno++;
	}
	dosya.close();
}*/
//STR�NGLER
//stringin palindrom olup olmad���n� bulma
/*int main(){
    string a;
    cin>>a;
    int b=a.size()-1;
    int m=0;
    for(int i=0;i<(a.size()-1)/2;i++){
    	if(a[i]!=a[b]){
    		m++;
		}
    	b--;
	}
	if(m>0){
		cout<<"ifade palindrom degil" ;
	}
	if(m==0){
		cout<<"ifade palindromdur";
	}
}*/
//kullan�c�dan 3 tane string ifade al�n�r ve herbirini boyutunun 5 olup olmad��� kontrol edilir
/*int main(){
	string a;
	int i=1;
	while(i<=3){
		cin>>a;
		if(a.size()==5){
			cout <<"kabul"<<endl;
			i++;
		}
		else{
		    cout <<"gecerli bir kelime giriniz"<<endl;
		}
	}
}*/
//MET�N ��ER�S�NDE ARANA METN� BULMA
/*int main(){
	string anametin;
	cout<<"anametni giriniz"<<endl;
	getline(cin,anametin);
	string arananmetin;
	cout << "aranan metni giriniz"<<endl;
	getline(cin,arananmetin);
	size_t bulunan=anametin.find(arananmetin);
	if(bulunan != ' '){
		cout << "aranan bulundu";
	}
	else{
		cout << "aranan bulunamad�";
	}
}*/
//KULLANICIDAN B�R SAY� ALARAK BU SAYIYA KAR�ILIK RASTGELE OLU�TURULAN METN� G�R�N�Z
/*int main(){
	int a;
	cin>>a;
	srand(time(NULL));
	for(int i=1;i<=a;i++){
		cout << char  ( 'a'+rand()%26);
	}
}*/
/*int main(){
	int a[3]={1,2,3};
	int *p;
	p=&a[0];
	cout << p[1];
}*/
/*int main(){
	int m[2][2]={1,2,3,4};
	int (*p)[2];
	p=&m[0];
	cout << p[0][1];
}*/
//PO�NTER �LE SAYI ALMA
/*int main(){
	int *p=(int*)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>>p[i];
	}
	for(int k=0;k<5;k++){
		cout << p[k];
	}
}*/


/*int toplam(int *p,int boyut){
	int k=0;
	for(int i=0;i<boyut;i++){
		cout << &p[i]<<endl;
		k= k+p[i];
	}
	return k;
}
int main(){
	int a[3]={1,2,3};
	toplam(a,3);
	cout << toplam(a,3);
}*/ 

/*int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int k=1;k<=a-i;k++){
			cout <<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout <<"*";
		}
		cout <<endl;
	}
	for(int g=a-1;g>=1;g--){
		for(int n=a;n>g;n--){
			cout <<" ";
		}
		for(int d=2*g-1;d>0;d--){
			cout<<"*";
		}
		cout<<endl;
	}
}*/

/*int main(){
	char a[5]="elif";
	cout<<a<<endl;
	char *p;
	p=&a[0];
	for(int i=0;i<4;i++){
		cout << p[i];
	}
	cout <<endl;
	char *c="dunya";
	cout <<c<<endl;//dunya
	cout << c[1]<<endl;// u 
	cout<<strlen(c)<<endl; // 5
	strcpy(p,c);
	cout << p<<endl;//dunya
}*/

/*int main(){
	string a="el if n ";
	cout << a.size()<<endl;// 8 yazar
	int k=0;
	for(int i=0;i<a.size();i++){
		if(a[i]==' '){
			k++;
		}
	}
	cout <<k;// 3 yazd� kelime say�s� bulunmu� oldu b�ylelikle
}*/
/*int main(){
	string a="elif";
	char *p;
	p=&a[0];
	cout <<p[1];
}*/

/*int main(){
	string a="elif";
	cout << a.insert(4,"dunyam")<<endl;//elifdunya
	cout <<a.erase(4,7)<<endl;
	cout <<a.append("hello")<<endl;//elifhello
	cout<<a.assign("uzay")<<endl;//uzay 
}*/

//metin i�erisinde aranan metni bulma
/*int main(){
	string anametin;
	getline(cin,anametin);
	string arananmetin;
	getline(cin,arananmetin);
	size_t bulunan=anametin.find(arananmetin);
	if(bulunan != ' '){
		cout <<"aranan metin bulundu";
	}
	else{
		cout <<"aranan metin bulunamadi";
	}
}*/

// KULLANICIDAN DOSYADAN B�R SATIRI EKRANA YAZDIRMAYI �STEME
/*int main(){
	fstream dosya("yaz.txt",ios::in|ios::out);
	int satirno=0;
	string satir;
	while(getline(dosya,satir)){
		satirno++;
		if(satirno == 2){
			dosya<<"hello";
		}
	}
}*/

/*int main(){
	ofstream dosya("alfabeler.txt",ios::out);
	dosya<<"nasilsin ";//dosyanin i�indeki bir �nceki veriler silinir ve sadece merhaba yazar
}*/
/*int main(){
	ofstream dosya("alfabeler.txt",ios::app);
	dosya<<"naber"; // bir �nceki i�erik silinmez ve naber yaz�s� dosyan�n sonuna eklenir //nasilsin naber yazar
}*/
/*int main(){
	ofstream dosya("alfabeler.txt",ios::trunc);
	dosya<< "elif";// dosyan�n i�eri�ini sildi bu y�zden sadece elif yaz�yor
}*/

/*int main(){
	ofstream dosya("harfler.txt",ios::out);
	char a[7]="ABCDEF";
	for(int i=0;i<6;i++){
		dosya<<a[i];
	}
	dosya.close();
}*/
/*int main(){
	fstream dosya("harfler.txt",ios::in|ios::out);
	char karakter;
	dosya.seekp(-6L,ios::end);
	dosya<<'5';
	
    string satir;
	while(getline(dosya,satir)){
		cout<<satir;
	}
}*/

//bir c�mlede 5 harfli kelimeleri bulma
/*int main(){
	fstream dosya("cumleler.txt",ios::out|ios::in);
	dosya<<"hello naber dunya selam uzay";
    dosya.close();
    ifstream dosyam("cumleler.txt",ios::in);
    string kelime;
    while(dosyam>>kelime){
    	if(kelime.size()==5){
    		cout << kelime;
		}
	}
	dosya.close();
}*/

/*int main(){
	ofstream dosya("cumleler.txt",ios::out);
	dosya<<"hello naber dunya selam uzay";
    dosya.close();}*/
   /* int main(){
    ifstream dosya("cumleler.txt",ios::in);
    string kelime;
    while(dosya>>kelime){
    	if(kelime.size()==5){
    		cout << kelime;
		}
	}
	dosya.close();
}*/

//VEKT�RLER
/*int main(){
	vector<int>v1(10,44);
	for(int i=0;i<10;i++){
		cout << v1[i]<<" ";
	} 
	//cout <<v1.back()<<endl; // en ba�taki eleman� d�nd�r�r
	//cout <<v1.front()<<endl;// en sondaki eleman� d�nd�r�r
	
	vector<int>v2(2,15);
	v1.swap(v2);
	cout<<v1.[0]<<endl;
}*/
/*int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int toplam=0;
	while(a<=b){
		toplam=toplam+a;
		a++;
	}
	cout<<toplam;
}*/


//AKREP �LE YELKOVAN ARASINDAK� A�IYI BULMA
/*int main(){
	int akrep;
	cin>>akrep;
	int yelkovan;
	cin>>yelkovan;
	if(akrep>12){
		akrep=akrep%12;
	}
	int aci= akrep*30 - yelkovan*6;
	if(aci<0){
		aci =-aci;
	}
     aci=360-aci;
	cout<<aci;
}*/

/*int main(){
	for(int i=65;i<91;i++){
		cout<< (char) i ;
		cout<<(char) (i+32);
		cout<<endl;
	}
}*/

//B�R D�Z�Y� TERS �EV�RME
// kod yanl�� �al��t�
/*int main(){
    int dizi[8]={1,2,3,4,5,6,7,8};
    int k=7;
    int c;
    for(int i=0;i<3;i++){
    	while(i<k){
        c=dizi[i];
    	dizi[i]=dizi[k];
    	dizi[k]=c;
    	k--;
        }
	}
	for(int m=0;m<8;m++){
		cout<<dizi[m];
	}
}*/
/*int main(){
	int n;
	cin>>n;
	int i=0;
	int dizi[i];
	for(int i=0;i<n;i++){
		cin>>dizi[i];
	}
	for(int m=n-1;m>=0;m--){
		cout<<dizi[m];
	}
}*/

/*int main(){
	int n;
	cin>>n;
	int i=0;
	int dizi[i];
	for(int i=0;i<n;i++){
		cin>>dizi[i];
	}
	int m=0;
	int c=0;
	if(m<n/2){
		while(m<n/2){
		c=dizi[m];
		dizi[m]=dizi[n-1];
		dizi[n-1]=c;
		m++;
		n--;
	    }
	}
}*/

/*int main(){
	int a[2][2];
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			cin>>a[i][k];
		}
	}

	for(int m=0;m<2;m++){
		for(int d=0;d<2;d++){
			int eb=a[m][d];
			if(eb<a[m][d]){
				eb=a[m][d];
			}
			swap(eb,a[m][d]);
		}
	}
	for(int b=0;b<2;b++){
		for(int g=0;g<2;g++){
			cout<<a[b][g];
		}
	}
}*/
//bir dizi i�indeki sayilari b�y�kten k����e s�ralama
/*void sirala(int b[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int min=i;
		for(int k=i+1;k<boyut;k++){
			if(b[min]>b[k]){
				min=k;
			}
		}
		swap(b[min],b[i]);
	}
}
int main(){
	int a[4]={3,5,1,7};
	sirala(a,4);
	for(int m=0;m<4;m++){
		cout<<a[m];
	}
}*/

/*int main(){
	int a[3][3]={1,2,3,4,5,20,7,8,9};
	int max=a[0][0];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
				if(max<a[i][k]){
					max= a[i][k];
				}
		}
	}
	cout<<max;
}*/

/*void sirala(int b[][],int boyut){
	for(int i=0;i<boyut-1;i++){
		int b[i][k-i];
		for(int k=i+1;k<boyut;k++){
			if(b[i][k-i]>b[i][k]){
				swap(b[i][k-i],b[i][k]);
			}
		}
	}
}
int main(){
	int a[2][2]={3,5,1,7};
	sirala(a,2);
	for(int m=0;m<2;m++){
		for(int k;k<2;k++){
		cout<<a[m][k];
	   }
	}
}*/ 

//sayini palindrom olup olmad���n�n kontrol�
/*int main(){
	int sayi;
	cin>>sayi;
	int k=0;
	int a[k];
	int c=0;
	while(sayi>0){
		c=sayi%10;
		a[k]=c;
		sayi=sayi/10;
		k++;
	}
	cout<< k <<endl;
	int m=0;
	for(int i=0;i<k/2;i++){
		if(a[i]!=a[k-1]){
			m++;
		}
		k--;
	}
	if(m>0){
		cout <<"sayi palindrom degildir";
	}
	if(m==0){
		cout<< "sayi palindromdur";
	}
}*/
/*int main(){
	int s=10;
	while(s--){
		cout<<"*"<<endl;
	} // alt alta 10 kere 1 adet y�ld�z bast�
}*/

//pointer kullanarak say�y� ters �evirme
/* main(){
	int sayi;
	cin>>sayi;
	int k=0;
	int *p;
	p=(int*)malloc(sizeof(int)*100);
	int c;
	while(sayi>0){
		c=sayi%10;
		p[k]=c;
		sayi=sayi/10;
		k++;
	}
	for(int i=0;i<k;i++){
		cout<<p[i];
	}
}*/

//diziyi ters �evirme fonksiyon ile
/*void terscevir(int dizi[],int boyut){
	int c;
	for(int i=0;i<boyut/2;i++){
		c=dizi[i];
		dizi[i]=dizi[boyut-1-i];
		dizi[boyut-1-i]=c;
	}
}
int main(){
	int dizi[4]={1,2,3,4};
	terscevir(dizi,4);
	for(int m=0;m<4;m++){
		cout<<dizi[m];
	}
}*/
// kelimenin palindrom olup olmad���n�n kontrol�
/*void palindrom(char a[]){
	int boyut=strlen(a);
	int k=0;
	for(int i=0;i<boyut/2;i++){
		if(a[i]!=a[boyut-1-i]){
			k++;
		}
	}
	if(k>0){
		cout<<"ifade palindrom degildir";
	}
	if(k==0){
		cout<<"ifade palindromdur";
	}
}
int main(){
	char kelime[]="elif";
	int boyut=strlen(kelime);
	palindrom(kelime);
	cout <<palindrom;	
}*/
//KABARCIK SIRALAMA
/*void kabarciksirala(int dizi[],int boyut){
	for(int i=0;i<boyut-1;i++){
		int min=i;
		for(int k=i+1;k<boyut;k++){
			if(dizi[min]>dizi[k]){
				swap(dizi[min],dizi[k]);
			}
		}
	}
}
int main(){
	int a[4]={4,8,3,2};
	kabarciksirala(a,4);
	for(int h=0;h<4;h++){
		cout<<a[h];
	}
}*/
/*void fark(int dizi[],int boyut){
	int max=dizi[0];
	int min=dizi[0];
	for(int m=1;m<boyut;m++){
		if(max<dizi[m]){
			max=dizi[m];
		}
		if(min>dizi[m]){
			min=dizi[m];
		}
		
	}
	cout<<max-min<<endl;	
}
int main(){
	int i=0;
	int dizi[i];
	for(int i=0;i<4;i++){
		cin>>dizi[i];
	}
	fark(dizi,4);
	cout<<fark;
}*/
/*void ciftler(int dizi[],int boyut,int hedef){
	for(int i=0;i<boyut-1;i++){
		for(int k=i+1;k<boyut;k++){
			if(dizi[i]+dizi[k]==hedef){
				cout<<dizi[i]<<"+"<<dizi[k]<<endl;
			}	
		}
	}
}
int main(){
    int dizi[8]={1,5,6,2,3,4,7,0};
    int hedef =7;
    ciftler(dizi,8,7);
    cout<<ciftler;
}*/

//iki tamsay� dizisi verilsin ve bu dizileri birle�tirip s�ralayal�m
/*int main(){
	int a[3]={1,3,5};
	int b[3]={2,4,6};
	int c[6];
	int i=0;
	while(i<3){
		c[i]=a[i];
		i++;
	}
	for(int m=3;m<6;m++){
		c[m]=b[6-m-1];
	}
	cout << c[3]<<endl;
	for(int g=0;g<6;g++){
		cout<<c[g];
	}	
}*/

//dinamik dizi olu�turma ve silme
/*int main(){
	int *p=new int(10);
	p[1]=5;
	cout<<p[1];
	delete p;
}*/

/*int main(){
	int *p=new int(10);
	for(int i=0;i<10;i++){
		cin>>p[i];
	}
	delete[] p;//belle�i serbest b�rak
}*/
/*void degis(int *start,int *end){
	for(int i=0;i<5/2;i++){
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
		
	}
}
int main(){
	int a[5]={1,2,3,4,5};
	degis(a,a+4);
	for(int k=0;k<5;k++){
		cout<< a[k];
	}
}*/
/*void toUpperCase(char *a){
	while(*a!='\0'){
		if(*a>='a'&& *a<='Z'){
			*a=*a-'a'+'A';
		}
		*a++;
	}
}

int main(){
	char a[]="elif";
	toUpperCase(a);
	cout<<a;
}*/

/*void enbuyuk(int *dizi[],int boyut){
	int max=*dizi[0];
	for(int i=0;i<boyut;i++){
		if(max<*dizi[i]){
			max=*dizi[i];
		}
	}
	cout<<max;
	
}
int main(){
	int *dizi[5]={1,2,3,4,5};
	enbuyuk(dizi,5);
	cout<<enbuyuk;	
}*/

//metin i�erisinde aranan metni bulma
/*int main(){
	string anametin,arananmetin;
	getline(cin,anametin);
	getline(cin,arananmetin);
	size_t bulunan = anametin.find(arananmetin);
	if(bulunan !=' '){
		cout<<"aranan bulundu"<<endl;
	}
	else{
		cout<<"aranan bulunamadi";
	}	
}*/

/*int main(){
	int sayi;
	cin>>sayi;
	srand(time(NULL));
	string b;
	for(int i=0;i<sayi;i++){
		char karakter= 'a'+rand()%26;
		b=b+karakter;
	}
	cout<<b;
}*/
/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			cout<<" ";
		}
		for(int m=1;m<=2*i-1;m++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=sayi-1;a>=0;a--){
		for(int d=sayi;d>a;d--){
			cout<<" ";
		}
		for(int g=2*a-1;g>0;g--){
			cout<<"*";
		}
		cout<<endl;
	}
}*/

/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=sayi-i;k++){
			cout<<" ";
		}
		cout<<"*";
		for(int m=1;m<=2*i-3;m++){
			cout<<" ";
		}
		if(i>1){
		cout<<"*";
	    }
		cout<<endl;
	}
	for(int d=sayi-1;d>0;d--){
		for(int k=sayi;k>d;k--){
			cout<<" ";
		}
		cout<<"*";
		for(int m=2*d-3;m>0;m--){
			cout<<" ";
		}
		if(d>1){
		cout<<"*";
	    }
		cout<<endl;
	}
}*/

/*int main(){
	int sayi;
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int m=sayi-1;m>0;m--){
		for(int f=m;f>0;f--){
			cout<<"*";
		}
		cout<<endl;
	}
}*/

/*int main(){
	int sayi;
	cin>>sayi;
	cout<<endl;
	for(int i=1;i<=sayi;i++){
		for(int k=1;k<=i;k++){
			cout<<"*";
		}
		for(int m=1;m<=2*sayi-2*i;m++){
			cout<<" ";
		}
		for(int g=1;g<=i;g++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int f=sayi-1;f>0;f--){
		for(int r=f;r>0;r--){
			cout<<"*";
		}
		for(int d=sayi*2-f*2;d>0;d--){
			cout<<" ";
		}
		for(int q=f;q>0;q--){
			cout<<"*";
		}
		cout<<endl;
		
	}
}*/ 

/*int main(){
	int a[2][3]={1,2,3,4,5,6};
	int(*p)[3]=a;
	cout<<p[1][2];
}*/

/*int main(){
		int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int m=1;m<=a-i;m++){
			cout<<" ";
		}
		for(int d=1;d<=1;d++){
			cout<<"*";
		}
		for(int n=1;n<=2*i-3;n++){
			cout << " ";
		}
		if(i>1){
		for(int s=1;s<=1;s++){
			cout<< "*";
		}
	    }
		cout <<endl;
	}
	for(int k=a-1;k>=1;k--){
		for(int f=a;f>k;f--){
			cout <<" ";
		}
		cout <<"*";
		for(int h=1;h<=2*k-3;h++){
			cout <<" ";
		}
		if(k>1){
		cout << "*";
	}
		cout <<endl;
	}
}*/



























		

	
	























 





























































