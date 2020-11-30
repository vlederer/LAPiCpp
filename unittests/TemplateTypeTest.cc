#include "../include/DenseMatrix.h"
#include <bits/stdc++.h>
//#include <cstdio>
//#include <iostream>
// g++ -std=c++17 -pg -g -O0 -Wall ex1.cpp -o run
// g++ -std=c++17 -pg -g -O0 -Wall DenseMatrix.cpp ex1.cc -o run
// valgrind --leak-check=yes ./run
// gprof -l run *.out > analysis.txt

#define TD double
#define TI int
#define TCD complex<double>
#define TCI complex<int>

using namespace std;

int main(int argc, char *argv[]){
  // Display each command-line argument.
  /*cout << "\nCommand-line arguments:\n";
  for( int count = 0; count < argc; count++ ){
    cout << "  argv[" << count << "]   " << argv[count] << "\n";
  }*/
  cout<<"**************************************"<<"\n";
  cout<<"Testing Template TI=Int:"<<"\n";
  DENSEOBJ::DENSEMAT<TI> I0;
  I0.DENSEMAT::FillDENSEMAT(0);
  I0.DENSEMAT::PrintDENSEMAT();
  //I0.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TI> I1;
  I1.DENSEMAT::FillDENSEMAT(1);
  I1.DENSEMAT::PrintDENSEMAT();
  //I1.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TI> I2;
  I2.DENSEMAT::FillDENSEMAT(2);
  I2.DENSEMAT::PrintDENSEMAT();
  //I2.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing Template TCI= Complex Int:"<<"\n";
  DENSEOBJ::DENSEMAT<TCI> CI0;
  CI0.DENSEMAT::FillDENSEMAT(0);
  CI0.DENSEMAT::PrintDENSEMAT();
  //CI0.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TCI> CI1;
  CI1.DENSEMAT::FillDENSEMAT(1);
  CI1.DENSEMAT::PrintDENSEMAT();
  //CI1.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TCI> CI2;
  CI2.DENSEMAT::FillDENSEMAT(2);
  CI2.DENSEMAT::PrintDENSEMAT();
  //CI2.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing Template TD=Double:"<<"\n";
  DENSEOBJ::DENSEMAT<TD> D0;
  D0.DENSEMAT::FillDENSEMAT(0);
  D0.DENSEMAT::PrintDENSEMAT();
  //D0.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TD> D1;
  D1.DENSEMAT::FillDENSEMAT(1);
  D1.DENSEMAT::PrintDENSEMAT();
  //D1.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TD> D2;
  D2.DENSEMAT::FillDENSEMAT(2);
  D2.DENSEMAT::PrintDENSEMAT();
  //D2.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing Template TCD=Complex Double:"<<"\n";
  DENSEOBJ::DENSEMAT<TCD> CD0;
  CD0.DENSEMAT::FillDENSEMAT(0);
  CD0.DENSEMAT::PrintDENSEMAT();
  //CD0.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TCD> CD1;
  CD1.DENSEMAT::FillDENSEMAT(1);
  CD1.DENSEMAT::PrintDENSEMAT();
  //CD1.DENSEMAT::~DENSEMAT();
  DENSEOBJ::DENSEMAT<TCD> CD2;
  CD2.DENSEMAT::FillDENSEMAT(2);
  CD2.DENSEMAT::PrintDENSEMAT();
  //CD2.DENSEMAT::~DENSEMAT();
  }
