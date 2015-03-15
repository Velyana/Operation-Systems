#include <stdio.h>
#include<stdlib.h>

#define DATEPATH "/bin/date"
#define DATE "date"

main()
{
   int rc =0;

   if (execl (DATEPATH,DATE,0) == -1) {
      printf("\nERROR\n");
      rc = 1;
   }

    else {
       printf("This line is never printed\n");
    }
    exit(rc);

}
