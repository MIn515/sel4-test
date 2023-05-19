##  调试`bbl`二进制文件

内容：


将成功运行的 hello 包来调试，从 set pmp 到 enclave 相关的内容 

#### bbl

bbl 二进制文件的位置    `build/riscv-pk.build/bbl`

可 break  的地方：
> get_enclave_region_size

> run_enclave

> resume_enclave


#### 以下为调试 bbl  ，以hello 为运行对象

```
(gdb) c
Continuing.

Breakpoint 2, 0x0000000080005792 in run_enclave ()
(gdb) list
No symbol table is loaded.  Use the "file" command.
(gdb) n
Single stepping until exit from function run_enclave,
which has no line number information.
0x00000000800092ce in swap_prev_state ()            sm/enclave.c
(gdb) ^CQuit
(gdb) n
Single stepping until exit from function swap_prev_state,
which has no line number information.
0x0000000080009254 in swap_prev_smode_csrs ()      sm/thread.c//    
(gdb) 
Single stepping until exit from function swap_prev_smode_csrs,
which has no line number information.
0x0000000080005850 in run_enclave ()
(gdb) n
Single stepping until exit from function run_enclave,
which has no line number information.
0x0000000080001edc in mcall_trap ()                sm/trap.s// 9 --> ECALL from S-mode
(gdb) n
Single stepping until exit from function mcall_trap,
which has no line number information. 
0x000000008000013c in restore_mscratch ()         sm/trap.s       恢复 mscratch，这样以后的陷阱就会知道它们不是来自 M 模式。

```

#### 以下为调试 bbl  ，以hello 为运行对象
![image](https://github.com/MIn515/sel4-test/assets/74185337/4ab9f6b1-01fa-4110-a822-cd209d9a26a2)

bug 在 `bbl` 的 `run_enclave` 之前

```
(gdb) c
Continuing.

Breakpoint 1, 0x0000000080005792 in run_enclave ()
(gdb) n
Single stepping until exit from function run_enclave,
which has no line number information.
0x00000000800092ce in swap_prev_state ()
(gdb) 
Single stepping until exit from function swap_prev_state,
which has no line number information.
0x0000000080009254 in swap_prev_smode_csrs ()
(gdb) 
Single stepping until exit from function swap_prev_smode_csrs,
which has no line number information.
0x0000000080005850 in run_enclave ()
(gdb) 
Single stepping until exit from function run_enclave,
which has no line number information.
0x0000000080001edc in mcall_trap ()
(gdb) 
Single stepping until exit from function mcall_trap,
which has no line number information.
0x000000008000013c in restore_mscratch ()
(gdb) 
Single stepping until exit from function restore_mscratch,
which has no line number information.
0x0000000080000140 in restore_regs ()
(gdb) 
Single stepping until exit from function restore_regs,
which has no line number information.
0x0000000000000000 in ?? ()

```

可知故障发生在：（启动 enclave 之前还是之后？）

##  调试运行时系统`kernel`



