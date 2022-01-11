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

  while(day2in >> content){
    if(j%2){
      command = content;
      cout << "it is: " << command << " now." << endl;
      j++;
    }
    else{
      j++;
      cmd[command]=stoi(content);
      cout << "it is: " << cmd[command] << " now." << endl;
      if(command=="forward"){
          xy[0] += cmd[command];
          cout << "forward coordinate:" << xy[0] << "," << xy[1] << endl;
      }
      if(command=="down"){
          xy[1] += cmd[command];
          cout << "down coordinate" << xy[0] << "," << xy[1] << endl;
      }
      if(command=="up"){
          xy[1] -= cmd[command];
          cout << "up coordinate" << xy[0] << "," << xy[1] << endl;
      }
      cout << "the coordinate is: " << xy[0] << " and " << xy[1] << endl;
      }
    }
    //cout << "command is: " << command << " of " << cmd[command] << endl;
  cout << "there are " << j << " lines" << endl;
  cout << "the final map is: " << command << " -> " << cmd[command] << endl;
  cout << "the final coordinate is: " << xy[0] << " and " << xy[1] << endl;
  cout << "the final result is: " << xy[0]*xy[1] << endl;
  return 0;
}
