#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char *argv[])
{
	int a, b, sum, num;


    a = atoi (argv[1]);
	b = atoi (argv[2]);
    sum = 0;
	num =a;

        if (a >= b){
	return 1;
	}

	while (num < b)
        {
	        sum += num;
	        num += 1;

	}
	cout << "Sum: " << sum << endl;

	return 0;
}
