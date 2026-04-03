#include <iostream>

using namespace std;

int main() {
    int d,w;
    cin >> d >> w;

    int integer_def[10000];
    int whole_def[10000];
    for (int _ = 0; _<d; _++)
        cin >> integer_def[_] >> whole_def[_];

    int questions[10000];
    for (int i = 0; i<w; i++)
        cin >> questions[i];

    for (int i = 0; i<w; i++) {
        int integer = questions[i];
        int index = -1;
        for (int j = 0; j<d; j++) {
            if (integer == integer_def[j])
                index = j;
        }
        if (index == -1) {
            cout << "C?" << endl;
            continue;
        }
        int whole = whole_def[index];
        cout << whole << endl;
    }
}
