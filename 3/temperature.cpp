#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	int fahr, celsius;
	int lower, upper, step;
	lower = atoi(argv[1]);
	upper = atoi(argv[2]);
	step = atoi(argv[3]);
	fahr = lower;
        while (fahr <= upper) {
        	celsius = 5 * (fahr – 32) / 9;
        	cout << "fahr: " << fahr << "\tcelsius: " << celsius <<endl;
        	fahr = fahr + step;
	}
       return 0;	
}
int ascii_to_int(char*str)
{
  	char c;
	c str[0];
	return c - 0x30;
}
