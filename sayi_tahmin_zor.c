#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 4 basamaklı rakamları birbirinden farklı rastgele sayı üretilecek(1234,3268 gibi)
// klavyeden girilen 4 basamaklı sayının rakamlarının lokasyonu doğru ise + yanlış ise - yazdırılacak
// üretilen sayı: 9873
// girilen sayı:  9856
//                ++--
int main()

{
  
 srand(time(0));
 // abcd = 1234
 int sayi = 1000 + rand()%9000; // min 1000 max 9999  
 
 int d = sayi % 10; // birler
 int c = (sayi / 10) % 10; // onlar
 int b = (sayi / 100) % 10; // yüzler
 int a = sayi / 1000; // binler
 
// printf("%d\n",sayi);
 
 int tahmin;
 int i = 1;
 
 if(a != b && a != c && a != d && b != c && b != d && c != d) // rakamları birbirinden farklı ise...
 {
  while(1)
  {
   printf("%d.tahmininizi girin:          ",i);
   scanf("%d",&tahmin);	
  
   if(tahmin / 1000 == a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 == c && tahmin % 10 == d)
   {
    printf("                              ++++\n"); // a b c d doğru
    break;
   }	
  	
   if(tahmin / 1000 == a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 != c && tahmin % 10 != d)
   {
   	printf("                              +---\n"); // a doğru b c d yanlış
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 != c && tahmin % 10 != d)
   {
   	printf("                              ++--\n"); // a b doğru c d yanlış
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 == c && tahmin % 10 != d)
   {
   	printf("                              +++-\n"); // a b c doğru d yanlış
   }
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 == c && tahmin % 10 == d)
   {
   	printf("                              -+++\n"); // a yanlış b c d doğru
   }
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 == c && tahmin % 10 == d)
   {
   	printf("                              --++\n"); // a b yanlış c d doğru
   }
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 != c && tahmin % 10 == d)
   {
    printf("                              ---+\n"); // a b c yanlış d doğru
   }
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 != c && tahmin % 10 != d)
   {
   	printf("                              ----\n"); // a b c d yanlış 
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 == c && tahmin % 10 != d)
   {
   	printf("                              +-+-\n"); // a c doğru b d yanlış
   }
  	
   if(tahmin / 1000 != a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 != c && tahmin % 10 == d)
   {
   	printf("                              -+-+\n"); // a c yanlış b d doğru
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 != c && tahmin % 10 == d)
   {
   	printf("                              +--+\n"); // a d doğru b c yanlış
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 != c && tahmin % 10 == d)
   {
   	printf("                              ++-+\n"); // a b d doğru c yanlış
   }
   
   if(tahmin / 1000 == a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 == c && tahmin % 10 == d)
   {
   	printf("                              +-++\n"); // a c d doğru b yanlış
   }
  	
   if(tahmin / 1000 != a && (tahmin / 100) % 10 != b && (tahmin / 10) % 10 == c && tahmin % 10 != d)
   {
   	printf("                              --+-\n"); // a b d yanlış c doğru
   }
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 != c && tahmin % 10 != d)
   {
   	printf("                              -+--\n"); // a c d yanlış b doğru
   }	
   
   if(tahmin / 1000 != a && (tahmin / 100) % 10 == b && (tahmin / 10) % 10 == c && tahmin % 10 != d)
   {
   	printf("                              -++-\n"); // a d yanlış b c doğru
   }
   	
   i++;	
  }
  	
 }
 
 return 0;
 
}