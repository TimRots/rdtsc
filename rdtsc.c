// RDTSC returns the TSC in EDX:EAX on Intel based CPUs

#include <stdio.h>

int main()
{
  unsigned long long rdtsc;
  unsigned int edx, eax;

  __asm__ __volatile__ ("rdtsc" : "=a"(edx), "=d"(eax));
  rdtsc = ((unsigned long long)edx)|( ((unsigned long long)eax)<<32);

  printf("%llu\n", rdtsc);
  return 0;
}
