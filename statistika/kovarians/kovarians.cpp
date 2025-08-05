#include <iostream>
#include <vector>

float covariance(std::vector<float> data_x, std::vector<float>data_y, float mean_x, float mean_y) {
  /** 
  Menghitung covariance dari 2 jenis data x, y

  Args:
    data_x -> data variabel x sebagai array yg bertipe float
    data_y -> data variabel y sebagai array yg bertipe float
    mean_x -> nilai rata-rata dari data x (float)
    mean_y -> nilai rata-rata dari data y (float)

  Return:
    float -> nilai dari covariance bertipe float

    >> covariance(data_x = {2,4,6,8,10}, data_y = {3,7,10,14,17}, mean_x = 6, mean_y = 10.2) 
    17.5
  **/
  int N = data_x.size();
  float sum = 0, x_opr, y_opr;
  
  for (int i = 0; i < N; i++) {
    x_opr = data_x[i] - mean_x;
    y_opr = data_y[i] - mean_y;
    sum += x_opr * y_opr;
  }
  return sum / (N-1);
}

int main() {
  std::vector<float> data_x, data_y;
  float mean_x, mean_y;

  std::cout << "Nilai kovarians: " << covariance(data_x = {2,4,6,8,10}, data_y = {3,7,10,14,17}, mean_x = 6, mean_y = 10.2) << std::endl;
  return 0;
}
