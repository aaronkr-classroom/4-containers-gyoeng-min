//chp4_ex7.cpp
#include <vector>
#include <string>
#include <iostream>

using std::vector;	using std::string;
using std::cout;	using std::cin;	using std::endl;

int main() {
	vector<double> nums;

	cout << "Enter numbers, then EOF: " << endl;

	//�Է� �ް� 
	double num;
	while (cin >> num) {
		nums.push_back(num);
	}

	
	// ����ϱ� 
	double average;


	double sum = 0, count = nums.size();
	for (vector<double>::size_type i = 0; i < count; i++){
		sum += nums[i];
		}
		average = sum / count;


	cout << "Average: " << average << endl;
	return 0;
}