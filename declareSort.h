// Sorting Routine the Process
// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))

#define DeclareSort(prefix,type) \
static int _DeclareSort_ ## prefix ## _Compare(const void *a,const void *b) {\
const type *aa; const type *bb;\
aa=a; bb=b;\
if(*aa < *bb) return -1;\
else if (*aa > *bb) return 1;\
else return 0;\
}\
void \
prefix ## _sort(type *a ,int n){\
qsort(a,n,sizeof(type),_DeclareSort_ ## prefix ## _Compare);\
}