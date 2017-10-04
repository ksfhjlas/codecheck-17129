#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  for (int i = 1; i < argc; i++) {
    char *moji=argv[i];
    int len=moji.size();
    printf("%d\n", len);
    if(argv[i]==""){
      printf ("Hello!\n");
    }else{
      printf ("Hello %s!\n", argv[i]);
    }
  }
  return 0;
}
