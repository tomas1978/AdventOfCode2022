#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;

int findStartOfPacket(string buffer) 
{
	int markerPosition = -1;
	for(int i=0;i<buffer.size()-4;i++)
	{
		if(buffer.substr(i,i+i)!=buffer.substr(i+1,i+2) && buffer.substr(i,i+i)!=buffer.substr(i+1,i+2) && buffer.substr(i,i+i)!=buffer.substr(i+1,i+2))
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

  string testStr1="bvwbjplbgvbhsrlpgdmjqwftvncz";
  string testStr2="nppdvjthqldpwncqszvftbrmjlhg";
  string testStr3="nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg";
  string testStr4="zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw";

  
  int markerPos = findStartOfPacket(testStr1);
  cout<<"Start of packet marker position (test1): "<<markerPos<<endl;
  markerPos = findStartOfPacket(testStr2);
  cout<<"Start of packet marker position (test2): "<<markerPos<<endl;
  markerPos = findStartOfPacket(testStr3);
  cout<<"Start of packet marker position (test3): "<<markerPos<<endl;
  markerPos = findStartOfPacket(testStr4);
  cout<<"Start of packet marker position (test4): "<<markerPos<<endl;
  
  cout<<"Start of packet marker position (real message): "<<findStartOfPacket(buffer)<<endl;

}