/*1.1
#include <iostream>
using namespace std;
float a,b,pole;
int main()
{
  cout<<endl<<"program oblicza pole prostokata"<<endl;;
  cout<<endl<<"wprowadz bok a:";
  cin>> a;
  cout<<endl<<"wprowadz bok b:";
  cin>> b;
  pole=a*b;
  cout<<endl<<"pole prostokata wynosi: "<<pole;

  return 0;
}*/

/*1.2
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  cout<<endl<<"wyswietlamy wartosc stalej M_PI zawartej w math.h";
  cout<<endl<<"wartosc PI wynosi: "<<M_PI;
  return 0;
}*/

// 1.3
/*#include <iostream>
#include <math.h>
using namespace std;
float pi;

int main()
{
  cout<<endl<<"wyświetlamy pierwiastek z pi";
  pi=M_PI;
  cout<<endl<<"pierwiastek z pi wynosi: "<<sqrt(pi);

  return 0;
}*/
// 1.4
/*#include <iostream>
#include <math.h>
using namespace std;
float r,oK,pK;
int main()
{
  cout<<endl<<"obliczamy objetosc kuli";
  cout<<endl<<"wprowadz promien: ";
  cin>>r;
  oK=(4*M_PI*r*r*r)/3; //funkcja pow spr.
  pK=(4*M_PI*r*r);
  cout<<endl<<"pole kuli wynosi: "<<pK;
  cout<<endl<<"objetosc kuli wynosi: "<<oK;

return 0;
}*/

// 1.5
/*#include <iostream>
#include <math.h>
using namespace std;

int a=37;
int b=11;
int wynik;

int main ()
{
    cout<<endl<<"dzielenie calkowite dla a=37 oraz b=11 [dzielenie bez reszty]";
    wynik= a/b;
    cout<<endl<<"wynik dzielenia a/b wynosi: "<<wynik;
return 0;
}*/
// 1.6
/*#include <iostream>
#include <math.h>
using namespace std;
int a=37;
int b=11;
int wynik;
int main ()
{
  cout<<endl<<"reszta z dzielenia dla a=37 oraz b=11";
  wynik=a%b; //% modulo - reszta z dzielenia liczb
  cout<<endl<<"reszta z dzielenia a/b [% modulo] wynosi: "<<wynik;
  return 0;
}*/
// 1.7 Napisz program, który oblicza sumę, różnicę, iloczyn i iloraz
// dla dwóch liczb x i y wprowadzanych z klawiatury. W programie
// przyjmujemy, że liczby x i y są typu float (rzeczywistego).
// Dla zmiennych x, y, suma, roznica, iloczyn i iloraz należy
// przyjąć format wyświetlania ich na ekranie z dokładnością
// dwóch miejsc po kropce.

// #include<iostream>
// #include<math.h>
// using namespace std;

// float x,y,suma,roznica,iloraz,iloczyn;

// int main()
// {
//   cout<<endl<<"podaj x: ";
//   cin>>x;
//   cout<<endl<<"podaj y: ";
//   cin>>y;
//   suma=x+y;
//   roznica=x-y;
//   iloczyn=x*y;
//   iloraz=x/y;
//   cout<<endl<<"suma= "<<suma;
//   cout<<endl<<"roznica= "<<roznica;
//   cout<<endl<<"iloczyn= "<<iloczyn;
//   cout<<endl<<"iloraz= "<<iloraz;
//   return 0;
// }

// 2.1 Napisz program, który dla trzech boków trójkąta a, b i c wprowadzonych
// z klawiatury sprawdza, czy tworzą one trójkąt prostokątny
// (zakładamy, że a > 0, b > 0, c > 0).

// #include <iostream>
// #include <math.h>
// using namespace std;

// float a,b,c;

// int main()
// {
//   cout<<endl<<"zakladamy ze a,b,c>0; czy wprowadzone długosci boków utworza
//   trojkat prostokatny"; cout<<endl<<"wpr a: "; cin>>a; cout<<endl<<"wpr b: ";
//   cin>>b;
//   cout<<endl<<"wpr c: ";
//   cin>>c;
//   if ((a*a)+(b*b) == (c*c))
//   {
//     cout<<endl<<"trojkat jest prostokatny";
//   }
//   else
//   {
//     cout<<endl<<"trojkat nie jest prostokatny";
//   }
//   return 0;
// }

