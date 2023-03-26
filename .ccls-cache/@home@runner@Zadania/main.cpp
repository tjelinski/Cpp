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

// deklaracja klasy Pojazd metoda out

// #include<iostream>
// using namespace std;

// class Pojazd{

// private:

// string marka,model;
// int rocznik;
// float cena;

// public:

// static int count;
// int id;

// Pojazd (string marka, string model,int rocznik, float cena, int id){
//   this-> marka = marka;
//   this-> model = model;
//   this-> rocznik = rocznik;
//   this-> cena = cena;
//   this-> id = id;
//   count++;
// }

// void out(){
//   cout<<endl<<"marka "<<marka<<endl<<"model "<<model<<endl<<"rocznik "<<rocznik<<endl<<"cena "<<cena<<endl<<"id "<<id<<endl;;
// }

// static int sum(){
//   return count;}
// };

// int main(){
//   Pojazd *p1 = new Pojazd("Fiat","Punto Gtx",2000,27890.55,1);
//   p1->out();
//   Pojazd *p2 = new Pojazd("Lancia","Delta Integrale",1993,26900.87,2);
//   p2->out();
//   cout<<endl<<"liczba pojazdów :"<<p1->sum();
//   delete p1;
//   delete p2;
//   return  0;
//   }


/*4.7 Napisz program, który w zadeklarowanej tablicy dwuwymiarowej 10×10 umieszcza w pierwszej kolumnie liczby od 0 do 9, w drugiej kwadraty tych liczb, natomiast w pozostałych kolumnach 0 (interpretacja graficzna tablicy poniżej). Dodatkowo program powinien obliczać sumę elementów znajdujących się w pierwszej kolumnie oraz sumę liczb z kolumny drugiej.*/
/*
#include<iostream>
using namespace std;

int main(){
  
const int n = 10;
int array[n][n],sum1,sum2;
int x,y;
  
  for(x=0;x<n;x++){
    for(y=0;y<n;y++){
      if(y==0)
      array[x][y]=x;
      if(y==1)
      array[x][y]=x*x;
      if(y>1)
      array[x][y]=0;
      cout<<array[x][y]<<"\t";
    }
    cout<<endl;
  }
  
  x=0;
  y=0;
  sum1=0;
  sum2=0;
  for(x=0;x<n;x++){
    for(y=0;y<n;y++){
      if(y==0)
        sum1=sum1+array[x][y];
      if(y==1)
        sum2=sum2+array[x][y];
    }
  }
  
  cout<<"sum z 1 kol: "<<sum1;
  cout<<endl;
  cout<<"sum z 2 kol: "<<sum2;
  return 0;
}
*/
/*4.8Dane są dwie tablice dwuwymiarowe 10×10 o nazwach a i b. Tablica a zawiera elementy przedstawione poniżej.
Tablica b zawiera same zera. Napisz program, który przepisuje zawartość tablicy a do tablicy b, zamieniając kolumny na wiersze (interpretacja graficzna tablicy wynikowej poniżej).
*/
/*
#include<iostream>
using namespace std;

int main(){
const int n=10;
int ta[n][n],tb[n][n],x,y;

	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			ta[x][y]=y;
			cout<<ta[x][y]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;

	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			tb[x][y]=0;
			cout<<tb[x][y]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;

	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			tb[x][y]=ta[y][x];
			cout<<tb[x][y]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
*/

//5 Podprogramy / Funkcje

/*5.1 Napisz program obliczający pole prostokąta. Powinien on zawierać jeden podprogram: bezparametrową funkcję pole_ prostokata(), w której zawarty będzie algorytm obliczania pol a. Wartości boków a i b wprowadzamy z klawiatury. W programie należy założyć, że zmienne a, b oraz pole są typu float (rzeczywistego) i są one zmiennymi globalnymi. Należy dla nich przyjąć format wyświetlania ich z dwoma miejscami po kropce.*/

