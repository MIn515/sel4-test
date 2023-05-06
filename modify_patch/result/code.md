<details>
  <summary> Superior IRQ!! SIP 0  </summary>
  
  ```
  Breakpoint 1, kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:300
300	{
(gdb) s
304	    va_start(args, format);
(gdb) 
300	{
(gdb) s
304	    va_start(args, format);
(gdb) 
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:164
164	    if (!format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:305
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:168
168	    n = 0;
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=<optimized out>) at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:172
172	            while (isdigit(*format)) {
(gdb) 
179	            switch (*format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:170
170	    while (*format) {
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
23	    putDebugChar(c);
(gdb) 
putDebugChar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:23
23	    putDebugChar(c);
(gdb) 
sbi_console_putchar (ch=83)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:70
70	    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
(gdb) 
sbi_call (arg_2=0, arg_1=0, arg_0=83, cmd=1)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:52
52	    register register_t a1 asm("a1") = arg_1;
(gdb) 
53	    register register_t a2 asm("a2") = arg_2;
(gdb) 
54	    register register_t a7 asm("a7") = cmd;
(gdb) 
56	    asm volatile("ecall"
(gdb) 

Breakpoint 1, kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:300
300	{
(gdb) 
304	    va_start(args, format);
(gdb) 
300	{
(gdb) 
304	    va_start(args, format);
(gdb) 
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:164
164	    if (!format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:305
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:168
168	    n = 0;
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=<optimized out>) at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:172
172	            while (isdigit(*format)) {
(gdb) 
179	            switch (*format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:170
170	    while (*format) {
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
23	    putDebugChar(c);
(gdb) 
putDebugChar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:23
23	    putDebugChar(c);
(gdb) 
sbi_console_putchar (ch=83)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:70
70	    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
(gdb) 
sbi_call (arg_2=0, arg_1=0, arg_0=83, cmd=1)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:52
52	    register register_t a1 asm("a1") = arg_1;
(gdb) 
53	    register register_t a2 asm("a2") = arg_2;
(gdb) 
54	    register register_t a7 asm("a7") = cmd;
(gdb) 
56	    asm volatile("ecall"
(gdb) 

Breakpoint 1, kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:300
300	{
(gdb) 
304	    va_start(args, format);
(gdb) 
300	{
(gdb) 
304	    va_start(args, format);
(gdb) 
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:164
164	    if (!format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
kprintf (format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n", 
    format@entry=0xffffffff8401d370 "halting...")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:305
305	    i = vprintf(format, args);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:168
168	    n = 0;
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=<optimized out>) at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:172
172	            while (isdigit(*format)) {
(gdb) 
179	            switch (*format) {
(gdb) 
245	                        n += print_unsigned_long_long(va_arg(ap, unsigned long long), 16);
(gdb) 
print_unsigned_long_long (ui_base=<optimized out>, x=<optimized out>)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:142
142	    n += print_unsigned_long(lower, ui_base);
(gdb) 
vprintf (ap=0xffffffff840282d0 <kernel_stack_alloc+3624>, 
    format=0xffffffff8401d3a8 "Superior IRQ!! SIP %lx\n")
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:170
170	    while (*format) {
(gdb) 
272	            switch (*format) {
(gdb) 
279	                kernel_putchar(*format);
(gdb) 
putchar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:20
20	    if (c == '\n') {
(gdb) 
23	    putDebugChar(c);
(gdb) 
putDebugChar (c=83 'S') at /home/wangmin/sel4-test/temp/11.0.0/kernel/src/machine/io.c:23
23	    putDebugChar(c);
(gdb) 
sbi_console_putchar (ch=83)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:70
70	    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
(gdb) 
sbi_call (arg_2=0, arg_1=0, arg_0=83, cmd=1)
    at /home/wangmin/sel4-test/temp/11.0.0/kernel/include/arch/riscv/arch/sbi.h:52
52	    register register_t a1 asm("a1") = arg_1;
(gdb) 
53	    register register_t a2 asm("a2") = arg_2;
(gdb) 
54	    register register_t a7 asm("a7") = cmd;
(gdb) 
56	    asm volatile("ecall"

  ```
  
  </details>
