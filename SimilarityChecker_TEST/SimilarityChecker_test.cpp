#include "pch.h"
#include "string.h"
#include "../SimilarityChecker/SimilarityChecker.cpp"

TEST(SimilarityCheckerTest, ReturnMaxLengthPoint) {
	SimilarityChecker cal;
	std::string input1 = "ABC";
	std::string input2 = "BBY";
	int ret = cal.getLengthPoint(input1, input2);

	EXPECT_EQ(60, ret);
}

TEST(SimilarityCheckerTest, ReturnZeroLengthPoint) {
	SimilarityChecker cal;
	std::string input1 = "A";
	std::string input2 = "BB";
	int ret = cal.getLengthPoint(input1, input2);

	EXPECT_EQ(0, ret);
}

TEST(SimilarityCheckerTest, Return20LengthPoint) {
	SimilarityChecker cal;
	std::string input1 = "AAABB";
	std::string input2 = "BAA";
	int ret = cal.getLengthPoint(input1, input2);

	EXPECT_EQ(20, ret);
}

TEST(SimilarityCheckerTest, Return30LengthPoint) {
	SimilarityChecker cal;
	std::string input1 = "AA";
	std::string input2 = "AAE";
	int ret = cal.getLengthPoint(input1, input2);

	EXPECT_EQ(30, ret);
}