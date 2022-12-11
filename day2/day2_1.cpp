#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int evaulateGame(string game) 
{
	int score;
	char opponent=game.at(0);
	char player=game.at(2);
	cout<<player<<opponent<<endl;

	if(opponent=='A') 		//Opponent chooses rock
	{
		if(player=='X') 	//Player chooses rock , draw
			score=1+3;
		else if(player=='Y') //Player chooses paper, pl wins
			score=2+6;
		else 				 //Player chooses scissors
			score=3+0;
	}
	else if(opponent=='B') 	//Opponent chooses paper
	{
		if(player=='X')		//Player chooses rock, loses
			score=1+0;
		if(player=='Y')		//Player chooses paper, draw
			score=2+3;
		if(player=='Z')		//Player chooses scissors, wins
			score=3+6;
	}
	else 					//Opponent chooses scissors
	{
		score=3;
		if(player=='X')		//Player chooses rock, wins
			score=1+6;
		if(player=='Y')		//Player chooses paper, loses
			score=2+0;
		if(player=='Z')		//PLayer chooses scissors, draw
			score=3+3;
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