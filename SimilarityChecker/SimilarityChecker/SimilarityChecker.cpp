
#include "gmock/gmock.h"
using namespace std;

struct InputStr {
	string str1;
	string str2;
};


class Similarity{
public:
	size_t checkStringLength(const InputStr& inputStr) {
		size_t longer, shorter;
		if (inputStr.str1.size() == inputStr.str2.size())
			return 60;

		if (inputStr.str1.size() > inputStr.str2.size()) {
			longer = inputStr.str1.size();
			shorter = inputStr.str2.size();
		}
		else {
			shorter = inputStr.str1.size();
			longer = inputStr.str2.size();
		}

		return (1 - ((double)(longer - shorter) / shorter)) * 60;
	}
};