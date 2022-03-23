#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x;
	cin >> x;

	cout << fixed << setprecision(4) << 100 / x << '\n'
		<< 100 / (100 - x);

	return 0;
}