/*#include <iostream>
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

*/

//                      laba 1 zadanie 3
#include <cstdio>
#include <cstring>

char* my_strchr(char* s, int c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return nullptr;
}

int main() {
    char str[] = "dachshunds rule the world";
    char ch = 'u';

    char* result_std = strchr(str, ch);
    if (result_std != nullptr) {
        printf("standart func simvol '%c': \"%s\"\n", ch, result_std);
    }
    else {
        printf("standart func simvol '%c' not found.\n", ch);
    }

    char* result_custom = my_strchr(str, ch);
    if (result_custom != nullptr) {
        printf("my func simvol '%c' : \"%s\"\n", ch, result_custom);
    }
    else {
        printf("my func simvol '%c' not found.\n", ch);
    }

    return 0;
}
