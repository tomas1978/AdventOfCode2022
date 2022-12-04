#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int findMostCalories(vector<int> calories) 
{
    int greatestValue=0;
    for(vector<int>::iterator i=calories.begin();i!=calories.end();i++) {
        if ((*i)>greatestValue)
            greatestValue=*i;
    }
    return greatestValue;
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

   return 0;
}