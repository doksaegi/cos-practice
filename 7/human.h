#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char x[20];
    int pass = 0;


    cout << "Enter the password:  ";
    cin >> x;

    if (strcmp(x, "thegeekstuff")) {
        cout << "Wrong Password" << endl;
    } else {
        cout << "Correct Password" << endl;
        pass = 1;
    }

    if (pass){
        cout << "Root privileges given to the user" << endl;
    }

    cout << "x (" << (void *)x << ")= " << x << endl;
    cout << "pass (" << (void *)&pass << ")= " << pass << endl;
    return 0;
}
