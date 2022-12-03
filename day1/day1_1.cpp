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
        if(line.empty()) {
			//cout<<sum<<endl;
            numbers.push_back(sum);
            sum=0;	
        }
        else
        {
			
			sum+=stoi(line);
			//cout<<(int)stoi(line)<<endl;
			//cout<<sum<<endl;
        }
        //cout<<numbers.size(); 

        //istringstream iss(line);
        
        //int a, b;
        //if(!(iss >> a >> b)) {break;}
    }
    for(vector<int>::iterator i=numbers.begin();i!=numbers.end();i++)
		cout<<*i<<endl;
	
	//for(int i=0;i<numbers.at(i);i++)
    //    cout<<numbers.at(i)<<endl;
    return 0;
}