/**
 * January Cook-Off 2013
 *
 * Problem:     CIELDIST - Minimum Distance
 * Author:      Anton Lunyov (Tester)
 * Complexity:  O(1) per test
 * Timing:      0.00 out of 2.013
 *
 * Description:
 * The answer is max(0,D-DS-DT,DS-D-DT,DT-D-DS),
 * which follows from triangle inequality.
 * We input all three numbers in the array "int d[3]",
 * sort it and then the answer is just max(0,d[2]-d[1]-d[0]).
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int d[3];
		for (int i = 0; i < 3; ++i) {
			cin >> d[i];
		}
		sort(d, d + 3);
		int ans = max(0, d[2] - d[1] - d[0]);
		cout << ans << endl;
	}
	return 0;
}
