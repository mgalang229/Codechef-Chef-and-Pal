#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		/*
			there are two (2) cases:
			
			if n is odd:
			there is no answer because the middle element has no element to match
			
			if n is even:
			set the first half with 0s and the second half with 1s
			so if we reverse the string, then the elements will not be equal to each other
		*/
		string ans = "-1";
		if (n % 2 == 0) {
			ans = "";
			for (int i = 0; i < n / 2; i++) {
				ans += "0";
			}
			for (int i = n / 2; i < n; i++) {
				ans += "1";
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
