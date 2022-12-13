#include<iostream>
using namespace std;

#define N 21

/* 10. Дадена е рекурентна числова редица. Да се състави рекурсивна функция,
извеждаща n-тия член на редицата. n е естествено число от интервала [0...20].

an = 2*an-1 + 3*an-2

пример:
i= 0 func(i) = 2
i= 1 func(i) = 3
i= 2 func(i) = 12
i= 3 func(i) = 33
i= 4 func(i) = 102
i= 5 func(i) = 303
i= 6 func(i) = 912
i= 7 func(i) = 2733
i= 8 func(i) = 8202
i= 9 func(i) = 24603
*/

int a[N];

long long recFunc(int n) {
    if(a[n]) return a[n];

    return a[N] = 2*recFunc(n-1) + 3*recFunc(n-2);
}


int main(){
    a[0] = 2;
    a[1] = 3;

    int n;
    cout << "Write number between 0 and 20: ";
    cin >> n;

/*
    if(n < 0 || n > 20) {
            cout << "Incorrect n.";
            return 0;
            } */

    cout  << recFunc(n);
    return 0;
}
