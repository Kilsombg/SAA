#include <iostream>
using namespace std;
const int br = 6;
int moneti[br] = {50,20,10,5,2,1};

void stotinki(int i, int j)
{
    if(i >= br) return;

   // if(j == 0) return; // ако може да се достигне до сумата преди да минем през всички варианти на стотинки

        cout << "Broi moneti po " << moneti[i] << " st. = " << j/moneti[i]<<endl;
        stotinki(i+1, j % moneti[i]);
}

int main()
{
	int sum;
	cout << "Enter the number: ";
	cin >> sum;
	stotinki(0, sum);
	return 0;
}
