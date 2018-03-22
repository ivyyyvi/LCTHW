#include <stdio.h>

void crash ()
{
  printf ("Entered crash().\n");
  printf ("The following commands can be used to see information about the crash.\n");
  printf ("1) gdb --batch --ex run --ex bt --ex q --args ./ex04\n");
  printf ("2) valgrind ./ex04 -v\n");

  char* nullChar = NULL;
  int i = 0;
  for (i = 0; i< 100000000; i++) {
    printf ("printing null char to crash the program %c", *nullChar);
  }
  printf ("Leaving crash()\n (This should not happen.)");
} // crash

void showReturnValueOfPrintf()
{
  int retPrintf;
  retPrintf = 0;

  retPrintf = printf("123\n");
  printf("Return value of the last printf is (0x%x)\n", retPrintf);
  retPrintf = printf("123");
  printf("Return value of the last printf is (0x%x)\n", retPrintf);
}

void showNormalAddress()
{

  int localVariable1;
  localVariable1 = 0;
  printf ("localVariable1's address is : \t(%p)\n", &localVariable1);
  int localVariable2;
  localVariable2 = 0;
  printf ("localVariable2's address is : \t(%p)\n", &localVariable2);
  int localVariable3;
  localVariable3 = 0;
  printf ("localVariable3's address is : \t(%p)\n", &localVariable3);
  printf ("Note that the sequence of declaration is localVariable1 then localVariable2 then localVariable3\n");

  int distanceOfAddresses;
  distanceOfAddresses = 0;
  distanceOfAddresses = &localVariable2 - &localVariable1;
  printf ("&localVariable2 - &localVariable1 = \t(0x%x)\n", distanceOfAddresses);

  distanceOfAddresses = &localVariable1 - &localVariable2;
  printf ("&localVariable1 - &localVariable2 = \t(0x%x)\n", distanceOfAddresses);

  distanceOfAddresses = (void*)&localVariable1 - (void*)&localVariable2;
  printf ("(void*)&localVariable1 - (void*)&localVariable2 = \t(0x%x)\n", distanceOfAddresses);

  printf ("Reference to \"man 3 printf\" for format specifier\n");
  printf ("Size of localVariable1 = \t(0x%lx)\n", sizeof(localVariable1));
  printf ("Size of &localVariable1 = \t(0x%lx)\n", sizeof(&localVariable1));
}


int main (int argc, char* argv[])
{
  printf("##Calling showReturnValueOfPrintf()...\n");
  showReturnValueOfPrintf();
  printf("\n\n");
  printf("##Calling showNormalAddress()...\n");
  showNormalAddress();
  printf("\n\n");
  printf("##Calling crash()...\n");
  crash();

  return 0;
}
