#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  for (int i = 1; i < argc; i++) {
    printf("%s\n",argv[i])
    if(argv[i]){
      printf ("Hello %s!\n", argv[i]);
    }else{
      printf ("Hello!\n");
    }
  }
  return 0;
}
