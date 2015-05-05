//
//  main.c
//  Adam
//
//  Created by Vineet Tiwari on 2015-05-05.
//  Copyright (c) 2015 vinny.co. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>



bool yelling (char *string) {

  for ( char i = 0; i < strlen(string); i++) {

    if (islower(string[i])) {

      return false;
    }
    
  }

  return true;
}

int main(int argc, const char * argv[]) {
  char input[1024];

  while (1) {
    scanf("%1024[^\n]", input);

    fpurge(stdin);

    if (strcasecmp(input, "Exit") == 0)
    {
      break;

    } else if (strcasecmp(input, "Adam") == 0) {

      printf("Fine. Be that way!\n");

    } else if (yelling(input)) {

      printf("wow! chill out.\n");

    } else if (strchr(input, '?')) {

      printf("Sure\n");

    } else {

      printf("Whatever\n");
    }


  }

  return 0;
}