/*
#include<iostream>
using namespace std;

float pole,a,b;

void pole_p (){
	cout<<endl<<"obl. pole a*b za pomocą funkcji";
	cout<<endl<<"wpr. a ";
	cin>>a;
	cout<<endl<<"wpr. b ";
	cin>>b;
	pole=a*b;
	cout<<"pole wynosi: "<<pole;
}

int main(){
	pole_p();
return 0;
}
*/

/*5.2 Napisz program obliczający pole prostokąta. Powinien on zawierać jeden podprogram: bezparametrową funkcję pole_ prostokata, w której zawarty będzie algorytm obliczania pola. Wartości boków a i b wprowadzamy z klawiatury. W programie należy założyć, że zmienne a, b oraz pole są typu float (rzeczywistego) i są zmiennymi lokalnymi. Należy dla nich przyjąć format wyświetlania ich z dwoma miejscami po kropce.*/
/*
#include<iostream>
using namespace std;

void pole_p (){
	float pole,a,b;
	cout<<endl<<"obl. pole a*b za pomocą funkcji";
	cout<<endl<<"wpr. a ";
	cin>>a;
	cout<<endl<<"wpr. b ";
	cin>>b;
	pole=a*b;
	cout<<"pole wynosi: "<<pole;
}

int main(){
	pole_p();
return 0;
}
*/

/*5.3 Napisz program obliczający pole prostokąta. Powinien on zawierać jeden podprogram: funkcję pole_prostokata(), do której parametry przekazywane są przez wartość. Wartości boków a i b wprowadzamy z klawiatury. W programie należy założyć, że zmienne a, b oraz pole są typu float (rzeczywistego) i są zmiennymi globalnymi. Należy dla nich przyjąć format wyświetlania ich z dwoma miejscami po kropce.*/

/*#include<iostream>
using namespace std;

float pole,a,b;

void pole_p (float a, float b){
pole=a*b;
cout << "pole wynosi: " << pole;
}

int main(){
  cout<<endl<<"obl. pole a*b za pomocą funkcji";
	cout<<endl<<"wpr. a ";
	cin>>a;
	cout<<endl<<"wpr. b ";
	cin>>b;
  pole_p(a,b);
return 0;
}*/

/*5.4 Napisz program, który oblicza pole prostokąta. Powinien on zawierać trzy bezparametrowe funkcje: czytaj_dane(), przetworz_ dane() oraz wyswietl_wynik(). Wartości boków a i b wprowadzamy z klawiatury. W programie należy założyć, że zmienne a, b oraz pole są typu float (rzeczywistego) i są zmiennymi globalnymi. Należy dla nich przyjąć format wyświetlania ich z dwoma miejscami po kropce. Funkcja czytaj_ dane() czyta wartości boków a i b, przetworz_dane() oblicza pole prostokąta, a wyswietl_wynik() prezentuje wyniki na ekranie komputera.*/
/*
#include<iostream>
using namespace std;

float pole,a,b,wynik;

void read (){
	cout<<endl<<"obl. pole a*b za pomocą funkcji";
	cout<<endl<<"wpr. a ";
	cin>>a;
	cout<<endl<<"wpr. b ";
	cin>>b;
}

void count (){
	pole=a*b;
	wynik=pole;
}

void show (){
	cout << "pole wynosi: " << wynik;
}

int main(){
  
  read();
  count();
	show();

return 0;
}
*/

/*5.5 Napisz program, który z wykorzystaniem instrukcji wyboru
switch ... case oblicza pierwiastki równania kwadratowego
ax2+bx+c = 0, gdzie zmienne a, b oraz c to liczby rzeczywiste
wprowadzane z klawiatury. Dla zmiennych a, b, c, x1 oraz x2
należy przyjąć format wyświetlania ich z dwoma miejscami
po kropce. Program powinien zawierać trzy bezparametrowe
funkcje: czytaj_dane(), przetworz_dane()i wyswietl_wynik().*/

// #include<iostream>
// #include<math.h>
// #include<cstdlib>
// using namespace std;

// float a,b,c,x,x1,x2,delta;
// int lp;

