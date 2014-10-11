#include "testing.h"

double buu::testing::AllocsPerRun(int runs, void (*f)() )
{
  return double(mallocs/uint64_t(runs));
}
