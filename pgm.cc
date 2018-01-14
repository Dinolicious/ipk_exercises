#include <fstream>
#include <cmath>
#include <algorithm>

#include "pgm.hh"

std::vector<std::vector<int> > read_pgm(const std::string& filename)
{
  std::ifstream file(filename);
  
  std::string token;
  file >> token;
  if (token != "P2")
    throw std::runtime_error("wrong file format");
  
  int xSize, ySize, maxVal;
  file >> xSize >> ySize >> maxVal;

  std::vector<std::vector<int> > data(xSize,std::vector<int>(ySize));

  for (unsigned int j = 0; j < data[0].size(); j++)
    for (unsigned int i = 0; i < data.size(); i++)
      file >> data[i][data[0].size()-1-j];

  return data;
}