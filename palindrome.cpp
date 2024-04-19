//palindrome.cpp
#include <algorithm>
#include<iostream>
#include <string>

using namespace std;

static bool is_palindrome(const string& s) {
	return equal(s.begin(), s.end(), s.rbegin());


}

int main() {
	string s;
	while (cin >> s) {
		if (is_palindrome(s))
			cout << s << "��/�� ȭ���Դϴ�" << endl;
		else
			cout << s << "��/�� ȸ���� �ƴմϴ�" << endl;
	}
	return 0;
}