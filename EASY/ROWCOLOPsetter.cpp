/**
 * February 2013 Cook-Off
 *
 * Problem:     ROWCOLOP - Row and Column Operations
 * Author:      Anton Lunyov (Problem-Setter)
 * Complexity:  O(N + Q)
 * Timing:      0.12 out of 1.00
 *
 * Description:
 * For each row and column we accumulate values added to it
 * while performing the operations.
 * Let these values be row[i] and col[i].
 * At every moment of time the number in the cell (i,j) = row[i]+col[j]
 * Hence maximum = max(row[i]:1<=i<=N) + max(col[i]:1<=i<=N)
 */
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, Q;
	scanf("%d%d", &N, &Q); // we use scanf for faster input
	vector<int> row(N, 0), col(N, 0);
	for (int q = 0; q < Q; ++q) {
		// the size is 7 since length of each command is 6
		// and we need additional place for terminating zero
		char type[7];
		int i, x;
		scanf("%s%d%d", type, &i, &x);
		--i; // indexing from 0 to N-1 is more convenient
		if(strcmp(type,"RowAdd")==0) {
			row[i] += x; // add x to i-th row
		} else {
			col[i] += x; // add x to i-th column
		}
	}
	// max_element returns iterator (pointer) to the maximal element in the range
	// hence *max_element is the actual maximal value
	int maxR = *max_element(row.begin(), row.end());
	int maxC = *max_element(col.begin(), col.end());
	int ans = maxR + maxC;
	printf("%d\n", ans);
	return 0;
}
