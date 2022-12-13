
#define SIMDE_ENABLE_NATIVE_ALIASES

#include "../simde/simde/x86/avx.h"



__m256 multiply_and_add(__m256 a, __m256 b, __m256 c) {

  return _mm256_add_ps(_mm256_add_ps(a,b), c);

}

int main () {
    __m256 a = _mm256_set1_ps(1);
    __m256 b = _mm256_set1_ps(1);
    __m256 c = _mm256_set1_ps(1);

    auto d = multiply_and_add(a,b,c);

}