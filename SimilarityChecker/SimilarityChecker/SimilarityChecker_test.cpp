#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"

using namespace testing;

class SimilarityFixture : public testing::Test {
public:
	Similarity sim;
};

TEST_F(SimilarityFixture, test) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("ABC", "ABC"), 60);
}

TEST_F(SimilarityFixture, test1) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("ABC", "DEF"), 60);
}

TEST_F(SimilarityFixture, test2) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("ABCDEF", "ABC"), 0);
}

TEST_F(SimilarityFixture, test3) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("A", "AB"), 0);
}

TEST_F(SimilarityFixture, test4) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("AAA", "BA"), 30);
}

TEST_F(SimilarityFixture, test5) {
	EXPECT_DOUBLE_EQ(sim.getLenghtPoint("ABCDEFGHIJ", "ABCDEFGHI"), 53.333333333333329);  // 10, 9  
}