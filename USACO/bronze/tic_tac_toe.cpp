#include <iostream>
#include <fstream>
using namespace std;
 
char alph[3][3];
 
int checkSingle(char c){
    if (alph[0][0] == c && alph[1][1] == c && alph[2][2] == c)
    {
        return 1;
    }
    if (alph[2][2] == c && alph[1][1] == c && alph[0][0] == c)
    {
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (alph[0][i] == c && alph[1][i] == c && alph[2][i] == c)
        {
            return 1;
        }
        if (alph[i][0] == c && alph[i][1] == c && alph[i][2] == c)
        {
            return 1;
        }
    }
    return 0;
    
     
}

// unfinshed, don't want to write more if statements

int main(void)
{
  ifstream fin ("tttt.in");
  ofstream fout ("tttt.out");
  
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      fin >> cows[i][j];
 
  int single = 0, team = 0;
  for (char i = 'A'; i <= 'Z'; i++)
  {
      single+=checkSingle(i);
  }
  
}