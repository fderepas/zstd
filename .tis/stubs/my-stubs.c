#include <stdlib>
int szcount(char **a) {
  int i=0;
  while (a[i]!=NULL) ++i;
  return i;
}
#define CMD_LINE_CALL (x) {	    \
    char* a1 [] = { x , NULL };	    \
    main(szcount(a1),a1);	    \
  }

int tismain() {
  CMD_LINE_CALL ("./zstd", "-h");
  return 0;
}
