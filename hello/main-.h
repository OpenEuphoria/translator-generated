#include "include/euphoria.h"
extern object _5;
extern object _8;
extern int Argc;
extern char **Argv;
extern uintptr_t *peekptr_addr;
extern uint8_t *peek_addr;
extern uint16_t *peek2_addr;
extern uint64_t *peek8_addr;
extern uint32_t *peek4_addr;
extern uint8_t *poke_addr;
extern uint16_t *poke2_addr;
extern uint32_t *poke4_addr;
extern uint64_t *poke8_addr;
extern uintptr_t *pokeptr_addr;
extern struct d temp_d;
extern double temp_dbl;
extern char *stack_base;
extern int total_stack_size;

extern struct routine_list _00[];
extern char ** _02;
extern object _0switches;
extern struct ns_list _01[];
#ifdef _WIN32
extern void *winInstance;

#endif
