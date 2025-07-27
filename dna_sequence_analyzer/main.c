#include <stdio.h>
#include <string.h>
#include "analyzer.h"

#define MAX_SEQ_LEN 1000

int main() {
    char sequence[MAX_SEQ_LEN];

    printf("Enter a DNA sequence (A, T, C, G only):\n");
    scanf("%s", sequence);

    if (!validate_sequence(sequence)) {
        printf("Invalid DNA sequence. Only A, T, C, and G are allowed.\n");
        return 1;
    }

    int a = count_base(sequence, 'A');
    int t = count_base(sequence, 'T');
    int c = count_base(sequence, 'C');
    int g = count_base(sequence, 'G');

    printf("\nBase Counts:\n");
    printf("A: %d\n", a);
    printf("T: %d\n", t);
    printf("C: %d\n", c);
    printf("G: %d\n", g);

    double gc_content = compute_gc_content(sequence);
    printf("GC Content: %.2f%%\n", gc_content);

    return 0;
}