// 2.2 Napisz program, który z wykorzystaniem instrukcji warunkowej
// if oblicza pierwiastki równania kwadratowego ax2+bx+c = 0,
// gdzie zmienne a, b, c to liczby rzeczywiste wprowadzane z klawiatury.
// Dla zmiennych a, b, c, x1 oraz x2 należy przyjąć format
// wyświetlania ich z dokładnością dwóch miejsc po kropce.

// #include <iostream>
// #include <math.h>
// using namespace std;

// float a,b,c,x,x1,x2,delta;

// int main ()
// {
//   cout<<endl<<"obliczamy rownianie ax2+bx=c";
//   cout<<endl<<"wpr a: ";
//   cin>>a;
//   cout<<endl<<"wpr b: ";
//   cin>>b;
//   cout<<endl<<"wpr c: ";
//   cin>>c;
//   cout<<endl<<"obliczam delte";
//   delta=b*b-4*a*c;
//   cout<<endl<<"delta wynosi: "<<delta;
//   if (delta < 0)
//   {
//     cout<<endl<<"brak rozwiazan";
//   }
//   else
//   {
//     if(delta == 0)
//     {
//       x=-b/2*a;
//       cout<<endl<<"rownaie ma jedno rozwiazanie: "<<x;
//     }
//     if(delta > 0)
//     {
//       x1=(-b-sqrt(delta))/2*a;
//       x2=(-b+sqrt(delta))/2*a;
//       cout<<endl<<"rownianie ma dwa rozwiazania: "<<x1<<";"<<x2;
//     }
//   }
//   return 0;
// }

// 2.3 Napisz program, który z wykorzystaniem instrukcji wyboru
// switch oblicza pierwiastki równania kwadratowego ax2+bx+c = 0,
// gdzie zmienne a, b, c to liczby rzeczywiste wprowadzane z klawiatury.
// Dla zmiennych a, b, c, x1 oraz x2 należy przyjąć format
// wyświetlania ich na ekranie z dokładnością dwóch miejsc po
// kropce.
// Wskazówka
// Należy wprowadzić do programu zmienną pomocniczą
// liczba_pierwiastkow.

// #include <iostream>
// #include <math.h>
// using namespace std;

// float a, b, c, x, x1, x2, delta;
// int lp;

// int main() {
//   cout << endl << "olbiczmy ax2+bx+c=0 z pomoca switch case";
//   cout << endl << "wpr a: ";
//   cin >> a;
//   cout << endl << "wpr b: ";
//   cin >> b;
//   cout << endl << "wpr c: ";
//   cin >> c;

//   delta = b * b - 4 * a * c;

//   if (delta < 0) {
//     lp = 0;
//   }
//   if (delta > 0) {
//     lp = 1;
//   } else {
//     lp = 2;
//   }

//   switch (lp) {
//   case 0:
//     cout << endl << "brak rozwiazan";
//     break;
//   case 1:
//     x1 = (-b - sqrt(delta)) / 2 * a;
//     x2 = (-b + sqrt(delta)) / 2 * a;
//     cout << endl << "rownanie ma dwa rozwiazania: " << x1 << ";" << x2;
//     break;
//   case 2:
//     x = -b / 2 * a;
//     cout << endl << "rownanie ma jedno rozwiazanie: " << x;
//     break;
//   }
//   return 0;
// }

// 2.4 Napisz program, który oblicza wartość x z równania ax+b = c.
// Wartości a, b i c należą do zbioru liczb rzeczywistych i są
// wprowadzane z klawiatury. Dodatkowo należy zabezpieczyć
// program na wypadek sytuacji, kiedy wprowadzona wartość a
// jest równa zero. Dla zmiennych a, b, c oraz x należy przyjąć
// format wyświetlania ich z dokładnością dwóch miejsc po
// kropce.

// #include <cstdlib>
// #include <iostream>
// #include <math.h>
// using namespace std;

// float a, b, c, x, i;

