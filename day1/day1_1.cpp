#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

void readFromFile() 
{
    int n=0;
    char c;
    ifstream f1("input.txt");
    while(f1.get(c))
    {
        string line="";
        //cout.put(c);
        if(c=='\n')
            n++;
    }
    cout<<"Antal rader: "<<n;
}

int main()
{
    int sum=0;
    vector<string> numbers;
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

        istringstream iss(line);
        numbers.push_back(line);
        int a, b;
        if(!(iss >> a >> b)) {break;}
    }
    //readFromFile();
    return 0;
}