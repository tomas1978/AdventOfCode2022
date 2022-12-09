#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int evaulateGame(string game) 
{
	int score;
	char player=game.at(0);
	char opponent=game.at(2);
	if(player=='A') 
	{
		score=1;
		if(opponent=='A')
			score+=3;
		if(opponent=='B')
			score+=0;
		if(opponent=='C')
			score+=6;
	}
	return score;
}

int main()
{
  ifstream infile("input.txt");
  string line;
  vector<string> gameInputs;

  while(getline(infile, line)) 
  {
    if(!line.empty()) 
	{
	    gameInputs.push_back(line);
  	}
  }
  int totalScore=0;
  for(string s:gameInputs)
  {
	totalScore+=evaulateGame(s);
  }
  cout<<"Total score: "<<totalScore<<endl;
}