// int main() {
//   cout << endl << "obliczamy x z ax+b=c a rozne od 0";
//   cout << endl << "wprowadz a: ";
//   cin >> a;
//   if (a == 0) {
//     i = 0;
//     while (a == 0) {
//       cout << endl << "nieprawidlowa wartosc a; wpr ponownie: ";
//       cin >> a;
//       i++;
//       system("cls");
//     }
//   }
//   cout << endl << "wprowadz b: ";
//   cin >> b;
//   cout << endl << "wprowadz c: ";
//   cin >> c;
//   x = (c - b) / a;
//   cout << endl << "x wynosi: " << x;

//   return 0;
// }

// 2.5 Napisz program, w którym użytkownik zgaduje liczbę losową
// z przedziału od 0 do 9 generowaną przez komputer.
// Wskazówka
// W programie należy zastosować instrukcję (makro) random().

// #include <cstdlib>
// #include <iostream>
// #include <math.h>
// using namespace std;

// int ll, tl, i, z;

// int main() {
//   cout << endl << "zgadujemy losowana liczbe ";
//   z = 9;
//   ll = rand() % z; // funkcja losowa ''% z' oznacza losowanie z zakresu od 0
//   do z cout << endl << ll; cout << endl << "wylosowano liczbe, podaj Twoj typ
//   :"; cin >> tl; if (tl == ll) {
//     cout << endl << "wygrałes, wylosowana liczba byla : " << ll;
//   } else if (tl != ll) {
//     i = 2;
//     while (ll != tl) {
//       ll = rand() % z;
//       cout << endl << "losowanie nr: " << i;
//       cout << endl << ll;
//       cout << endl << "wylosowano liczbe, podaj kolejny typ :";
//       cin >> tl;
//       i++;
//     }
//     cout << endl << "wygrałes, wylosowana liczba byla : " << ll << "
//     typowales " << tl;
//   }
// }

// 3.1 Napisz program, który za pomocą instrukcji for dla danych
// wartości x zmieniających się od 0 do 10 oblicza wartość
// funkcji y = 3x.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x, y, i;

// int main() {
//   cout << endl << "dla x [0,10] obliczamy y=3x"; 
//     for (i = 0; i < 11; i++) {
//     x = i;
//     y = 3 * x;
//     cout << endl << "dla x = " << x << " y = " << y;
//   }
//   return 0;
// }

// 3.2 Napisz program, który za pomocą instrukcji do ... while dla
// danych wartości x zmieniających się od 0 do 10 oblicza wartość
// funkcji y = 3x.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x, y, i;

// int main() {
//   cout << endl << "dla x [0,10] obliczamy y=3x";
//     x = 0;
//     do {
//     //x++;
//     y = 3 * x;  
//     cout << endl << "dla x = " << x << " y = " << y;
//     x++;
//   } while (x<=10);
//   return 0;
// }

// 3.3 Napisz program, który za pomocą instrukcji while dla danych
// wartości x zmieniających się od 0 do 10 oblicza wartość
// funkcji y = 3x.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x, y, i;

// int main() {
//   cout << endl << "dla x [0,10] obliczamy y=3x";
//     x = 0;
//     while (x<=10) {
//     y = 3 * x;  
//     cout << endl << "dla x = " << x << " y = " << y;
//     x++;
//   };
//   return 0;
// }

// 3.4 Napisz program, który za pomocą instrukcji for wyświetla
// liczby całkowite od 1 do 20.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int x;

// int main(){
//   cout << endl << "wyswietlamy od 1 do 20 w petli for: " << endl;
//   for (x=1;x<=20;x++)
//     {
//       cout<< x << ";";
//     }
// return 0;
// }

// 3.5 Napisz program, który za pomocą instrukcji do ... while wyświetla
// liczby całkowite od 1 do 20.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x;

// int main(){
//   cout << endl << "wyswietlamy od 1 do 20 w pętli do while: ";
// x = 0;  
// do{
//   cout << x << ";";
//   x++;
// } while (x<=20);
// return 0;
// }

// 3.6 Napisz program, który za pomocą instrukcji while wyświetla
// liczby całkowite od 1 do 20.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x;

