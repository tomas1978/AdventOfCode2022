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

	if(player=='A') //Player chooses rock
	{
		score=1;
		if(opponent=='X') //Opponent chooses rock
			score+=3;
		if(opponent=='Y') //Opponent chooses paper
			score+=0;
		if(opponent=='Z') //Opponent chooses scissors
			score+=6;
	}
	if(player=='B') //Player chooses paper
	{
		score=2;
		if(opponent=='X')
			score+=6;
		if(opponent=='Y')
			score+=3;
		if(opponent=='Z')
			score+=0;
	}
	else //Player chooses scissors
	{
		score=3;
		if(opponent=='X')
			score+=0;
		if(opponent=='Y')
			score+=6;
		if(opponent=='Z')
			score+=0;
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
  cout<<"TESTING"<<endl;
  string test="C Z";
  cout<<"SCore: "<<evaulateGame(test)<<endl;
}