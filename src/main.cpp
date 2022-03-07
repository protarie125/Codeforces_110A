#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	cin >> line;

	const auto& n = line.length();
	auto count = int{ 0 };
	for (int i = 0; i < n; ++i) {
		if ('4' == line[i] || '7' == line[i]) {
			++count;
		}
	}

	ostringstream oss{};
	oss << count;

	const auto& str = static_cast<string>(oss.str());
	const auto& n2 = str.length();
	for (int i = 0; i < n2; ++i) {
		if ('4' != str[i] && '7' != str[i]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}