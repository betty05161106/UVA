#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

void wave(int amplitude, int frequency)
{
	assert(amplitude <= 9);
	for (int i = 1; i <= frequency; i++) {
		for (int j = 1; j <= amplitude; j++) {
			cout << string(j, j + '0') << endl;
		}
		for (int j = amplitude-1; j >= 1; j--) {
			cout << string(j, j + '0') << endl;
		}
		cout << endl;
	}
}

int main()
{
	int n;
	int amplitude;
	int frequency;
	cin >> n; 

	for (int i = 1; i <= n; i++) {
		cin >> amplitude;
		cin >> frequency;
		wave(amplitude, frequency);
	}
	system("pause");
	return 0;
}