// int main(){
//   cout << endl << "wyswietlamy od 1 do 20 w petli while: ";
//   x = 0;
//   while (x <= 20)
//     {
//       cout << x << ";";
//       x++;
//     }
// return 0;
// }

// 3.7 Napisz program, który za pomocą instrukcji for sumuje liczby
// całkowite od 1 do 100.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x, suma;

// int main(){
//   cout << endl << "sumujemy liczby od 1 do 100 za pomoca petli for";
//   x = 0;
//   suma = 0;
//   for (x=0; x<=100; x++){
//     suma = suma +x;
//   };
//   cout << endl << "suma od 0 do 100 wynosi: " << suma;
// return 0;
// }

// 3.8 Napisz program, który za pomocą instrukcji do ... while sumuje
// liczby całkowite od 1 do 100.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x,suma;

// int main (){
//   cout << endl << "suma liczby od 1 do 100 za pomocą do while";
//   x = 0;
//   suma = 0;
//   do
//     {
//       suma = suma + x;
//       x++;
//     }
//     while(x <= 100);
//   cout << endl << suma;
// }

// 3.9 Napisz program, który za pomocą instrukcji while sumuje
// liczby całkowite od 1 do 100.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int x,suma;

// int main(){
//   cout << endl << "suma od 1 do 100 za pomoca while";
// x = 0;
// suma = 0;
//   while (x <= 100){
//     suma = suma + x;
//     x++;
//   }
//   cout << endl << suma;
// }

// Napisz program, który za pomocą instrukcji for sumuje liczby
// parzyste w przedziale od 1 do 100.
// Wskazówka
// Należy skorzystać z właściwości operatora modulo %.

/*#include <iostream>
#include <math.h>
using namespace std;

int x,sumP,sumN;

int main(){
 cout << endl << "sumujemy parzyste i nieparzyste od 1 do 100 za pomocą for";
  sumP=0;
  sumN=0;
  for (x=0;x<=100;x++){
    if(x % 2 == 0){sumP=sumP+x;}
      else if (x % 2 !=0) {sumN=sumN+x;};
        }
cout << endl << "sP=" << sumP <<";"<< "sN=" << sumN;
  return 0;
  }*/

/*3.11 Napisz program, który za pomocą instrukcji do ... while sumuje liczby parzyste w przedziale od 1 do 100. Wskazówka Należy skorzystać z właściwości operatora modulo %.*/

/*#include <iostream>
using namespace std;
int x,sumP,sumN;
int main(){
  x=0;
  sumP=0;
  sumN=0;
  do{
    if(x%2==0){sumP=sumP+x;}
    else{sumN=sumN+x;};
      x++;
  } while (x<=100);
    cout << endl << "sumP =" << sumP << ";" << "sumN =" << sumN;
  return 0;
}*/

/*3.12 Napisz program, który za pomocą instrukcji while sumuje liczby parzyste w przedziale od 1 do 100. Wskazówka Należy skorzystać z właściwości operatora modulo %.*/

/*#include <iostream>
using namespace std;

int x,sumP,sumN;

int main(){
  x=0;
  sumP=0;
  sumN=0;
  while(x<=100){
    if(x%2==0){sumP=sumP+x;}
    else{sumN=sumN+x;};
    x++;
}
  cout << endl << "sumP= " << sumP << ";" << "sunN= " << sumN;
  return 0;
}*/

/*3.16 Napisz program, który za pomocą instrukcji for znajduje największą i najmniejszą liczbę ze zbioru n liczb losowych z przedziału od 0 do 99 oraz oblicza ich średnią (w zadaniu n = 5).*/

/*#include<iostream>
#include<math.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int x,i,n,minx,maxx;
int t[5];
float sum,avg;

int main(){
  srand(time(NULL));
  n=5;
  sum=0;
  for(i=0;i<n;i++){
    t[i] = (rand()%99);}
    minx=t[1];
    maxx=t[1];
  for(x=0;x<n;x++){
    sum=sum+t[x];
    avg=sum/n;
    if(minx>t[x])
      minx=t[x];
    if(t[x]>maxx)
      maxx=t[x];
  cout<<t[x]<<";";}
    cout<<endl<<"min="<<minx<<";"<<"max="<<maxx<<";"<<"sum="<<sum<<";"<<"avg="<<avg;
return 0;
}*/

