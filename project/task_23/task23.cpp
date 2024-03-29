#include<iostream>
 using namespace std;

 /* 23.������ ��������� ����� � ����� �������� �����,
 �� ���������� �� ����� �� ��������� �������� ��������:
 ����� ������� � ��-����� �� ��������, ����� � ��� ���� �
 ������ � � ��-����� �� ��������, ����� � ���� ���� � ����.
 �� �� ������ ��������, ����� ��������� ���� ����� ��������
 ����� � ������ ���������.
 */

 #define N 3
 #define M 3

 bool isDoubleMonotone(int a[N][M])
 {
     for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(j<M-1 && a[i][j] > a[i][j+1]) return false;
            if(i<N-1 && a[i][j] > a[i+1][j]) return false;
        }
     }

     return true;
 }


 int main() {

 int a[][M] = {
 {1,2,3},
 {2,3,4},
 {3,4,5},
 };

 if(isDoubleMonotone(a)) cout << "Array is double monotone!";
 else cout << "Array is not double monotone!";

 return 0;
 }
