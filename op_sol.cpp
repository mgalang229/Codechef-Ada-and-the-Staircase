#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> h(n);
		for (int i = 0; i < n; i++) {
			cin >> h[i];
		}
		int y = 0;
		int ans = 0;
		// as you can see, no increment process is written in the FOR statement
		// because it will be declared in the conditions below
		for (int i = 0; i < n;) {
			// check if the difference of the final and initial height is less than 
			// the current step + 'k'
			if (y + k >= h[i]) {
				// if the condition is true, then store the current step to be used
				// again for the next condition
				y = h[i++];
			} else {
				// otherwise, add a step with a height of 'k' to the current step
				// until it matches the cond
				y += k;
				// increment 'ans' to count the minimum number of steps needed
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0; 
}
