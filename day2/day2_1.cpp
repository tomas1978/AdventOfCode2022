#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
  ifstream infile("input.txt");
  string line;
  vector<string> gameInputs;

  while(getline(infile, line)) 
  {
   // cout<<line<<endl;
    if(!line.empty()) 
	{
	    gameInputs.push_back(line);
  	}
	
  }
  cout<<gameInputs.size()<<endl;
}