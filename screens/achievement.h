
#include <iostream>
#include "bits/stdc++.h" 
#include <fstream>

using namespace std;


void print_achievement_file() 
{ 
       string line;
       ifstream myfile ("achievements.txt");
       if (myfile.is_open())
      {
              while ( getline (myfile,line) )
           {
            cout << line << '\n';
            }
         myfile.close();
       }


  return;
}    


void add_achievement(string player_name, int score)
{
  string result = player_name + "\t\t\t"+to_string(score) +"\n" ;
    
    ofstream MyFile("achievements.txt", ios::app);
     MyFile <<result;
     MyFile.close(); 
return;
    
}