/*3.17 Napisz program, który za pomocą instrukcji do ... while znajduje największą i najmniejszą liczbę ze zbioru n liczb losowych z przedziału od 0 do 99 oraz oblicza ich średnią (w zadaniu n = 5).*/

// #include<iostream>
// #include<math.h>
// #include<cstdlib>
// #include<ctime>
// using namespace std;

// int x,i,n,minx,maxx;
// int t[5];
// float sum,avg;

// int main(){
//   srand(time(NULL));
//   n=5;
//   sum=0;
//   i=0;
//   x=0;
//   do {
//     t[i] = (rand()%99);
//     i++;}
//   while(i<=n-1);

//     minx=t[1];
//     maxx=t[1];
  
//   do {
//     sum=sum+t[x];
//     avg=sum/n;
//     if(minx>t[x])
//       minx=t[x];
//     if(t[x]>maxx)
//       maxx=t[x];
//     cout<<t[x]<<";";
//     x++;}
//   while(x<=n-1);

//     cout<<endl<<"min="<<minx<<";"<<"max="<<maxx<<";"<<"sum="<<sum<<";"<<"avg="<<avg;
// return 0;
// }

// 3.18 Napisz program, który za pomocą instrukcji while znajduje największą
// i najmniejszą liczbę ze zbioru n liczb losowych z przedziału
// od 0 do 99 oraz oblicza ich średnią (w zadaniu n = 5).


// #include<iostream>
// #include<math.h>
// #include<cstdlib>
// #include<ctime>
// using namespace std;

// int x,i,n,minx,maxx;
// float sum,avg;

// int main(){
//   srand(time(NULL));
//   n=5;
//   sum=0;
//   for(i=0;i<n;i++){
//     x= (rand()%99);
//     sum=sum+x;
//     avg=sum/n;
//     if(i<=0){
//       minx=x;}
//     if(minx>x)
//       minx=x;
//     if(x>maxx)
//       maxx=x;
//       cout<<x<<";";}
//   cout<<endl<<"min="<<minx<<";"<<"max="<<maxx<<";"<<"sum="<<sum<<";"<<"avg="<<avg;
// return 0;
// }

// #include<iostream>
// #include<math.h>
// #include<cstdlib>
// #include<ctime>
// using namespace std;

// int x,i,n,minx,maxx;
// int t[5];
// float sum,avg;

// int main(){
//   srand(time(NULL));
//   n=5;
//   sum=0;
//   i=0;
//   x=0;
//   while(i<=n-1) {
//     t[i] = (rand()%99);
//     i++;}
//     minx=t[1];
//     maxx=t[1];
  
//   while(x<=n-1) {
//     sum=sum+t[x];
//     avg=sum/n;
//     if(minx>t[x])
//       minx=t[x];
//     if(t[x]>maxx)
//       maxx=t[x];
//     cout<<t[x]<<";";
//     x++;}
//     cout<<endl<<"min="<<minx<<";"<<"max="<<maxx<<";"<<"sum="<<sum<<";"<<"avg="<<avg;
// return 0;
// }

// 3.19 Napisz program wyświetlający tabliczkę mnożenia dla liczb
// od 1 do 100 z wykorzystaniem podwójnej pętli for.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int i,j;
// int main(){
// for (i=1;i<=10;i++){
//   for (j=1;j<=10;j++){
//     cout<<'\t'<<i*j;
//   }
//   cout<<endl;
//   }
// }

// 3.20 Napisz program wyświetlający tabliczkę mnożenia dla liczb
// od 1 do 100 z wykorzystaniem podwójnej pętli do ... while.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int i,j;

// int main (){
//   j=1;
//   do{
//     i=1;
//     do{
//     cout<<'\t'<<i*j;
//     i++;  
//     }while(i<=10);
//     cout<<endl;
//     j++;  
//   } while (j<=10); 
// }

