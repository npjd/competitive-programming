#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int N, M;
string spot[100], plain[100];

int main(void)
{
  ifstream fin ("cownomics.in");
  ofstream fout ("cownomics.out");
  fin >> N >> M;
  for (int i=0; i<N; i++) fin >> spot[i];
  for (int i=0; i<N; i++) fin >> plain[i];
  int res = 0;
  for (int j = 0; j < M; j++)
  {
      bool found = true;
      bool arr[2][4] = {0};
      for (int i = 0; i < N; i++)
      {
          if (spot[i][j]=='A')
          {
              arr[0][0]=true;
          }
          if (spot[i][j]=='C')
          {
              arr[0][1]=true;
          }
          if (spot[i][j]=='G')
          {
              arr[0][2]=true;
          }
          if (spot[i][j]=='T')
          {
              arr[0][3]=true;
          }
          if (plain[i][j]=='A')
          {
              arr[1][0]=true;
          }
          if (plain[i][j]=='C')
          {
              arr[1][1]=true;
          }
          if (plain[i][j]=='G')
          {
              arr[1][2]=true;
          }
          if (plain[i][j]=='T')
          {
              arr[1][3]=true;
          }
      }
      for (int p = 0; p < 4; p++)
      {
          if (arr[0][p]==true && arr[1][p]==true)
          {
              found = false;
              break;
          }
      }
      if (found)
      {
          res+=1;
      }
  }
  
  fout << res << endl;
  
}