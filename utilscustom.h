#define SAY_HI
#define VERBOSITY 4
#define min(x, y) ((x) < (y) ? (x) : (y))
#define Warning(...) fprintf(stderr, __VA_ARGS__)
#define FormatString(format, ...) printf(format, __VA_ARGS__)
static inline int distSquared(int dx,int dy){
    return dx*dx+dy*dy;
}
#define ForLoopPrint(i,n) for((i)=0;(i)<(n);(i)++)
#define WhileLoop(x,n) do {puts("Hello While Loop ");++(x); printf("While Loop Value : %d\n",(x));} while((x) < (n));

// String Expansion
// #x convert string to string constant
#define StringAddition(x) (printf("%s=%d\n",#x,(x)))
#define NottringAddition(x) 5 ## x