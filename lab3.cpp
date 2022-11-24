#include<iostream>

using namespace std;

/* Съставете алгоритъм и напишете програма, която намира броя на двойките елементи
 симетрични на главния диагонал на двумерен масив, в които елементът над главния диагонал
 е по-малък от елементът под главния диагонал. Например, следните двойки от елементи са
 симетрични спрямо главния диагонал: а10 и а01; а20 и а02; а21 и а12; а30 и а03 и т.н.
а00   а01   а02   а03
а10   а11   а12   а13
а20   а21   а22   а23
а30   а31   а32   а33
*/
//int main(){
//    int a[][4] = {
//    {0,1,2,3},
//    {4,0,9,6},
//    {7,8,0,9},
//    {10,11,12,0}
//    };
//    int count=0;
//    int width = sizeof(a[0]) / sizeof(int);
//
//    for(int i=0; i<width; i++) {
//        for(int j=i+1; j<width; j++) {
//            if(a[i][j] < a[j][i]) {
//                    count++;
//                    cout << a[i][j] << " < " << a[j][i] << endl;
//            }
//        }
//    }
//
//    cout << count;
//return 0;
//}

/* Програма за изчисляване на факториел чрез рекурсивна функция. */

//int factRec(int n){
//if(n<=1) return 1;
//return n*(fact(n-1));
//}
//
//int main(){
//    int n;
//    cin >> n;
//    cout << factRec(n);
//return 0;
//}

/* Програма за изчисляване на факториел чрез итерация. */

//int fact(int n){
//    int fac=1;
//for(int i=1; i<=n; i++){
//    fac *= i;
//}
//return fac;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    cout << fact(n);
//return 0;
//}


/* Съставете алгоритъм и напишете програма за преобразуване на цяло десетично положително число
в двоично чрез рекурсивна функция. */

//void convertToBinary(int number){
//if(number<=0) return;
//convertToBinary(number / 2);
//cout << number%2;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    convertToBinary(n);
//    return 0;
//}


/* Съставете алгоритъм и напишете програма за изчисляване на x^n (n - цяло число)
чрез рекурсивна функция, съгласно следните формули:
x^n = x*x^n-1, n>0
x^n = 1, n=0
x^n = 1/x^-n, n<0.
*/
//
//double stepen(int a, int n){
//    if(n==0) return 1;
//    if(n>0) return a*stepen(a,n-1);
//    return stepen(a,n+1) / a;
//}
//
//main(){
//    int a,n;
//    cout << "a = ";
//    cin >> a;
//    cout << "n = ";
//    cin >> n;
//    cout << stepen(a,n);
//return 0;}


/* Програма за изчисляване на най-големия общ делител на две естествени числа чрез рекурсивна функция. */
//int delitel(int a, int b){
//    if(a > b) swap(a,b);
//    if(b == a) return a;
//    delitel(abs(a-b), a);
//}
//
//int main(){
//    int x,y;
//    cin >> x;
//    cin >> y;
//    cout << delitel(x,y);
//
//
//return 0;}


/* Съставете алгоритъм и напишете програма за изчисляване на сумата на елементите на даден едномерен масив
 чрез рекурсивна функция.*/

// int sum(int a[], int size){
//     if(size==0) return a[size];
//     return a[size] + sum(a,size-1);
//
// }
//
// main(){
//     int a[] = {1,2,3,4,5};
//     int size = sizeof(a) / sizeof(int);
//     cout << sum(a,size-1);
// return 0;}


/* Съставете алгоритъм и напишете програма, която проверява за наличие на дадена цифра
в дадено естествено число чрез рекурсивна функция. */

//bool findDigit(int number, int digit){
//    if(digit == number % 10) return true;
//    if(number < 10) return false;
//    return findDigit(number/10, digit);
//}
//
//int main(){
//    int n,d;
//    cout << "number : ";
//    cin >> n;
//    cout << "digit : ";
//    cin >> d;
//
//    if(findDigit(n,d)) cout << "true";
//    else cout << "false";
//    return 0;
//}


/* Програма, извеждаща цифрите на дадено естествено число в обратен ред чрез рекурсивна функция. */
//void recDigit(int number){
//    cout << number % 10;
//    if(number < 10) return;
//    recDigit(number / 10);
//}
//
//int main(){
//    int n;
//    cin >> n;
//    recDigit(n);
//return 0;}


/* Програма, проверяваща за наличие на елемент с дадена стойност, в даден едномерен масив чрез рекурсивна функция. */
//bool contains(int a[], int size, int el) {
//    if(size == 0) return el == a[size];
//    if(el == a[size]) return true;
//    else contains(a, size-1, el);
//}
//
//int main() {
//    int a[] = {1,2,4,5,6,7};
//    int size = sizeof(a) /  sizeof(int);
//    if(contains(a,size,3)) cout << "yes";
//    else cout << "no";
//}


/* Програма, проверяваща дали дадена редица е монотонно намаляваща,
т.е. дали всеки елемент на редицата е по-голям или равен на следващият чрез рекурсивна функция. */
//bool monoton(int a[], int n) {
//    if(n <= 1) return a[1] <= a[0];
//    return a[n] <= a[n-1] && monoton(a,n-1);
//}
//
//int main() {
//    int a[] = {1,2,3,4,5,6};
//    int a1[] = {8,7,6,5,4,3};
//    int a2[] = {8,7,6,5,6,4};
//    if(monoton(a,5)) cout <<"a is monoton" << endl;
//    else cout <<"a is not monoton" << endl;
//    if(monoton(a1,5)) cout <<"a1 is monoton" << endl;
//    else cout <<"a1 is not monoton" << endl;
//    if(monoton(a2,5)) cout <<"a2 is monoton" << endl;
//    else cout <<"a2 is not monoton" << endl;
//    return 0;
//}


int main(){
    cout << (int)((unsigned) -1);
return 1;}
