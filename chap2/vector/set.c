#include "set.h"

void vector_union(struct Vector *c, struct Vector *a, struct Vector *b) {
  int i;

  for (i = 0; i < a->size; i++) {
    if (vector_find_first(c, a->buffer[i]) == -1) {
      vector_push_back(c, a->buffer[i]);
    }
  }

  for (i = 0; i < b->size; i++) {
    if (vector_find_first(c, b->buffer[i]) == -1) {
      vector_push_back(c, b->buffer[i]);
    }
  }
}

void vector_intersection(struct Vector *c, struct Vector *a, struct Vector *b) {
  int i;

  for (i = 0; i < a->size; i++) {
    if (vector_find_first(b, a->buffer[i]) >= 0) {
      vector_push_back(c, a->buffer[i]);
    }
  }
}

