#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
  ifstream infile("input.txt");
  string line, buffer;
  vector<string> gameInputs;

  while(getline(infile, line)) //Read from file, put characters in buffer 
  {
		buffer=line;
  }
  cout<<buffer<<endl;
}