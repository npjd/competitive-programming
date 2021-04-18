#include <iostream>
#include <fstream>


using namespace std;

int main(void)
{
  int N, A[100], B[100];
  string T[100];
  ifstream fin ("traffic.in");
  fin >> N;
  for (int i = 0; i < N; i++)
  {
      fin>>T[i]>>A[i]>>B[i];
  }
  int a =-1000, b = 1000;
  for (int i = N-1; i >=0; i--)
  {
      if (T[i]=="none")
      {
          a = max(a,A[i]);
          b = min(b,B[i]);
      }
      if (T[i]=="on")
      {
          a-= B[i];
          b-= A[i];
          if (a<0)
          {
              a=0;
          }
          if (b<0)
          {
              a=0, b=0;
          }
      }
      if (T[i]=="off")
      {
          a += A[i];
          b += B[i];
      }
  }
  ofstream fout ("traffic.out");
  fout<<a<<" "<<b<<endl;

  a =-1000, b = 1000;
  for (int i = 0; i <N; i++)
  {
      if (T[i]=="none")
      {
          a = max(a,A[i]);
          b = min(b,B[i]);
      }
      if (T[i]=="off")
      {
          a-= B[i];
          b-= A[i];
          if (a<0)
          {
              a=0;
          }
          if (b<0)
          {
              a=0, b=0;
          }
      }
      if (T[i]=="on")
      {
          a += A[i];
          b += B[i];
      }
  }
  fout<<a<<" "<<b<<endl;
  
}