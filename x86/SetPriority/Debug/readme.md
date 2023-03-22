## 命令

```bash
wangmin@wangmin-G3-3579:~/sel4-test/all-other/build$ 
/home/wangmin/sel4-test/all-other/qemu/xbuild/qemu-system-x86_64  -cpu Nehalem,-vme,+pdpe1gb,-xsave,-xsaveopt,-xsavec,-fsgsbase,-invpcid,+syscall,+lm,enforce -nographic -serial mon:stdio   
-m size=3G -S -s -kernel images/kernel-x86_64-pc99 -initrd images/sel4test-driver-image-x86_64-pc99
```

## GDB

> (gdb) info threads
>  Id   Target Id         Frame 
>* 1    Thread 1.1 (CPU#0 [running]) thread_2 ()
>    at /home/wangmin/sel4-test/all-other/projects/sel4test/apps/sel4test-driver/src/main.c:62

info threads只能显示一个线程信息