// void read(){
// 	cout << endl << "obliczamy pierwiastki ax2+bx+c=0";
// 	cout << endl << "podaj a: ";
// 	cin >> a;
// 	if(a == 0)
// 		while(a == 0){
// 			cout << "podaj a różne od 0 :";
// 				cin >> a;
// 		}
// 	if(a!=0)
// 		cout << "podaj b: ";
// 		cin >> b;
// 		cout << "podaj c: ";
// 		cin >> c;
// 	}

// 	void count(){
// 		delta=b*b-(4*a*c);
		
// 		if(delta==0){
// 			x=-b/(2*a);
// 			lp=0;
// 		}
// 		if(delta>0){
// 			x1=(-b-sqrt(delta))/(2*a);
// 			x2=(-b+sqrt(delta))/(2*a);
// 			lp=1;
// 		}
// 		//else 
// 		if (delta<0)
// 			lp=2;
// 	}

// 	void show(){
// 	//int lp;
// 	switch (lp) {
//   case 0:
//     cout << "jedno rozwiązanie, x: " << x;
//     break;
//   case 1:
//     cout << "dwa rozwiazania, x1: " << x1 << " x2: " << x2;
//     break;
// 	case 2:
//     cout << "brak rozwiazan";
//     break;
// 		}
// }

// int main(){
// 	read();
// 	count();
// 	show();
// 	return 0;
// }

// cwiczenia klasa komputer konstruktor wieloargumentowy

// #include<iostream>
// using namespace std;

// class Komputer{

// string rodzaj,hdd,ram,proc;
// float pojemnosc,wielkosc;

// public:
// Komputer (string rodzaj,string hdd,string ram, string proc, float pojemnosc, float wielkosc){
// 	this-> rodzaj=rodzaj;
// 	this-> hdd=hdd;
// 	this-> ram=ram;
// 	this-> proc=proc;
// 	this-> pojemnosc=pojemnosc;
// 	this-> wielkosc=wielkosc;
// }

// void out(){
// 	cout << endl << "typ: " << rodzaj << endl <<"dysk: " << hdd << endl << "ram: " << ram << endl << "ram W: " << wielkosc << endl << "hdd P: " << pojemnosc << endl << "procesor: " << proc<< endl;
// }

// };

// int main(){
// 	Komputer *pc1 = new Komputer("pc","hdd","dimm","amd",4096,500);
// 	pc1->out();
// 	Komputer *pc2 = new Komputer("notebook","ssd","sodimm","intel",8192,750);
// 	pc2->out();
// 	return 0;
// }

//cwiczenia tablice zelent https://miroslawzelent.pl/kurs-c++/tablice-w-c++/

// #include<iostream>
// using namespace std;

// float array[5],sum,avg,x,n;
// int main(){
// 	sum=0;
// 	n=5;
// 	cout << endl<< "podaj oceny: ";
// 	for(int i=0;i<n;i++){
// 		cout << endl << i+1 << " ocena: ";
// 		cin >> x;
// 		array[i]=x;
// 		sum = sum + array[i];
// 		//sum += array[i]; //to samo co wyżej
// 	}
// 	avg=sum/n;
// 	cout << "średnia z ocen : " << avg;
// 	return 0;
// }

// #include<iostream>
// //#include<iomanip>
// using namespace std;

// long double array[1000];
// int n;
// int main(){
// 	n=100;
// 	array[0]=1;
// 	array[1]=1;
// 	cout << endl << "ciąg fibonacciego" <<endl;
// 	for(int i=2;i<n;i++){
// 		array[i]=array[i-1]+array[i-2];
// 		//cout<<setprecision(10000);
//   	cout<<array[i]<<";";
// 		}
// 		cout<<"wyraz nr: "<< n <<" = "<< array[n-1]; 	
// 		//}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int const n = 11;
// int array[n][n],w,k;	

// int main(){
// 	for(w=1;w<=n-1;w++){
// 		for(k=1;k<=n-1;k++){
// 			array[w][k]=w*k;
// 			cout<<array[w][k]<<"\t";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

