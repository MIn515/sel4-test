> 补丁失败的原因

## part 1


```patch
 patching file include/arch/riscv/arch/kernel/boot.h
 Hunk #1 FAILED at 25.
1 out of 1 hunk FAILED -- saving rejects to file include/arch/riscv/arch/kernel/boot.h.rej
patching file include/arch/riscv/arch/kernel/boot.h
Hunk #1 succeeded at 15 (offset -11 lines).
patching file include/arch/riscv/arch/model/statedata.h
Hunk #1 FAILED at 39.
1 out of 1 hunk FAILED -- saving rejects to file include/arch/riscv/arch/model/statedata.h.rej
patching file include/arch/riscv/arch/sbi.h
Hunk #1 FAILED at 83.
Hunk #2 FAILED at 119.
2 out of 2 hunks FAILED -- saving rejects to file include/arch/riscv/arch/sbi.h.rej
can't find file to patch at input line 104
Perhaps you used the wrong -p or --strip option?
The text leading up to this was:
 --------------------------
|diff --git include/plat/spike/plat/machine/fdt.h include/plat/spike/plat/machine/fdt.h
|index 49972d31..9c52b510 100644
|--- include/plat/spike/plat/machine/fdt.h
|+++ include/plat/spike/plat/machine/fdt.h
--------------------------
File to patch: 
```

1. include/arch/riscv/arch/kernel/boot.h

2. include/arch/riscv/arch/model/statedata.h

3. include/arch/riscv/arch/sbi.h

4. include/plat/spike/plat/machine/fdt.h
> 没有该文件
