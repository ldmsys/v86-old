#include <stdint.h>
#include <math.h>
#include <stdbool.h>

extern void call_interrupt_vector(int32_t interrupt_nr, bool is_software_int, bool has_error_code, int32_t error_code);
extern void throw_cpu_exception(void);
extern double_t math_pow(double_t, double_t);

#include "const.h"
#include "global_pointers.h"
#include "log.c"
#include "cpu.c"
#include "profiler.c"
#include "memory.c"
#include "modrm.c"
#include "misc_instr.c"
#include "arith.c"
#include "fpu.c"
#include "instructions.c"
#include "instructions_0f.c"
#include "string.c"
#include "sse_instr.c"

