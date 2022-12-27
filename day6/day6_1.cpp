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
		if(buffer.substr(i,1)!=buffer.substr(i+1,1) && buffer.substr(i+1,1)!=buffer.substr(i+2, 1) && buffer.substr(i+2,1)!=buffer.substr(i+3,1) && buffer.substr(i+1,3)!=buffer.substr(i+4,1))
		{
			cout<<"foobar"<<endl;
			//cout<<buffer.substr(i,1)<<" "<<buffer.substr(i,1);
			return i;
		}
		
		/*
		if(buffer.substr(i,1)!=buffer.substr(i+1,1) && buffer.substr(i+1,1)!=buffer.substr(i+2,1) && buffer.substr(i+2,1)!=buffer.substr(i+3,1))
		{
			cout<<buffer.substr(i,1)<<" "<<endl;
			markerPosition=i;	
			break;
		}*/
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
  
  string testStr0="aaaaaaaaaqwaaaabbbbbzxccccccc";	//Character 10

  string testStr1="bvwbjplbgvbhsrlpgdmjqwftvncz";
  string testStr2="nppdvjthqldpwncqszvftbrmjlhg";
  string testStr3="nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg";
  string testStr4="zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw";

  int markerPos=findStartOfPacket(testStr0);
  cout<<"Start of test package: in string "<<testStr0<<": "<<markerPos<<endl;
  /*
  int markerPos = findStartOfPacket(testStr1);
  cout<<"Start of packet marker position (test1): "<<markerPos<<endl;

  markerPos = findStartOfPacket(testStr2);
  cout<<"Start of packet marker position (test2): "<<markerPos<<endl;
  markerPos = findStartOfPacket(testStr3);
  cout<<"Start of packet marker position (test3): "<<markerPos<<endl;
  markerPos = findStartOfPacket(testStr4);
  cout<<"Start of packet marker position (test4): "<<markerPos<<endl;
  
  cout<<"Start of packet marker position (real message): "<<findStartOfPacket(buffer)<<endl;
*/
}