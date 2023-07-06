#include <string>
using namespace std;

class SimilarityChecker
{
public:
	float getLengthPoint(string input1, string input2)
	{
		int input1_length = input1.size();
		int input2_length = input2.size();

		if (input1_length == input2_length) return 60;
		else if (input1_length >= input2_length * 2
			|| input1_length * 2 <= input2_length) return 0;

		// 부분 점수
		if (input1_length > input2_length)
			return getPartPoint(input1_length, input2_length);
		else
			return getPartPoint(input2_length, input1_length);
	}

	float getPartPoint(int long_length, int short_length)
	{
		int gap = long_length - short_length;
		return 60 - (gap * 60 / short_length);
	}
};