// 3.21 Napisz program wyświetlający tabliczkę mnożenia dla liczb
// od 1 do 100 z wykorzystaniem podwójnej pętli while.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int i,j;
// int main(){
// j=1;
// while(j<=10){
//   i=1;
//   while(i<=10){
//     cout<<'\t'<<i*j;
//     i++;};
//   cout<<endl;
//   j++;
//   }
// }

// 3.22 Napisz program, który wyświetla duże litery alfabetu od A do
// Z i od Z do A, z wykorzystaniem pętli for.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int x;
// int main(){
// for (x=65;x<=90;x++){
//   cout<<(char)x<<";";
// }
//   cout<<endl;
//   for (x=90;x>=65;x--){
//     cout<<(char)x<<";";
//   }
// }

// 3.23 Napisz program, który wyświetla duże litery alfabetu od A do
// Z i od Z do A, z wykorzystaniem pętli do ... while.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int x;
// int main(){
//   x=65;
//   do {
//   cout<<(char)x<<";";
//   x++;} while(x<=90);
//   cout<<endl;
//   x=90;
//   do{
//     cout<<(char)x<<";";
//     x--;} while(x>=65);
// }

// 3.24 Napisz program, który wyświetla duże litery alfabetu od A do
// Z i od Z do A, z wykorzystaniem pętli while.

// #include<iostream>
// #include<math.h>
// using namespace std;

// int x;
// int main(){
//   x=65;
//   while(x<=90) {
//   cout<<(char)x<<";";
//   x++;};
//   cout<<endl;
//   x=90;
//   while(x>=65) {
//     cout<<(char)x<<";";
//     x--;};
// }

//Tablice

// 4.1 Napisz program, który w 10-elementowej tablicy jednowymiarowej
// o nazwie dane umieszcza liczby od 0 do 9 (zobacz
// poniżej jej reprezentację graficzną).
//Tablice

// 4.1 Napisz program, który w 10-elementowej tablicy jednowymiarowej
// o nazwie dane umieszcza liczby od 0 do 9 (zobacz
// poniżej jej reprezentację graficzną).

// #include<iostream>
// #include<math.h>
// using namespace std;

// int dane[10],x;
// int main(){
//   for(x=0;x<10;x++){
//     dane[x]=x;
//     cout<<endl<<dane[x]<<";"<<" to indeks "<<x;
//   }
// }

// 4.2 Napisz program, który w 10-elementowej tablicy jednowymiarowej
// o nazwie dane umieszcza liczby od 9 do 0 (zobacz poniżej
// jej reprezentację graficzną).

// #include<iostream>
// #include<math.h>
// using namespace std;

// int dane[10],x;
// int main(){
//   for(x=0;x<10;x++){
//     dane[x]=10-1-x;
//     cout<<endl<<dane[x]<<";"<<" to indeks "<<x;
//   }
// }

//Tablice dwuwymiarowe

// 4.3 Napisz program, który w zadeklarowanej tablicy dwuwymiarowej
// 10×10 o nazwie macierz umieszcza na przekątnej liczbę 1,
// a poza przekątną 0. Dodatkowo program powinien obliczać
// sumę elementów wyróżnionych

// #include<iostream>
// #include<math.h>
// using namespace std;
// int tab[10][10],i,j,sum;
// int main(){
//   sum=0;
//   for(i=0;i<10;i++){
//     for(j=0;j<10;j++){
//       if(i==j){
//         tab[i][j]=1;
//         sum=sum+tab[i][j];}
//         else
//         tab[i][j]=0;
//       cout<<tab[i][j]<<'\t';
//     }
//     cout<<endl;
//     }
//   cout<<"suma elementów oznaczonych 1 wynosi "<<sum;
// }

// 4.4 Napisz program, który w zadeklarowanej tablicy dwuwymiarowej
// 10×10 o nazwie macierz umieszcza na przekątnej liczby
// od 0 do 9, a poza przekątną 0. Dodatkowo program powinien
// obliczać sumę elementów wyróżnionych w tablicy, tj. znajdujących
// się na jej przekątnej.

