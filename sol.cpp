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
		// view the image in this repository for better understanding
		// create a 'prev'-like variable
		int initial_height = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// if the difference of the final and initial height is greater than k
			// then add steps with 'k' height to make this condition false
			// increment 'cnt' whenever this occurs
			while (h[i] - initial_height > k) {
				initial_height += k;
				cnt++;
			}
			// set the current height as the initial height for the next iteration
			initial_height = h[i];
		}
		cout << cnt << '\n';
	}
	return 0; 
}
