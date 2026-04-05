#ifndef LIBC_H
#define LIBC_H

#ifdef STM32H7
  #include <stddef.h>
  // Firmware build: Declare our custom implementation
  // cppcheck-suppress misra-c2012-21.2
  void *memset(void *str, int c, size_t n);
  // cppcheck-suppress misra-c2012-21.2
  void *memcpy(void *dest, const void *src, size_t n);
  // cppcheck-suppress misra-c2012-21.2
  int memcmp(const void *s1, const void *s2, size_t n);
#else
  // Host test build: Use standard library ONLY.
  // This avoids conflicts with system macros on macOS/Ubuntu.
  #include <string.h>
#endif

#endif
