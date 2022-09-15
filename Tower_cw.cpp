#include <iostream>
using namespace std;

void solution(int n) {
	int x, y;
	for (y = 0; y < n; y++)//Number of rows
	{
		for (x = 2 * n + 1; x > 0; x--) //each column
		{
			if ((x > n + y + 1) || (x < n - y + 1)) {
				cout << " ";
			}
			else {
				cout << "#";
			}

		}
		cout << endl;
	}
}

int main() {
	solution(4);
	solution(7);
	solution(5);

	system("pause>0");
}