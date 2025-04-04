//read_words.cpp
#include "read_words.h"

std::istream& read_words(std::istream& in, std::vector<std::string>& words) {
	if (in) {
		//���� ������ ����
		words.clear();

		//�Է��� ���� ���� 
		std::string x;//cin���� ����ϱ�

		//�Է¹��� ������ ���� sum
		while (in >> x) {
			words.push_back(x);
		}

		//���� �л��� ���� �Է� �۾��� ����� ��Ʈ���� ����
		in.clear();
	}
	return in;
}