#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//인수가 공백일 때는 true, 그렇지 않을 때는 false
static bool space(char c) {
	return isspace(c);
}


//인수가 공백일 떄는  false, 그렇지 않을 때는 true
static bool not_space(char c) {
	return !isspace(c);
}

static vector<string> split(const string& str) {
	typedef string::const_iterator iter;
	iter i = str.begin();
	vector<string> ret;

	//for(iter i = str.begin(); i != str.end(); i ++)
	while (i != str.end()) {
		cout << "String begin pos:" <<
			distance(str.begin(), i) << endl ;


			//선행 공백을 무시
			//지금 i 위치부터 첫 번쨰 띄워쓰기 아닌 문자 찾기
			i = find_if(i, str.end(), not_space);

		//다음 단어의 끝을 찾음
		//while 반복할 때 항상 새로운 반복자 j를 생성
		//지금 i위치부터 첫 번쨰 띄워쓰기 문자 찾기
		iter j = find_if(i, str.end(), space);
		cout << "j pos:" <<
			distance(str.begin(), j) << endl;

		//[i,j] 범위의 문자를 복사
		if (i != str.end()) {
			ret.push_back(string(i, j));
		}
			// i 반복자 위치가 j 반복자 위치를 저장하기
			i = j;
			cout << "i 이동 pos:" <<
				distance(str.begin(), i) << endl;
		

			return ret;
	}
}