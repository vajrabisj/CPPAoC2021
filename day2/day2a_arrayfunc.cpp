#include <fstream>
#include <iostream>
#include <array>

using namespace std;

array<int,2> coordinate = {0,0};
void execucmd(string cmd, int steps);

int main(){ 
    ifstream day2in;
    string cmd;
    int steps;
    day2in.open("input.txt");
    while(day2in >> cmd >> steps){
        cout << "now processing: " << cmd << "->" << steps << endl;
        execucmd(cmd, steps);
        cout << "now coordinate updated: " << coordinate[0] << "," << coordinate[1] << endl;
    }
    cout << "final coordinate is: " << coordinate[0] << "," << coordinate[1] << " and the result is: " << coordinate[0]*coordinate[1] << endl;
    return 0;
}

void execucmd(string cmd, int steps){
    if(cmd=="forward"){
        coordinate[0] += steps;
    }
    if(cmd=="down"){
        coordinate[1] += steps;
    }
    if(cmd=="up"){
        coordinate[1] -= steps;
    }
}