/*5.6 Napisz program, który w tablicy 10×10 umieszcza losowo na
przekątnej cyfry od 0 do 9, a poza nią zera. Dodatkowo oblicza
on sumę liczb znajdujących się na przekątnej. Program powinien
zawierać trzy bezparametrowe funkcje: czytaj_dane(),
przetworz_dane() i wyswietl_wynik(). Funkcja czytaj_dane()
umieszcza dane w tablicy, przetworz_dane() oblicza sumę liczb
znajdujących się na przekątnej, natomiast funkcja wyswietl_
􀂴wynik() prezentuje zawartość tablicy na ekranie monitora.*/

// #include<iostream>
// #include<math.h>
// using namespace std;

// int const n=10;
// int array[n][n],w,k,sum;

// void read(){
// 	srand(time(NULL));
// 	for(w=0;w<=n-1;w++){
// 		for(k=0;k<=n-1;k++){
// 			if(w==k)
// 			array[w][k]=(rand()%9);
// 		}
// 	cout<<endl;
// 	}
// }

// void count(){
// 	sum=0;
// 	for(w=0;w<=n-1;w++){
// 		for(k=0;k<=n-1;k++)
// 		sum += array[w][k];
// 		}
// 	}

// void show(){
// 	for(w=0;w<=n-1;w++){
// 		for(k=0;k<=n-1;k++){
// 		cout<<array[w][k]<<"\t";
// 		}
// 	cout<<endl;
// }
// 	cout<<endl;
// 	cout<<"suma liczb z przekątnej: "<<sum<<endl;
// }

// int main(){
// 	read();
// 	count();
// 	show();
// 	return 0;
// }

/*5.7 Napisz program, który sortuje n liczb wczytanych z klawiatury
(w zadaniu jest ich sześć). Powinien on zawierać trzy bezparametrowe
funkcje: czytaj_dane(), przetworz_dane() i wyswietl_
􀂴wynik(). Funkcja czytaj_dane() czyta dane wprowadzone
z klawiatury i umieszcza je w tablicy o nazwie liczby. Funkcja
przetworz_dane() sortuje je według wybranego algorytmu
(w programie należy zastosować algorytm sortowania bąbelkowego).
Funkcja wyswietl_wynik() prezentuje natomiast zawartość
posortowanej tablicy liczby na ekranie monitora.*/


// #include<iostream>
// #include<math.h>
// using namespace std;

// int const n = 6;
// int numb[n],temp[n],x,y;

// void read(){
// cout<<endl<<"wpr: "<<n<<" liczb";
// 	for(x=0;x<n;x++){
// 		cout<<endl<<"wpr: "<<x+1<<" liczbe: ";
// 		cin>>numb[x];
// 	}
// 	}

// void count(){
// 	for(x=0;x<n;x++)
// 		for(y=0;y<n;y++)
// 			if(numb[y]>numb[y+1]){
// 				temp[y]=numb[y];
// 			    numb[y]=numb[y+1];
// 			    numb[y+1]=temp[y];
// 			}
// 	}

// void show(){
// 	cout<<endl<<"po sortowaniu bąbelkowym: ";
// 	for(x=0;x<n;x++){
// 		cout<<temp[x]<<";";}
// }

// int main(){
// 	read();
// 	count();
// 	show();
	
// 	return 0;
// }

/*5.8 Napisz program, który losuje n liczb całkowitych (w zadaniu
n = 10) z przedziału od 0 do 99, a następnie znajduje najmniejszą
i największą z nich. Powinien on zawierać trzy bezparametrowe
funkcje: czytaj_dane(), przetworz_dane() i wyswietl_
wynik(). Funkcja czytaj_dane() losuje n całkowitych liczb od 0
do 99. przetworz_dane() porównuje je ze sobą i ustala, która
z nich jest najmniejsza oraz największa. Funkcja wyswietl_wynik()
prezentuje natomiast największą i najmniejszą liczbę z wylosowanego
zbioru.*/

