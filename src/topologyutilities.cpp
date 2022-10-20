#include "topologyutilities.h"
#include <Epetra_SerialSymDenseMatrix.h>
#include <cmath>
#include <memory>
#include <string>
#include <vector>
#include "topology.h"

void MIRCO::CreateMeshgrid(std::vector<double>& meshgrid, int ngrid, double delta)
{
#pragma omp parallel for schedule(static, 16)  // Same amount of work -> static
  for (int i = 0; i < ngrid; i++)
  {
    meshgrid[i] = (delta / 2) + i * delta;
  }
}

void MIRCO::CreateSurfaceObject(int resolution, double& user_zmax, double Hurst,
    bool rand_seed_flag, std::string zfilePath, bool rmg_flag, int rmg_seed,
    std::shared_ptr<MIRCO::TopologyGeneration>& surfacegenerator)
{
  if (rmg_flag)
  {
    surfacegenerator = std::shared_ptr<MIRCO::Rmg>(
        new MIRCO::Rmg(resolution, user_zmax, Hurst, rand_seed_flag, rmg_seed));
  }
  else
  {
    surfacegenerator = std::shared_ptr<MIRCO::ReadFile>(new MIRCO::ReadFile(resolution, zfilePath));
  }
}

void MIRCO::ComputeMaxAndMean(Epetra_SerialDenseMatrix topology, double& zmax, double& zmean)
{
#pragma omp parallel for schedule(guided, 16) reduction(+ : zmean) reduction(max : zmax)
  // Static and Guided seem even but Guided makes more sense
  for (int i = 0; i < topology.M(); i++)
  {
    for (int j = 0; j < topology.N(); j++)
    {
      zmean += topology(i, j);
      if (topology(i, j) > zmax)
      {
        zmax = topology(i, j);
      }
    }
  }

  zmean = zmean / (topology.N() * topology.M());
}