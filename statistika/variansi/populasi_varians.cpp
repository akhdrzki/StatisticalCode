#include <iostream>
#include <vector>

float populasi_varians(std::vector<float> data, float mean) {
  /**
  Menghitung nilai varians populasi dari vektor (list data).

  Args:
      data -> vector<float> berupa data dalam array yang bertipe float (desimal)

  Return:
      float -> nilai dari varians populasi bertipe float

  >> populasi_varians(data = {50, 100}, mean = 100.0)
  2500
  >> populasi_varians(data = {98, 102}, mean = 100.0)
  4
  **/

  int N = data.size();
  float sum = 0, opr;

  for (int i = 0; i < N; i++) {
    opr = data[i] - mean;
    sum += opr * opr;
  }
  return sum / N;
}

int main() {
  std::vector<float> data;
  float mean;

  std::cout << "Nilai varians data pertama: "
            << populasi_varians(data = {50.0, 150.0}, mean = 100.0)
            << std::endl;

  std::cout << "Nilai varians data kedua: "
            << populasi_varians(data = {98.0, 102.0}, mean = 100.0);
  return 0;
}
