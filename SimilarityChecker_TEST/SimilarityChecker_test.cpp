#include "pch.h"
#include "string.h"
#include "../SimilarityChecker/SimilarityChecker.cpp"

TEST(SimilarityCheckerTest, ReturnMaxAlphaPoint) {
	SimilarityChecker cal;
	std::string input1 = "ASD";
	std::string input2 = "DSA";
	int ret = cal.getAlphaPoint(input1, input2);

	EXPECT_EQ(40, ret);
}

TEST(SimilarityCheckerTest, ReturnZeroAlphaPoint) {
	SimilarityChecker cal;
	std::string input1 = "A";
	std::string input2 = "BB";
	int ret = cal.getAlphaPoint(input1, input2);

	EXPECT_EQ(0, ret);
}

TEST(SimilarityCheckerTest, Return40AlphaPoint) {
	SimilarityChecker cal;
	std::string input1 = "AAAABB";
	std::string input2 = "BA";
	int ret = cal.getAlphaPoint(input1, input2);

	EXPECT_EQ(40, ret);
}

TEST(SimilarityCheckerTest, Return20AlphaPoint) {
	SimilarityChecker cal;
	std::string input1 = "AA";
	std::string input2 = "AAE";
	int ret = cal.getAlphaPoint(input1, input2);

	EXPECT_EQ(20, ret);
}