// #include<iostream>
// #include<math.h>
// using namespace std;

// int const n = 10;
// int x,minn,maxn,numbers[n];
// void read(){
// srand(time(NULL));
// 	cout<<endl<<"losowanie liczb: ";
// 		while(x<n){
// 			numbers[x]=rand()%99;
// 			cout<<numbers[x]<<";";
// 			x++;
// 		}
// }

// void count(){
// 	x=0;
// 	maxn=minn=numbers[1];
// 	while(x<n){
// 		if(maxn<numbers[x]){
// 			maxn=numbers[x];
// 		}
// 		if(minn>numbers[x]){
// 			minn=numbers[x];
// 		}
// 		x++;
// 	}
// }

// void show(){
// 	cout<<endl<<"min:"<<minn<<"\t"<<"max:"<<maxn;
// }

// int main(){
// 	read();
// 	count();
// 	show();
	
// 	return 0;
// }

/*5.9 Napisz program, który dla x zmieniającego się od 0 do 5 z krokiem
0,5 oblicza wartość funkcji y = x2+1.*/

// #include<iostream>
// #include<math.h>
// using namespace std;

// int const n = 10;
// float i,y,x;

// void read_count(){
// 	for(i=0;i<=n;i++){
// 		if(i<1){
// 			x=0;
// 			y=x*x+1;}
// 		else
// 		x=x+0.5;
// 		y=x*x+1;
// 		cout<<endl<<"x= "<<i/2<<"\t"<<"y="<<y;
// 	}	
// }

// int main(){
// 	cout<<endl<<"obl. y=x^2+1 dla kroku 0,5 od 0 do 5";
// 	read_count();
// 	return 0;
// }


// 6
// Programowanie obiektowe

// 6.1 Napisz zgodnie z zasadami programowania obiektowego program,
// który oblicza pole prostokąta. Klasa powinna zawierać
// trzy metody:
// 􀁔 czytaj_dane() — umożliwia wprowadzenie do programu
// wartości boków a i b z klawiatury. W programie należy
// przyjąć, że boki oraz zmienna pole są typu float
// (rzeczywistego).
// 􀁔 przetworz_dane() — oblicza pole prostokąta według wzoru
// pole = a*b.
// 􀁔 wyswietl_wynik() — wyświetla wartości boków a i b oraz
// zmiennej pole w określonym formacie. Dla tych trzech
// zmiennych należy przyjąć format wyświetlania ich na
// ekranie z dwoma miejscami po kropce.

// #include<iostream>
// #include<math.h>
// using namespace std;

// class Pole_p{

// public:
// float ba,bb,pole;

// Pole_p(float ba, float bb){
// 	this-> ba=ba;
// 	this-> bb=bb;
// }

// void read(){
// 	cout<<endl<<"podaj a: ";
// 	cin>>ba;
// 	cout<<endl<<"podaj b: ";
// 	cin>>bb;
// }

// void count(){
// 	pole=ba*bb;
// }
	
// void out(){
// 	cout<<endl<<"pole wynosi: "<<pole;
// }

// };

// int main(){
// 	Pole_p *p1= new Pole_p(5,5);
// 	p1->count();
// 	p1->out();
	
// 	Pole_p *p2= new Pole_p(4.5,5);
// 	p2->count();
// 	p2->out();
	
// 	Pole_p *p3= new Pole_p(1.1,5);
// 	p3->count();
// 	p3->out();
	
// 	Pole_p *p4= new Pole_p(7.987,5.1236758);
// 	p4->count();
// 	p4->out();
	
// }

/*6.2 Napisz zgodnie z zasadami programowania obiektowego
program, który oblicza pierwiastki równania kwadratowego
ax2+bx+c = 0 z wykorzystaniem instrukcji wyboru switch ...
case. Klasa powinna zawierać trzy metody:
􀁔 czytaj_dane() — jest odpowiedzialna za wczytanie danych
do programu oraz obsłużenie sytuacji, kiedy a = 0. Zmienne
a, b oraz c to liczby rzeczywiste wprowadzane z klawiatury.
􀁔 przetworz_dane() — odpowiada za wykonanie niezbędnych
obliczeń.
􀁔 wyswietl_wynik() — jest odpowiedzialna za pokazanie
wyników na ekranie monitora. Dla zmiennych a, b, c, x1
oraz x2 należy przyjąć format wyświetlania ich z dwoma
miejscami po kropce.*/

