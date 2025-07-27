#ifndef ANALYZER_H
#define ANALYZER_H

int count_base(const char *seq, char base);
double compute_gc_content(const char *seq);
int validate_sequence(const char *seq);

#endif
