#include "../include/DenseMatrix.h"
//#include <bits/stdc++.h>
#include <complex>
#include <iostream>

#define NAMEOF(VAR) #VAR
#define INFO() printf("%s\n", __PRETTY_FUNCTION__)
#define TDV std::is_same<T, double>::value
#define TIV std::is_same<T, int>::value
#define TCIV std::is_same<T, std::complex<int>>::value
#define TCDV std::is_same<T, std::complex<double>>::value
#define INIT() (TIV?0:(TDV?0.0:(TCIV?(0):(TCDV?(0.0):0 ) )))

// Constructeur:
template<class T>
DENSEOBJ::DENSEMAT<T>::DENSEMAT() // Default
{
  std::cout<<"INIT() "<<INIT()<<"\n";
  this->_nr = 1;
  this->_nc = 1;
  this->DENSEOBJ::DENSEMAT<T>::AllocDENSEMAT();
}

// Destructeur (DEALLOCATION):
template<class T>
DENSEOBJ::DENSEMAT<T>::~DENSEMAT(){
  for(int i=0; i<this->_nr; i++){delete[] this->_values[i];}; // dealloc cols
  delete[] this->_values; // dealloc rows
  this->_values = NULL;
}

//Fonctions:
// ALLOCATION:
template<class T>
void DENSEOBJ::DENSEMAT<T>::AllocDENSEMAT(){
  this->_values = new T* [this->_nr]; // alloc rows
  for(int i=0; i<this->_nr; i++){this->_values[i] = new T [this->_nc];} // alloc cols
  this->DENSEOBJ::DENSEMAT<T>::FillDENSEMAT(2);
}
// FILL:
template<class T>
void DENSEOBJ::DENSEMAT<T>::FillDENSEMAT(int pattern){
  switch (pattern) {
    case 0: // Lineaire
      for(int i = 0 ; i<this->_nr; i++){for(int j = 0; j<this->_nc; j++){this->_values[i][j] = (j + (i*this->_nr));}}
      break;
    case 1: // Diag lineaire
      for(int i = 0 ; i<this->_nr; i++){for(int j = 0; j<this->_nc; j++){this->_values[i][j] = (i==j)?(j + (i*this->_nr)):(0);}}
      break;
    default: // Full constante
      for(int i = 0 ; i<this->_nr; i++){for(int j = 0; j<this->_nc; j++){this->_values[i][j] = (-10);}}
      break;
  } //END SWITCH
}
// RESIZE:
template<class T>
void DENSEOBJ::DENSEMAT<T>::ResizeDENSEMAT(int nrows, int ncols){
  T** temp = NULL; // Init Pointer to Pointer.
  temp = new T* [nrows]; // Alloc 1D.
  for(int i=0; i<nrows; i++){
    temp[i] = new T [ncols]; // Création d'un objet 2D temporaire.
  }
  for(int i=0; i<nrows; i++){
    for(int j=0; j<ncols; j++){
      if(i<this->_nr && j<this->_nc){
        temp[i][j] = this->_values[i][j]; // Copy si exist,
        std::cout<<"i j val temp "<<i<<" "<<j<<" "<<this->_values[i][j]<<" "<<temp[i][j]<<"\n";
      }else{temp[i][j] = (0);std::cout<<"i j temp "<<i<<" "<<j<<" "<<temp[i][j]<<"\n";}//Sinon 0.
    } //END j for loop.
  } //END i for loop.
  for(int i=0; i<this->_nr; i++){
    delete[] this->_values[i]; // Delete cols.
  }
  delete[] this->_values; // Delete rows.
  this->_nr = nrows;      // Copy new number of rows,
  this->_nc = ncols;      // and cols.
  this->_values = temp;   // Copy new values,
  //for(int i=0; i<nrows; i++){delete[] temp[i];} // Delete cols temp,
  //delete[] temp; // and rows.
  temp = NULL;
}
// PRINT:
template<class T>
void DENSEOBJ::DENSEMAT<T>::PrintDENSEMAT() {
  INFO();
  std::cout<<"Nbr of rows, cols : "<<this->_nr<<"\t"<<this->_nc<<"\n";
  for(int i = 0 ; i<this->_nr; i++){for(int j = 0; j<this->_nc; j++){std::cout<<this->_values[i][j]<<"\t";}std::cout<<"\n";}
}


template class DENSEOBJ::DENSEMAT<double>;
template class DENSEOBJ::DENSEMAT<int>;
template class DENSEOBJ::DENSEMAT<std::complex <double> >;
template class DENSEOBJ::DENSEMAT<std::complex <int> >;
