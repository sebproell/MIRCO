#ifndef SRC_LINEARSOLVER_H_
#define SRC_LINEARSOLVER_H_

#include <Epetra_SerialSpdDenseSolver.h>
#include <Epetra_SerialSymDenseMatrix.h>

class LinearSolver
{
public:
    void Solve(Epetra_SerialSymDenseMatrix& matrix,
                 Epetra_SerialDenseMatrix& vector_x,
                 Epetra_SerialDenseMatrix& vector_b);
    LinearSolver() = default;
};

#endif //SRC_LINEARSOLVER_H_