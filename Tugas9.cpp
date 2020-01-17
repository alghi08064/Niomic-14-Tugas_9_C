#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int x,z,i;
	z=0;
	i=1;
    setcolor(5);
	cout<<"Inputkan Nilai x: ";
	cin>>x;
	setcolor(3);
	
	for(i=1;i<=x;i++){
		cout<<z<<endl;
		z=z+5;
	}
		//menggunakan do-while
		//do{
		//	cout<<z<<endl;
		//	i++;
		//	z=z+5;
		//}while(i<=x);
	
	return 0;
}
	

