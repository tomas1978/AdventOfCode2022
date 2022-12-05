#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int findMostCalories(vector<int> calories) 
{
    int greatestValue=0;
    for(int i : calories) 
	{
        if (i>greatestValue)
            greatestValue=i;
    }
    return greatestValue;
}

int findThreeGreatestSum(vector<int> calories) 
{
	sort(calories.begin(),calories.end());
	vector<int> threeGreatest;
	int sum=0;
	for(int i=calories.size()-1;i>calories.size()-4;i--)
		sum+=calories.at(i);
	return sum;
}

int main()
{
    int sum=0;
    vector<int> calorySums;
    ifstream infile("input.txt");
    string line;

    //Calculate calory sum of each elf, store in vector
    while(getline(infile, line)) 
    {
        if(line.empty()) {
            calorySums.push_back(sum);
            sum=0;	
        }
        else
			sum+=stoi(line);
    }
    
    cout<<"Greatest amount of calories: "<<findMostCalories(calorySums)<<endl;

	int threeGreatestSum = findThreeGreatestSum(calorySums);
	cout<<"Sum of three greatest: "<<threeGreatestSum<<endl;

   return 0;
}