#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


typedef long long           ll;
typedef unsigned short int  sint_32;

#define FOR( ARRAY_SIZE ) for( int i = 0 ; i < ARRAY_SIZE ; ++i)
#define FOr( ARRAY_SIZE ) for( int j = 1 ; j < ARRAY_SIZE ; ++j) 
#define FOR_( FROM_INDEX , TO_INDEX ) for( int k = FROM_INDEX ; k < TO_INDEX ;++k)
#define FOR_Vint(VECTOR_ARRAY) for(int i:VECTOR_ARRAY)


uint32_t MIN(vector<int>& VECTOR_ARRAY)
{
	uint32_t MIN_VALUE = VECTOR_ARRAY[0];
	FOR_Vint(VECTOR_ARRAY)
	{
		if (MIN_VALUE > i)
			MIN_VALUE = i;
	}
	return MIN_VALUE;

}

uint32_t MAX(vector<int>& VECTOR_ARRAY)
{
	uint32_t MAX_VALUE = VECTOR_ARRAY[0];
	FOR_Vint(VECTOR_ARRAY)
	{
		if (MAX_VALUE < i)
			MAX_VALUE = i;
	}
	return MAX_VALUE;
}


uint32_t CEIL(float n)
{
	if ((int)n != n)
		return (int)n + 1;
	else
		return (int)n;
}
uint32_t FLOOR(float n)
{
	if (((int)n) * CEIL(n) >= n * n)
		return (int)n;
	else
		return CEIL(n);
}

uint32_t SAME(vector<int>& a)
{
	vector<int> b;
	int c = 0;
	for (int i = 0; i < a.size() - 1; ++i) {
		for (int j = 0; j < a.size(); ++j)
		{
			if (a[i] == a[j])
				++c;
		}
		b.push_back(c);
		c = 0;
	}
	return MAX(b);
}

void eraseSpaces(string& a)
{
	FOR(a.size())
	{
		if (a[i] == ' ')
			a.erase(a.begin() + i);
	}
}

int main()
{

	
}
