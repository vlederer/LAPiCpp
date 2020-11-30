#include <vector>
#include <iostream>

namespace DENSEOBJ{

template<class T>
class DENSEMAT{
// Matrice Dense
 private: // Les attributs de la classe:
  T** _values = NULL; // Les éléments de la matrice.
  int _nr = 0; // nombre de lignes.
  int _nc = 0; // nombre de colonnes.

 public: // Methodes et operateurs de la classe:
  // Constructeurs:
  DENSEMAT();  // Default one.
  // Destructeur:
  ~DENSEMAT(); // Dealloc DENSEMAT.
  // Fonctions:
  void AllocDENSEMAT(); // Alloc DENSEMAT.
  void FillDENSEMAT(int pattern);  // Fill DENSEMAT.
  void PrintDENSEMAT(); // Print DENSEMAT.
  void ResizeDENSEMAT(int nrows, int ncols); // Resize using deep copy.
};

}
