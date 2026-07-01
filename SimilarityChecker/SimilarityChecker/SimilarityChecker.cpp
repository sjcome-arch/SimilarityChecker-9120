
#include "gmock/gmock.h"
using namespace std;

struct InputStr {
	string str1;
	string str2;
};

class Similarity{
public:
	int checkStringLength(const InputStr& inputStr) {
		return 60;
	}
};