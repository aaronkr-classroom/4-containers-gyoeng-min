//chp4_ex5_b.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>//sort 함수를 위해
#include "read_words.h"

using std::cin;		using std::cout;	using std::endl;
using std::vector;	using std::string;	using std::sort;

typedef vector<string>::size_type vec_sz;

int main() {
	vector<string>words;
	vec_sz count = 0;

	//입력받기
	cout << "Write a sentence, then EOF : " << endl;
	read_words(cin, words);

	//정렬하기
	sort(words.begin(), words.end());

	//결과 출력
	string word = words[0];

	for (vec_sz i = 0; i < words.size(); i++) {
		if (word != words[i]) {
			cout << "Word " << word << " appeared "
				<< ++count << " time"
				<< (count > 1 ? "s." : ".") << endl;
			word = words[i];
			count = 0;
		}
		else {
			++count;
		}
	}
	cout << "Total : " << words.size() << " words" << endl;

	return 0;

}