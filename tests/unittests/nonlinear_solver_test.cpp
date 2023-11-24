
#include "nonlinear_solver_test.h"

NonlinearSolverTest::NonlinearSolverTest()
{
  matrix_.shape(9, 9);
  matrix_(0, 0) = 0.00381971863420549;
  matrix_(1, 0) = 0.0020;
  matrix_(2, 0) = 0.000965167479061995;
  matrix_(3, 0) = 0.0020;
  matrix_(4, 0) = 0.00138032073697570;
  matrix_(5, 0) = 0.000861397758772237;
  matrix_(6, 0) = 0.000965167479061995;
  matrix_(7, 0) = 0.000861397758772237;
  matrix_(8, 0) = 0.000678804493543927;

  matrix_(0, 1) = 0.002;
  matrix_(1, 1) = 0.00381971863420549;
  matrix_(2, 1) = 0.002;
  matrix_(3, 1) = 0.00138032073697570;
  matrix_(4, 1) = 0.002;
  matrix_(5, 1) = 0.00138032073697570;
  matrix_(6, 1) = 0.000861397758772237;
  matrix_(7, 1) = 0.000965167479061995;
  matrix_(8, 1) = 0.000861397758772237;

  matrix_(0, 2) = 0.000965167479061995;
  matrix_(1, 2) = 0.00200000000000000;
  matrix_(2, 2) = 0.00381971863420549;
  matrix_(3, 2) = 0.000861397758772237;
  matrix_(4, 2) = 0.00138032073697570;
  matrix_(5, 2) = 0.002;
  matrix_(6, 2) = 0.000678804493543927;
  matrix_(7, 2) = 0.000861397758772237;
  matrix_(8, 2) = 0.000965167479061995;

  matrix_(0, 3) = 0.002;
  matrix_(1, 3) = 0.00138032073697570;
  matrix_(2, 3) = 0.000861397758772237;
  matrix_(3, 3) = 0.00381971863420549;
  matrix_(4, 3) = 0.002;
  matrix_(5, 3) = 0.000965167479061995;
  matrix_(6, 3) = 0.002;
  matrix_(7, 3) = 0.00138032073697570;
  matrix_(8, 3) = 0.000861397758772237;

  matrix_(0, 4) = 0.00138032073697570;
  matrix_(1, 4) = 0.002;
  matrix_(2, 4) = 0.00138032073697570;
  matrix_(3, 4) = 0.002;
  matrix_(4, 4) = 0.00381971863420549;
  matrix_(5, 4) = 0.002;
  matrix_(6, 4) = 0.00138032073697570;
  matrix_(7, 4) = 0.002;
  matrix_(8, 4) = 0.00138032073697570;

  matrix_(0, 5) = 0.000861397758772237;
  matrix_(1, 5) = 0.00138032073697570;
  matrix_(2, 5) = 0.002;
  matrix_(3, 5) = 0.000965167479061995;
  matrix_(4, 5) = 0.002;
  matrix_(5, 5) = 0.00381971863420549;
  matrix_(6, 5) = 0.000861397758772237;
  matrix_(7, 5) = 0.00138032073697570;
  matrix_(8, 5) = 0.00200000000000000;

  matrix_(0, 6) = 0.000965167479061995;
  matrix_(1, 6) = 0.000861397758772237;
  matrix_(2, 6) = 0.000678804493543927;
  matrix_(3, 6) = 0.002;
  matrix_(4, 6) = 0.00138032073697570;
  matrix_(5, 6) = 0.000861397758772237;
  matrix_(6, 6) = 0.00381971863420549;
  matrix_(7, 6) = 0.002;
  matrix_(8, 6) = 0.000965167479061995;

  matrix_(0, 7) = 0.000861397758772237;
  matrix_(1, 7) = 0.000965167479061995;
  matrix_(2, 7) = 0.000861397758772237;
  matrix_(3, 7) = 0.00138032073697570;
  matrix_(4, 7) = 0.002;
  matrix_(5, 7) = 0.00138032073697570;
  matrix_(6, 7) = 0.002;
  matrix_(7, 7) = 0.00381971863420549;
  matrix_(8, 7) = 0.002;

  matrix_(0, 8) = 0.000678804493543927;
  matrix_(1, 8) = 0.000861397758772237;
  matrix_(2, 8) = 0.000965167479061995;
  matrix_(3, 8) = 0.000861397758772237;
  matrix_(4, 8) = 0.00138032073697570;
  matrix_(5, 8) = 0.002;
  matrix_(6, 8) = 0.000965167479061995;
  matrix_(7, 8) = 0.00200000000000000;
  matrix_(8, 8) = 0.00381971863420549;

  b_vector_.resize(9);
  b_vector_[0] = 1357.42803841637;
  b_vector_[1] = 1330.45347724905;
  b_vector_[2] = 1357.42803841637;
  b_vector_[3] = 1353.38917789346;
  b_vector_[4] = 1376.01952100849;
  b_vector_[5] = 1350.64903939096;
  b_vector_[6] = 1357.42803841637;
  b_vector_[7] = 1411.27792115093;
  b_vector_[8] = 1357.42803841637;

  x_vector_.size(9);
  x_vector_(0) = 161643.031767534;
  x_vector_(1) = 43277.7916790043;
  x_vector_(2) = 162132.580424512;
  x_vector_(3) = 54559.4126169668;
  x_vector_(4) = 10518.1563067329;
  x_vector_(5) = 53208.9583111822;
  x_vector_(6) = 147203.068996657;
  x_vector_(7) = 83111.4417592719;
  x_vector_(7) = 147692.617653634;
}
