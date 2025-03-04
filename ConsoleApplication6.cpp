#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//                                                      LABA 1 ZADANIE 1
const int N = 15;

void processArray(double arr[], double output[], int& count, double a, double b) {
    count = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            double randMultiplier = a + static_cast<double>(rand()) / RAND_MAX * (b - a);
            arr[i] = randMultiplier;
        }
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            output[count++] = arr[i];
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    double arr[N] = { 0 };
    double output[N];
    int count;
    double a, b;

    cout << "vvedi a (a < 0) and b: ";
    cin >> a >> b;

    processArray(arr, output, count, a, b);

    cout << "changed mas: [";
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0 || arr[i] != 0) {
            cout << " " << arr[i];
        }
    }
    cout << " ]" << endl;

    cout << "end mas: [";
    for (int i = 0; i < count; i++) {
        cout << " " << output[i];
    }
    cout << " ]" << endl;

    cout << "el -: " << count << endl;
    return 0;
}
