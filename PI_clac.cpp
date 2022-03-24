#include <iostream>
#include <cmath>

using namespace std;


//void setup() {
//    size(402, 402);
//    background(0);
//    translate(width/2, height/2);
//    stroke(255);
//    strokeWeight(4);
//    noFill();
//    ellipse(0, 0, r*2, r*2);
//    rectMode(CENTER);
//    rect(0, 0, r*2, r*2);
//}

int main() {
    cout << "test\n";
    int r = 200;

    int total = 0;
    int circle = 0;

    double recordPI = 0;
    srand(time(NULL));

    while(true) {
        for (int i = 1; i < 10000; i++) {
            for (int j = 1; j < 10000; ++j) {
//            float x = rand() % (-r - r + 1) + r;
//            float y = rand() % (-r - r + 1) + r;
                float x = i;
                float y = j;
                total++;

                double d = (double) x * (double) x + (double) y * (double) y;
                if (d < (double) r * (double) r) {
                    circle++;
                }


                double pi = (double) 4 * ((double) circle / (double) total);
                cout << pi << endl;

                double recordDiff = abs(M_PI - recordPI);
                double diff = abs(M_PI - pi);
                if (diff < recordDiff) {
                    recordDiff = diff;
                    recordPI = pi;
                    cout << recordPI << endl;
                }
            }
        }
    }
}