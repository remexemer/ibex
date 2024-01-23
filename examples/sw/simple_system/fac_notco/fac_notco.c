// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "simple_system_common.h"

unsigned fac(unsigned n)
{
  if (n < 2)
    return 1;
  return n * fac(n - 1);
}

int main(int argc, char **argv) {
  pcount_enable(0);
  pcount_reset();
  pcount_enable(1);
  unsigned n = fac(10);
  pcount_enable(0);
  puthex(n);
  return 0;
}
