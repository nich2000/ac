//==============================================================================
/**
 * NIch Ant Colony Project
 * Copyright 2016 NIch(nich2000@mail.ru) All rights reserved
 *
 * File: main.c
 */
//==============================================================================
#include "main.h"
//==============================================================================
int main(int argc, char const *argv[])
{
  printf("Hello!\n");

  for(int i = 0; i < 100; i++)
  {
    usleep(100000);
    fputs("\033[A\033[K", stdout);
    printf("counter: %d\n", i);
    rewind(stdout);
  }

  return 0;
}
//==============================================================================
