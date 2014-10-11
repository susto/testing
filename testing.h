#ifndef buu_testing_h
#define buu_testint_h

#include <cstdio>
#include <cstdint>
#include <map>
#include <string>
#include <cstdarg>

namespace buu {
  namespace testing {
    class _C {
    }
    class T { // Test
      public:
        void Errorf(const char *, ...);
    }
    class B { // Benchmark
    }

    /* For allocs.cpp */
    double AllocsPerRun(int runs, void (*f)() );
 
    /* For cover.cpp */
    struct CoverBlock {
      uint32_t Line0;
      uint16_t Col0;
      uint32_t Line1;
      uint16_t Col1;
      uint16_t Stmts;
    };

    struct Cover {
      string Mode;
      map<string, uint32_t[]> Counters;
      map<string, CoverBlock[]> Block;
      string CoveredPackages;
    }

    extern Cover cover;

    void RegisterCover(Cover c);
    void MustBeNil(Error::E e);
    void __coverReport(); // Don't use this function out buu::testing
  }
}

