#include<math.h>

int numlen(long long n)
{
    return log10(n)+1;
}

long long pow10(int len)
{
  return (long long) pow(10,len);
}

int digitAt(long long n,int index)
{
  return ( n / pow10(index) ) % 10;
}

long long after(long long n,int index)
{
  return n%pow10(index);
}

long long before(long long n,int index)
{
  return n-after(n,index+1);
}
