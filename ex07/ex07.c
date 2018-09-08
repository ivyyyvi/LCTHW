#include <stdio.h>

int main(int argc, char* argv[])
{ // the usual start of a C program
  int distinace = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';                  // single character
  char first_name[] = "Awe";           // character array string
  char last_name[] = "Some";

  printf("You are %d miles away.\n", distinace);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);

  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
          first_name, initial, last_name);

  int bugs = 100; // don't have to declare variables at th top f th func
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginery rate of %f.\n",
          bugs, bug_rate);
  // Notice the use of L notation to specify long integer constants.
  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n",
          part_of_universe);

  // this makes no sense, just a demo of something weird
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte; // a char multiply by an int. OK. 
  printf("Which means you should care %d%%.\n", care_percentage);


  return 0;
}
