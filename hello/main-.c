// Euphoria To C version 4.1.0 development (-1:3a4f98de8206, 2022-06-03 21:07:20)
#if defined(_WIN32)
#include <windows.h>
#endif //  defined(_WIN32)
#include <time.h>
#include "include/euphoria.h"
#include "main-.h"

#ifndef _WIN32
    #include <unistd.h>
#endif // ndef _WIN32


int Argc;
char **Argv;
#ifdef _WIN32
HANDLE default_heap;
//'test me!' is this in the header?: unsigned __stdcall GetProcessHeap(void);
#endif // def _WIN32
uintptr_t *peekptr_addr;
uint8_t *peek_addr;
uint16_t *peek2_addr;
uint64_t *peek8_addr;
uint32_t *peek4_addr;
uint8_t *poke_addr;
uint16_t *poke2_addr;
uint32_t *poke4_addr;
uint64_t *poke8_addr;
uintptr_t *pokeptr_addr;
struct d temp_d;
double temp_dbl;
char *stack_base;
void init_literal();
#ifdef _WIN32
extern long __stdcall Win_Machine_Handler(LPEXCEPTION_POINTERS p);
#endif // def _WIN32
int total_stack_size = 262144;
#ifdef _WIN32
    
    int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
#else // _WIN32 // def _WIN32
    
    int main(int argc, char *argv[])
#endif // def _WIN32
{
    s1_ptr _0switch_ptr;
    object _0, _1, _2;
    
    #ifdef _WIN32
        int argc;
        char **argv;
        
        SetUnhandledExceptionFilter(Win_Machine_Handler);
        default_heap = GetProcessHeap();
        argc = 1;
        Argc = 1;
        argv = make_arg_cv(szCmdLine, &argc, 1);
        if( hInstance ){
            winInstance = hInstance;
        }
        else{
            winInstance = GetModuleHandle(0);
        }
    #else // def _WIN32
        Argc = argc;
        Argv = argv;
    #endif // def _WIN32
    stack_base = (char *)&_0;
    check_has_console();

    _02 = (char**) malloc( sizeof( char* ) * 2 );
    _02[0] = (char*) malloc( sizeof( char* ) );
    _02[0][0] = 1;
    _02[1] = "\x01\x02";

    #ifdef _WIN32
        eu_startup(_00, _01, _02, (object)CLOCKS_PER_SEC, (object)CLOCKS_PER_SEC);
    #else // def _WIN32
#ifdef CLK_TCK
        eu_startup(_00, _01, _02, (object)CLOCKS_PER_SEC, (object)CLK_TCK);
#else
        eu_startup(_00, _01, _02, (object)CLOCKS_PER_SEC, (object)sysconf(_SC_CLK_TCK));
#endif
    #endif // def _WIN32
    trace_lines = 500;
    _0switch_ptr = (s1_ptr) NewS1( 15 );
    _0switch_ptr->base[1] = NewString("-com    ");
    _0switch_ptr->base[2] = NewString("/home/leprechaun/Source/euphoria    ");
    _0switch_ptr->base[3] = NewString("-i    ");
    _0switch_ptr->base[4] = NewString("/home/leprechaun/Source/euphoria/include    ");
    _0switch_ptr->base[5] = NewString("-i    ");
    _0switch_ptr->base[6] = NewString("/usr/share/euphoria/include    ");
    _0switch_ptr->base[7] = NewString("-con    ");
    _0switch_ptr->base[8] = NewString("-lib    ");
    _0switch_ptr->base[9] = NewString("/home/leprechaun/Source/euphoria/source/build/eu.a    ");
    _0switch_ptr->base[10] = NewString("-lib-pic    ");
    _0switch_ptr->base[11] = NewString("/home/leprechaun/Source/euphoria/source/build/euso.a    ");
    _0switch_ptr->base[12] = NewString("-makefile    ");
    _0switch_ptr->base[13] = NewString("-eudir    ");
    _0switch_ptr->base[14] = NewString("/home/leprechaun/Source/euphoria    ");
    _0switch_ptr->base[15] = NewString("-gcc    ");
    _0switches = MAKE_SEQ( _0switch_ptr );

    init_literal();
    shift_args(argc, argv);

    /** hello.ex:1	puts(1, "Hello World\n")*/
    EPuts(1, _8); // DJP 
    Cleanup(0);
    return 0;
}
// GenerateUserRoutines

// 0xE761A9E5
