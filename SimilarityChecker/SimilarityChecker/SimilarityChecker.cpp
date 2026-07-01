
#include "gmock/gmock.h"
using namespace std;

struct InputStr {
	string str1;
	string str2;
};

class Similarity{
public:
	int checkStringLength(const InputStr& inputStr) {

		if( inputStr.str1.size() == inputStr.str2.size())
			return 60;

		if (inputStr.str1.size() >= inputStr.str2.size() * 2
			|| inputStr.str2.size() >= inputStr.str1.size() * 2)
			return 0;
	}
};