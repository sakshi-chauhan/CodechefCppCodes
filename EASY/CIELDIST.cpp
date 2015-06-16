#include <iostream>
#include <algorithm>

int main() {
	int T;
	std::cin >> T;
	for (int t = 0; t < T; ++t) {
		int d[3];
		for (int i = 0; i < 3; ++i) {
			std::cin >> d[i];
		}
		std::sort(d, d + 3);
		int ans = std::max(0, d[2] - d[1] - d[0]);
		std::cout << ans <<'\n';
	}
	return 0;
}
