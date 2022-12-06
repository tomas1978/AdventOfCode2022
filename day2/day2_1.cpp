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

  //Calculate calory sum of each elf, store in vector
  while(getline(infile, line)) 
    {
      if(line.empty()) 
	{
	  gameInputs.push_back(line);
	}
    }
  for(int i=0;i<10;i++)
    cout<<gameInputs.at(i)<<endl;
}
