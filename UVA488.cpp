#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

void wave(int amplitude, int frequency)
{
    assert(amplitude <= 9);
    while (frequency--) {
        for (int j = 1; j <= amplitude; j++) {
            cout << string(j, '0' + j) << endl;
        }
        for (int j = amplitude-1; j >= 1; j--) {
            cout << string(j, '0' + j) << endl;
        }
        if (frequency) cout << endl;
    }
}

int main()
{
    int n;
    int amplitude;
    int frequency;
    cin >> n; 
    
    while (n--) {
        cin >> amplitude >> frequency;
        wave(amplitude, frequency);
    }
    system("pause");
    return 0;
}
