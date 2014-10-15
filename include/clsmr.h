#ifndef clsmr_h
#define clsmr_h

typedef unsigned int uint;
typedef void (*Aprod_pointer) (
    bool transpose, // false: y<-Ax, true: y<-A'x
    uint nrow, uint ncol,
    double *x, // Input vector, size ncol
    double *y  // Output vector, size nrow
    );

// CLSMR - C LSMR
// Solves Ax = b if the system is consistent
// Solves min ||b - Ax||_2 if the system is inconsistent.
void clsmr (
    uint nrow, uint ncol,
    Aprod_pointer Aprod, // Used to obtain A*x and A'*x
    double *b
    );

#endif
