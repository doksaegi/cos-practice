#include <iostream>
#define BUFLEN 10
using namespace std;
int main (int argc, char *argv[]){
	int arr[BUFLEN];	
	int *p;
	int a, i;

	for (i=0; i<BUFLEN; i++)
		arr[i] = BUFLEN -i;
	a = 5;
	p = &a;

	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr + 2 = " << arr + 2 << endl;
	cout << "*(arr + 2) = " << *(arr + 2) << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p  <<endl;
	

	return 0;
}
