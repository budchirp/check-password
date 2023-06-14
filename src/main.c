#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "termux-auth.h"

int main(void) {
  char *password;
  password = getpass("Password: ");

  if (!password) {
    printf("Failed to read password input.\n");
    return EXIT_FAILURE;
  }

  if (termux_auth("termux", password)) {
    return 0;
  } else {
    printf("Invalid password!\n");
    return 1;
  }
}
