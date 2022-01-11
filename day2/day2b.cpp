#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main(){
  ifstream day2in;
  day2in.open("input.txt");
  map<string,int> cmd;
  string command,content;
  int j=1;
  int xy[2]={0,0};
  int depth=0;

  while(day2in >> content){
    if(j%2){
      command = content;
      j++;
    }
    else{
      j++;
      cmd[command]=stoi(content);
      if(command=="forward"){
          xy[0] += cmd[command];
          depth = cmd[command]*xy[1]+depth;
          cout << "forward coordinate:" << xy[0] << "," << xy[1] << " and depth is:" << depth << endl;
      }
      if(command=="down"){
          xy[1] += cmd[command];
      }
      if(command=="up"){
          xy[1] -= cmd[command];
      }
      cout << "the coordinate is: " << xy[0] << " and " << xy[1] << endl;
      }
    }
  cout << "there are " << j << " lines" << endl;
  cout << "the final map is: " << command << " -> " << cmd[command] << endl;
  cout << "the final coordinate is: " << xy[0] << " and " << xy[1] << endl;
  cout << "the final result is: " << xy[0]*depth << endl;
  return 0;
}
