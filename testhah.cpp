#include<iostream>
#include<string>
using namespace std;
template<>
class hash<string>
{
public:
	size_t operator()(const string theKey)const
	{
		unsigned long hashValue = 0;
		int lenght = (int)theKey.length();
		for (int i = 0; i < lenght; i++)
		{
			hashValue = hashValue * 5 + theKey.at(i);
			cout << hashValue << " " << theKey.at(i)<<endl;
			return rsize_t(hashValue);
		}
	}

};

int main()
{
	cout << rsize_t("12") << endl;
	cout<< rsize_t("123")<<endl;
	cout << rsize_t("1234") << endl;
	cout << rsize_t("1234") << endl;
}