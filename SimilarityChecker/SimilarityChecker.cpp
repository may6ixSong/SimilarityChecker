#include <string>
#include <set>
using namespace std;

class SimilarityChecker
{
public:
	int getAlphaPoint(string input1, string input2)
	{
		set<char> Alphabet;
		for(char ch : input1)
		{
			Alphabet.insert(ch);
		}
		for (char ch : input2)
		{
			Alphabet.insert(ch);
		}

		int totalCnt = Alphabet.size();
		int sameCnt = 0;
		for(char alpha : Alphabet)
		{
			if (!checkCharHave(input1, alpha)) continue;
			if (!checkCharHave(input2, alpha)) continue;
			sameCnt++;
		}

		return (40 * sameCnt) / totalCnt;
	}

	bool checkCharHave(string input, char checkAlphabet)
	{
		for(char ch : input)
		{
			if (checkAlphabet == ch) return true;
		}
		return false;
	}
};