/*#include<iostream>
#include<math.h>
using namespace std;

//const n = 10;
int tab[10][10];
int i,j,x,sum;

int main(){
  sum = 0;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(i==j){
      for(x=0;x<10;x++){
        tab[x][x]=x;}
        sum=sum+tab[i][j];
        }
      else
        tab[i][j]=0;
      cout<<tab[i][j]<<'\t';
      }
      cout<<endl;
    }
  cout<<endl<<"suma liczb z przekątnej wynosi: "<<sum;
  return 0;
  }*/

/*4.5 Napisz program, który w zadeklarowanej tablicy dwuwymiarowej 10×10 o nazwie macierz (jej interpretacja graficzna poniżej) umieszcza liczby 1 i 0. Program powinien dodatkowo obliczać sumę wyróżnionych elementów.*/

// #include<iostream>
// using namespace std;

// int macierz[10][10],x,y,sum;
// int main(){
//   sum=0;
//   for(x=0;x<10;x++){
//     for(y=0;y<10;y++){
//       if(10==x+y+1)
//         macierz[x][y]=1;
//           else
//             macierz[x][y]=0;
//       sum=sum+macierz[x][y];
//       cout<<macierz[x][y]<<"\t";}
//     cout<<endl;
//     }
//   cout<<"suma 1 wynosi: "<<sum; 
//   return 0;
// }

// 4.6 Napisz program, który w zadeklarowanej tablicy dwuwymiarowej
// 10×10 o nazwie macierz (jej interpretacja graficzna poniżej)
// umieszcza liczby od 0 do 9. Program powinien dodatkowo
// obliczać sumę wyróżnionych elementów.

/*#include<iostream>
using namespace std;

int macierz[10][10];
int x,y,z,sum;
int main(){
  //const int n=10;
  sum=0;
  for(x=0;x<10;x++){
    for(y=9;y>=0;y--){
      if(y==x)
        for(z=0;z<10;z++)
          macierz[z][z]=z;
        else
            macierz[x][y]=0;
        sum=sum+macierz[x][y];
        cout<<macierz[x][y]<<"\t";
    }
    cout<<endl;
  }
  cout<<"suma liczb z przekątnej wynosi: "<<sum;
  return 0;
}*/

//deklaracja klasy Postac 

/*#include<iostream>
using namespace std;
class Postac{

private:
string nazwa;
float sila;
float magia;
int zloto;
int zycie;

public:

Postac (string nazwa, float sila, float magia, int zloto, int zycie){
  this-> nazwa = nazwa;
  this-> sila = sila;
  this-> magia = magia;
  this-> zloto = zloto;
  this-> zycie = zycie;}

void out(){
  cout<<endl<<"----";
  cout<<endl<<" nazwa "<<nazwa<<" sila "<<sila<<" magia "<<magia<<" zloto "<<zloto<<" zycie "<<zycie<<endl;
  cout<<endl<<"____";
}

};

int main(){
  //Postac *KrólWikingów = new Postac("Król Wikingów",3,2,0,1);
  //KrólWikingów->out();
  Postac *p1 = new Postac ("Król", 3,2,0,1);
  p1->out();
  Postac *MistrzŁucznictwa = new Postac("Mistrz Łucznictwa",1,1,0,1);
  MistrzŁucznictwa->out();
  Postac *MistrzWalkiWręcz = new Postac("Mistrz Walki Wręcz",2,0,0,1);
  MistrzWalkiWręcz->out();
  return 0;
}*/

#include<iostream>
using namespace std;

class Pojazd{

private:


int id;
string marka,model;
int rocznik;
float cena;

public:

static int licz=1;
Pojazd (string marka, string model,int rocznik, float cena, int id){
  this-> marka = marka;
  this-> model = model;
  this-> rocznik = rocznik;
  this-> cena = cena;
  this-> id = id;

}

void out(){
  cout<<endl<<" marka "<<marka<<" model "<<endl<<model<<" rocznik "<<endl<<rocznik<<" cena "<<endl<<cena;
}

void sum(){
  id=licz++;
};

int main(){
  Pojazd *p1 = new Pojazd("Fiat","Punto Gtx",2000,27890.55,1);
  p1->out();
  Pojazd *p2 = new Pojazd("Lancia","Delta Integrale",1993,26900.87,2);
  p2->out();
  cout<<endl<<"liczba pojazdów :"<<sum;
  return  0;
}

};