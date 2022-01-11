#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	ifstream day1input;
	day1input.open("day1a.txt");
	int num;
	vector<int> day1v;
	while(day1input >> num){
		cout << num << endl;
		day1v.push_back(num);
	}
	cout << "the size of vector is: " << day1v.size() << endl;
	for(int i=0;i<day1v.size();i++){
		cout << day1v[i] << endl;
	}
	vector<int> day1vv;
	int j=0;
	for(int i=0;i<(day1v.size()-1);i++){
		day1vv.push_back(day1v[i+1]-day1v[i]);
		if(day1vv[i]>0){
			j++;
		}
	}
	cout << "total increases are: " << j << endl;
	return 0;
}
