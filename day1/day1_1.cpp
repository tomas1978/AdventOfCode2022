#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
    int sum=0;
    vector<int> numbers;
    ifstream infile("input.txt");
    string line;
    while(getline(infile, line)) 
    {
        if(!line.compare("\n")) {
            sum+=stoi(line);
        }
        else
        {
            numbers.push_back(sum);
            sum=0;
        }
        cout<<numbers.size(); 

        istringstream iss(line);
        
        int a, b;
        if(!(iss >> a >> b)) {break;}
    }
    for(int i=0;i<numbers.size();i++)
        cout<<numbers.at(i)<<endl;
    return 0;
}