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
                //cout << num << endl;
                day1v.push_back(num);
	}
	cout << "day1v begin from: " << day1v[0] << endl;
	vector<int> sumv,rv;
	vector<int>::iterator vi = day1v.begin();
	cout << "vi begin from: " << *vi << endl;
	vector<int>::iterator vi1 = ++(day1v.begin());
	cout << "vi1 begin from: " << *vi1 << endl;
	vector<int>::iterator vi2 = ++(++(day1v.begin()));
	cout << "vi2 begin from: " << *vi2 << endl;
	while(vi2 != day1v.end()){
		sumv.push_back(*vi + *vi1 + *vi2);
		vi++;
		vi1++;
		vi2++;
	}
	cout << "first element of sumvector is: " << sumv[0] << endl;	
	cout << "second element of sumvector is: " << sumv[1] << endl;
	int j=0;
	for(int i=0;i<sumv.size()-1;i++){
		if(sumv[i+1]-sumv[i] >0){
			j++;
		}
	}
	cout << "total increase is: " << j << endl;
	return 0;
}	
