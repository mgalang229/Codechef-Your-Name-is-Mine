#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string m, w;
		cin >> m >> w;
		int index = 0;
		// swap 'm' with 'w' if the size of the 'm' is less than the size of 'w'
		if ((int) m.size() < (int) w.size()) {
			swap(m, w);
		}
		for (int i = 0; i < (int) m.size(); i++) {
			if (m[i] == w[index] && index < (int) w.size()) {
				// increase the 'index' variable whenever the current character of 'w'
				// matches the current character of 'm'
				index++;
			}
		}
		// if the 'index' is STRICTLY one more than the index of the last
		// character, then it means that 'w' is a subsequence of 'm'
		cout << (index == (int) w.size() ? "YES" : "NO") << '\n';
	}
	return 0;
}
