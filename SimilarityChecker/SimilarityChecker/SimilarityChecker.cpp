
#include "gmock/gmock.h"
using namespace std;

class Similarity{
public:
	double getLenghtPoint(const string& str1, const string& str2) {
		size_t longer, shorter;
		if (str1.size() == str2.size())
			return 60;

		if (str1.size() > str2.size()) {
			longer = str1.size();
			shorter = str2.size();
		}
		else {
			shorter = str1.size();
			longer = str2.size();
		}

		return (1.0 - ((double)(longer - shorter) / shorter)) * 60.0;
	}
};