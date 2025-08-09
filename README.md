# StatisticalCode

Project ini dibuat untuk menerapkan konsep ataupun formula statistika serta probabilitas ke dalam baris kode.
Sedikitnya disini akan membahas definisi sebuah konsep dalam statistika secara sederhana.

**Menghitung nilai variansi populasi**

$$\sigma^2 = \frac{\Sigma (x_i - \mu)}{N}$$

```cpp
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

    for(int i = 0; i < N; i++){
        opr = data[i] - mean;
        sum += opr*opr;
    }
    return sum / N;
}
```

## ⚡ Quick Access ⚡
- [Variansi](statistika/variansi)
- [Kovarians](statistika/kovarians)
- [Standar Deviasi](statistika/standar_deviasi)
