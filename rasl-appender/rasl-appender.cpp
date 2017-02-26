#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void append_file(FILE *exe, const char *rasl_filename);
static void failure(const char *message, ...);

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage:\n\trasl-appender executable file1.rasl file2.rasl...\n");
  } else {
    FILE *exe = fopen(argv[1], "rb+");
    if (exe == 0) {
      failure("can't open executable file %s for append", argv[1]);
    }

    int seek_res = fseek(exe, 0, SEEK_END);
    if (seek_res != 0) {
      failure("can't seek in file %s: %s\n", argv[1], strerror(errno));
    }

    while (ftell(exe) % 4096 != 0) {
      fputc('@', exe);
    }

    for (int i = 2; i < argc; ++i) {
      append_file(exe, argv[i]);
    }

    fclose(exe);
  }
  return EXIT_SUCCESS;
}

static void append_file(FILE *exe, const char *rasl_filename) {
  FILE *rasl = fopen(rasl_filename, "rb");

  char buffer[4096];
  size_t read;
  while ((read = fread(buffer, 1, sizeof(buffer), rasl)) > 0) {
    size_t written = fwrite(buffer, 1, read, exe);
    if (written != read) {
      failure(
        "written to executable %d, but read before %d",
        (int) written, (int) read
      );
    }
  }

  if (ferror(rasl)) {
    failure("rasl file %s reading error", rasl_filename);
  }

  fclose(rasl);
}

static void failure(const char *message, ...) {
  va_list args;
  va_start(args, message);

  fprintf(stderr, "ERROR in rasl-appender: ");
  vfprintf(stderr, message, args);
  va_end(args);

  exit(EXIT_FAILURE);
}
