#ifndef SRC_NONLINEARSOLVER_H_
#define SRC_NONLINEARSOLVER_H_

#include <Epetra_SerialSpdDenseSolver.h>
#include <Epetra_SerialSymDenseMatrix.h>
#include <vector>

class NonLinearSolver
{
 public:
  void NonlinearSolve(Epetra_SerialDenseMatrix& matrix, Epetra_SerialDenseMatrix& b0,
      Epetra_SerialDenseMatrix& y0, Epetra_SerialDenseMatrix& w, Epetra_SerialDenseMatrix& y);
  NonLinearSolver() = default;
};

#endif  // SRC_NONLINEARSOLVER_H_
