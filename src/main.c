#include <stdio.h>
#include <stdlib.h>

void usage(FILE *stream) {
    fprintf(stream, "Usage: ./main <input.csv>\n");
}

int main(int argc, char** argv)
{
    if (argc < 2) {
        usage(stderr);
        fprintf(stderr, "Error: Missing input file argument.\n");
        return EXIT_FAILURE;
    }

    const char *input_file_path = argv[1];

    return 0;
}