// #include<iostream>
// #include<math.h>
// #include <iomanip>
// using namespace std;

// class mat{

// public:

// float a,b,c,d,x,x1,x2;
// int i,lp;

// mat(float a, float b, float c){
// 	this->a=a;
// 	this->b=b;
// 	this->c=c;
// }

// //};

// void read(){
// 	//float a,b,c,i;
// 	cout<<endl<<"wpr a!=0 :";
// 	cin>>a;
// 	cout<<endl;
// 	if(a==0)
// 		while(a==0){
// 		cout<<endl<<"wpr a<0 || a>0";
// 			cin>>a;
// 			i++;
// 		}
// 		cout<<endl<<"wpr b: ";
// 		cin>>b;
// 		cout<<endl<<"wpr c: ";
// 		cin>>c;
// }

// void count(){
// 	cout<<endl;
// 	cout<<a<<";"<<b<<";"<<c;
// 	cout<<endl;
// 	int lp;
// 	d=b*b-4*a*c;
// 	if(d==0){
// 		x=-b/(2*a);
// 		lp=0;}
// 	if(d<0)
// 		lp=1;
// 	if(d>0){
// 		x1=(-b-sqrt(d))/(2*a);
// 		x2=(-b+sqrt(d))/(2*a);
// 		lp=2;}
// }

// void out(){
// 	int lp;
// 	switch (lp){
// 		case 0:
// 		cout<<endl<<"1 pierwiastek : "<<setprecision(2)<<x;
// 		break;
// 		case 1:
// 		cout<<endl<<"brak roz.";
// 		break;
// 		case 2:
// 		cout<<endl<<"2 pierwiatki : "<<x1<<setprecision(2)<<"\t"<<setprecision(2)<<x2;
// 		break;
// 	}
// }
// };

// int main(){
// mat *dane1= new mat(1.02,5,4);
// mat *dane2= new mat(1,2,1);
// mat *dane3= new mat(1,5,4);
// mat *dane4= new mat(1,3,5);
// mat *dane5= new mat(9,6,1);
// //dane1->read();
// dane1->count();
// dane1->out();
// cout<<endl;

// //dane2->read();
// dane2->count();
// dane2->out();
// cout<<endl;

// //dane3->read();
// dane3->count();
// dane3->out();
// cout<<endl;

// //dane4->read();
// dane4->count();
// dane4->out();
// cout<<endl;

// //dane5->read();
// dane5->count();
// dane5->out();
// cout<<endl;

// return 0;
// }

/*6.3 Napisz zgodnie z zasadami programowania obiektowego program,
który w tablicy 10×10 umieszcza losowo na przekątnej
liczby od 0 do 9, a poza nią zera. Dodatkowo oblicza on sumę
liczb znajdujących się na przekątnej. Klasa powinna zawierać
trzy metody:
􀁔 czytaj_dane() — umieszcza dane w tablicy;
􀁔 przetworz_dane() — oblicza i wyświetla sumę liczb
znajdujących się na przekątnej;
􀁔 wyswietl_wynik() — pokazuje zawartość tablicy na ekranie*/

// #include<iostream>
// #include<math.h>
// #include<ctime>
// using namespace std;

// class wynik{

// public:

// int tab[10][10],w,k,i,sum;

// wynik(){}
// //wynik(int tab[10][10]){
// //	this->tab[10][10]=tab[10][10];
// //}
// //};

// void read(){
//     //int tab[10][10];
// 	srand(time(NULL));
// 	for(w=0;w<10;w++){
// 		for(k=0;k<10;k++){
// 			if(w==k)
// 				tab[w][k]= rand()%9;
// 			else
// 				tab[w][k]=0;}
// 	cout<<endl;
// 	}
// }

