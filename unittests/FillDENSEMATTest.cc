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
  cout<<"Testing FillDENSEMAT() Template TI=Int:"<<"\n";
  DENSEOBJ::DENSEMAT<TI> I0;
  //I0.DENSEMAT::FillDENSEMAT(2);
  I0.DENSEMAT::ResizeDENSEMAT(5,5);
  I0.DENSEMAT::FillDENSEMAT(0);
  I0.DENSEMAT::PrintDENSEMAT();
  I0.DENSEMAT::FillDENSEMAT(1);
  I0.DENSEMAT::PrintDENSEMAT();
  I0.DENSEMAT::FillDENSEMAT(2);
  I0.DENSEMAT::PrintDENSEMAT();
  //I0.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing FillDENSEMAT() Template TCI=Complex Int:"<<"\n";
  DENSEOBJ::DENSEMAT<TCI> CI0;
  //CI0.DENSEMAT::FillDENSEMAT(2);
  CI0.DENSEMAT::ResizeDENSEMAT(5,6);
  CI0.DENSEMAT::FillDENSEMAT(0);
  CI0.DENSEMAT::PrintDENSEMAT();
  CI0.DENSEMAT::FillDENSEMAT(1);
  CI0.DENSEMAT::PrintDENSEMAT();
  CI0.DENSEMAT::FillDENSEMAT(2);
  CI0.DENSEMAT::PrintDENSEMAT();
  //CI0.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing FillDENSEMAT() Template TCD=Complex Double:"<<"\n";
  DENSEOBJ::DENSEMAT<TCD> CD0;
  //CD0.DENSEMAT::FillDENSEMAT(2);
  CD0.DENSEMAT::ResizeDENSEMAT(6,5);
  CD0.DENSEMAT::FillDENSEMAT(0);
  CD0.DENSEMAT::PrintDENSEMAT();
  CD0.DENSEMAT::FillDENSEMAT(1);
  CD0.DENSEMAT::PrintDENSEMAT();
  CD0.DENSEMAT::FillDENSEMAT(2);
  CD0.DENSEMAT::PrintDENSEMAT();
  //CD0.DENSEMAT::~DENSEMAT();
  cout<<"**************************************"<<"\n";
  cout<<"Testing FillDENSEMAT() Template TD=Double:"<<"\n";
  DENSEOBJ::DENSEMAT<TD> D0;
  //D0.DENSEMAT::FillDENSEMAT(2);
  D0.DENSEMAT::ResizeDENSEMAT(5,5);
  D0.DENSEMAT::FillDENSEMAT(0);
  D0.DENSEMAT::PrintDENSEMAT();
  D0.DENSEMAT::FillDENSEMAT(1);
  D0.DENSEMAT::PrintDENSEMAT();
  D0.DENSEMAT::FillDENSEMAT(2);
  D0.DENSEMAT::PrintDENSEMAT();
  //D0.DENSEMAT::~DENSEMAT();
  }
