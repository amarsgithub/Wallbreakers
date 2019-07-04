#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> input) {
	
	vector<vector<int>> ret(input[0].size(), vector<int>(input.size(), 0));

	for (int i = 0; i < ret.size(); i++)
	{
		for (int j = 0; j < ret[i].size(); j++)
		{	
			ret[i][j] = input[j][i];
		}
	}
	return ret;
}


int main(void) {
	vector<vector<int>> input(3, vector<int>(3, 0);

	vector<int> one{1, 2, 3};
	vector<int> two{4, 5, 6};
	vector<int> thr{7, 8, 9};

	input.push_back(one);
	input.push_back(two);
	input.push_back(thr);


	vector<vector<int>> ret = transpose(input);

	for (int i = 0; i < ret.size(); i++)
	{
		for (int j = 0; j < ret[0].size(); j++)
		{
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}