#include<stdio.h>

/**
  * Дадена е целочислена редица с N елемента. Да се определи и изведе онази
  * стойност на елемент от редицата, която се среща най-много пъти.
  */


int element(int* a, int size)
{
    int count=1, maxCount=0;
    int el;
    for(int i=0; i<size; i++){
            for(int j=1; j<size; j++){
                    if(a[i] == a[j]) count++;
            }
            if(count > maxCount){
                el = a[i];
                maxCount = count;
            }
            count = 1;
    }

    return el;
}

void fillArray(int* a, int size){
    for(int i=0; i<size; i++){
        a[i] = rand() % 5;
    }
}

void printArray(int* a, int size){
    printf("array: ");
    for(int i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d",&N);

int a[N];
fillArray(a,N);
printArray(a,N);

printf("frequent element: %d\n", element(a,N));
}