// void count(){
//     //int tab[10][10];
// 	sum=0;
// 	for(i=0;i<10;i++)
//   sum+=tab[i][i];
// }

// void show(){
// w=0;
// k=0;
// for(w=0;w<10;w++){
// 	for(k=0;k<10;k++){
// 	cout<<tab[w][k];
// 	}
// 	cout<<endl;
// }
// 	cout<<"suma ="<<sum;
// }
// };

// int main(){
// wynik *w1 = new wynik();
// w1->read();
// w1->count();
// w1->show();
// return 0;
// }

// 6.4 Napisz zgodnie z zasadami programowania obiektowego program,
// który sortuje n liczb (w zadaniu jest ich sześć). Klasa
// powinna zawierać trzy metody:
// 􀁔 czytaj_dane() — odczytuje dane i umieszcza je w tablicy
// o nazwie liczby;
// 􀁔 przetworz_dane() — sortuje dane, korzystając z wybranego
// algorytmu (w programie zastosowano algorytm
// sortowania bąbelkowego);
// 􀁔 wyswietl_wynik() — prezentuje zawartość posortowanej
// tablicy liczby na ekranie monitora.

// #include<iostream>
// #include<math.h>
// #include<ctime>
// using namespace std;
	
// class sort{

// public:
// static int const n=10;
// int tab[n],i,j,temp;
// void read();
// void process();
// void show();

// };

// void sort::read(){
// 	cout<<endl<<"przed : "<<"\t";
// 	srand(time(NULL));
// 	for(i=0;i<n;i++){
// 		tab[i]=(rand()%100)-100;
// 		cout<<tab[i]<<";";
// 	}
// }
	
// void sort::process(){
// 	int temp;
// 	for(i=0;i<n;i++){
//  		for(j=0;j<n;j++)
//  			if(tab[j]>tab[j+1]){
//  				temp=tab[j];
//  			  tab[j]=tab[j+1];
//  			  tab[j+1]=temp;
// 			}
// 		}
// 	}

// 	void sort::show(){
// 		cout<<endl<<"po : "<<"\t"<<"\t";
// 		for(i=0;i<n;i++)
// 			cout<<tab[i]<<";";
// 	}	

// int main(){
// sort s1,s2,s3;
// 	s1.read();
// 	s1.process();
// 	s1.show();
// 	s2.read();
// 	s2.process();
// 	s2.show();
// 	s3.read();
// 	s3.process();
// 	s3.show();
// return 0;	
// }

//klasy zadania

// 1. Napisz program obliczający pole powierzchni prostopadłościanu (klasa Prostopadloscian o polach
// a,b,c). 

// #include<iostream>
// #include<math.h>
// #include <iomanip>
// #include<cmath>
// using namespace std;

// class Ppn{

// public:
// float a,b,c,pole;

// Ppn(float a,float b,float c){
// 	this->a=a;
// 	this->b=b;
// 	this->b=b;
// }
// void polePpn(){
// 	pole = 2*(a*b+b*c+a*c);
// 	cout<<"pole Ppn wynosi: "<<setprecision(4)<<pole;
// }

// //~Ppn(){cout<<"destruktor";}

// };

// int main(){
// 	Ppn *Ppn1 = new Ppn(2.1,2.1,2.1);
// 	Ppn1->polePpn();
// 	return 0;
// }

// #include<iostream>
// #include<math.h>
// #include <iomanip>
// #include<cmath>
// using namespace std;

// class Ppn{

// public:
// float a,b,c,pole;//pola
// void Ppno();// deklaracja metody
// };

// void Ppn::Ppno(){ //definicja metody
//     float a=b=c=2.1;
// 		pole = 2*(a*b+b*c+a*c);
// 		cout<<"pole Ppn wynosi: "<<setprecision(4)<<pole;
// }

// int main(){
// 	Ppn w1; // tworze obiekt w1
// 	w1.Ppno(); //wywołanie metody dla w1
// 	return 0;
// }

