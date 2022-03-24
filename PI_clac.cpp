#include <iostream>
#include <cmath>

using namespace std;

double pi_calc(int n) {
    int c = 0;
    double pi = 0;
    int a;
    for (a = 1; a <= n; a = a + 2) {
        if (c == 0) {
            pi = pi + 4 / (float) a;
            c++;
        } else {
            pi = pi - 4 / (float) a;
            c--;
        }
    }
    return pi;
}

int main() {
    //declare variables
    double sum, pi;
    int n;

    //prompt user
    cout << "How many decimals would you like to calculate pi to? ";
    cin >> n;

    //calculate pi

    //print response
    cout << pi_calc(n) << endl;

    return 0;
}