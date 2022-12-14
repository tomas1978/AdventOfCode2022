#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int findStartOfPacket(string buffer) 
{
	int markerPosition = -1;
	for(int i=0;i<buffer.size()-4;i++)
	{
		if(buffer.at(i)==buffer.at(i+1) && buffer.at(i+1)==buffer.at(i+2) &&
			buffer.at(i+2)==buffer.at(i+3))
			markerPosition=i;
	}
	return markerPosition;
}

int main()
{
  ifstream infile("input.txt");
  string line, buffer;
  
  while(getline(infile, line)) //Read from file, put characters in buffer 
  {
		buffer=line;
  }
  
  int markerPos = findStartOfPacket(buffer);
  cout<<"Start of packet marker position: "<<markerPos<<endl;
}