// 2.Napisz program obliczający objętość prostopadłościanu (klasa Prostopadloscian o polach a,b,c) 

// #include<iostream>
// #include<math.h>
// #include <iomanip>
// using namespace std;

// class oVp{
// public:
// float a,b,c,v,p;

// oVp(float a, float b, float c){
// 	this-> a = a;
// 	this-> b = b;
// 	this-> c = c;
// }

// void V(){
// 	v=a*b*c;
// 	p=2*(a*b+b*c+a*c);
// 	cout<<endl<<"objetość wynosi: "<<v;
// 	cout<<endl<<"pole wynosi: "<<p;
// }

// ~oVp(){cout<<endl<<"destruktor";}

// };

// int main(){
// oVp *oVp1 = new oVp(2.1,2.1,2.1);
// oVp1->V();
	
// return 0;
// }

//3. / 4. Napisz program obliczający pole powierzchni i objętość kuli (klasa Kula o polu r). 

// #include<iostream>
// #include<math.h>
// #include<iomanip>
// using namespace std;

// class P_V_k{

// private:
// float r;//,p,v;

// public:
// float p,v;

// //P_V_k(){}

// P_V_k(float r){
// this-> r = r;
// }

// //friend void P(P_V_k* pvk1,float r,float p);
// friend void P(P_V_k pvk1, float r);
// //friend void V(P_V_k* pvk2,float r,float v);
// friend void V(P_V_k pvk2, float r);

// void out(){
// 	cout<<"obiekt o 'r':"<<r<<endl;
// }
// void out2(){
// 	cout<<endl<<"r: "<<r<<" pole: "<<p<<endl;
// 	cout<<endl<<"r: "<<r<<" objetość: "<<endl<<v;
// }

// };
// void P(P_V_k *pvk1,float r){
// //void P(P_V_k pvk1, float r){
// 	//pvk1.p=4*M_PI*r*r;
// 	pvk1->p=4*M_PI*r*r;
// }

// void V(P_V_k *pvk2,float r){
// //void V(P_V_k pvk2, float r){
// 	//pvk2.v=4*(M_PI*r*r*r)/3;
// 	pvk2->v=4*(M_PI*r*r*r)/3;
// }

// int main(){
// 	cout<<endl<<"obl. pole i objętość kuli"<<endl;
	
// 	P_V_k *pvkW = new P_V_k(6);
// 	pvkW->out();
// 	P(pvkW,6);
// 	V(pvkW,6);
// 	//P_V_k pvkW1;
// 	//pvkW1.out();
// 	pvkW->out2();
	
// 	return 0;
// }

//5. Napisz program obliczający pole powierzchni walca oraz jego objęto (klasa Walec o polach r,l).

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class walec{

private:
float r,h;

public:
float pp,p,v;

walec(){}

walec(float r, float h){
	this->r = r;
	this->h = h;
}

friend void P(walec a){};
friend void Pp(walec b, float r, float h){};
friend void V(walec c, float r, float h){};

void out() const {
	cout<<endl<<"pola i objętość walca";
	cout<<endl<<"pole podstawy: "<<setprecision(6)<<pp;
	cout<<endl<<"pole: "<<setprecision(6)<<p;
	cout<<endl<<"objętość: "<<setprecision(6)<<v;
}

//~walec();
};

void P(walec* a, float r, float h){
	a->p=2*M_PI*r*(r+h);
}

void Pp(walec* b, float r, float h){
	b->pp=2*M_PI*r*h;
}

void V(walec* c, float r, float h){
	c->v=M_PI*r*r*h;
}

int main(){
	walec* w1 = new walec(5,5);
	P(w1,5,5);
	Pp(w1,5,5);
	V(w1,5,5);
	w1->out();
	
	cout<<endl;
	
	walec *w2 = new walec(6,6);
	P(w2,6,6);
	Pp(w2,6,6);
	V(w2,6,6);
	w2->out();
	
return 0;
}