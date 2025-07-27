#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "analyzer.h"

int count_base(const char *seq, char base) {
    int count = 0;
    for (int i = 0; seq[i] != '\0'; i++) {
        if (toupper(seq[i]) == toupper(base)) {
            count++;
        }
    }
    return count;
}

double compute_gc_content(const char *seq) {
    int g = count_base(seq, 'G');
    int c = count_base(seq, 'C');
    int total = strlen(seq);
    return total > 0 ? 100.0 * (g + c) / total : 0.0;
}

int validate_sequence(const char *seq) {
    for (int i = 0; seq[i] != '\0'; i++) {
        char b = toupper(seq[i]);
        if (b != 'A' && b != 'T' && b != 'C' && b != 'G') {
            return 0;
        }
    }
    return 1;
}
