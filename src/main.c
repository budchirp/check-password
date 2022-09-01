#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "termux-auth.h"

int main(void) {
  char *password;
  password = getpass("Password: ");

  if (!password) {
    puts("Failed to read password input.");
    return EXIT_FAILURE;
  }

  if (termux_auth("termux", password)) {
    return 0;
  } else {
    puts("Invalid password!");
    return 1;
  }
}
