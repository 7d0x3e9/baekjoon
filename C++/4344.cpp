#include <iostream>
using namespace std;

int main() {
	int count, n, num;
	int avg;
	int score[1000] = { 0 };
	double result;

	cin >> count;
	for (int i = 0; i < count; i++) {
		avg = 0;
		num = 0;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> score[j];
			avg = avg + score[j];
		}
		avg = avg / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg)
				num++;
		}
		result = (double)num / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
	}
}

// precision(a) : 소수점 a번째까지 나타내기
