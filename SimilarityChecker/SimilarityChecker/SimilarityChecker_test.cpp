#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"

using namespace testing;

TEST(SimilarityChecker, test) {

	Similarity sim;
	InputStr inputStr;
	inputStr.str1 = "ABC";
	inputStr.str2 = "ABC";

	sim.checkStringLength(inputStr);

	EXPECT_EQ(sim.checkStringLength(inputStr), 60);
}

TEST(SimilarityChecker, test1) {

	Similarity sim;
	InputStr inputStr;
	inputStr.str1 = "ABCDEF";
	inputStr.str2 = "ABC";

	sim.checkStringLength(inputStr);

	EXPECT_EQ(sim.checkStringLength(inputStr), 0);
}

TEST(SimilarityChecker, test2) {

	Similarity sim;
	InputStr inputStr;
	inputStr.str1 = "A";
	inputStr.str2 = "AB";

	sim.checkStringLength(inputStr);

	EXPECT_EQ(sim.checkStringLength(inputStr), 0);
}

TEST(SimilarityChecker, test3) {

	Similarity sim;
	InputStr inputStr;
	inputStr.str1 = "AAA";
	inputStr.str2 = "BA";

	sim.checkStringLength(inputStr);

	EXPECT_EQ(sim.checkStringLength(inputStr), 30);
}