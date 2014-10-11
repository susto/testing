#include <string>
#include <iostream>
#include <cstdint>

namespace buu {
  namespace iotest {
    
    /* For logger.cpp */
    class WriteLogger {
      string prefix;
      // io.w; // w io.Writer
      public:
        WriteLogger() {};
        int Write(uint8_t p[], error.E& e);
    }

    class ReadLogger {
      string prefix;
      // r; // r io.Reader
      public:
        int Read(uint8_t p[], error.E& e)
    }
  }
}
