## 命令

```bash
wangmin@wangmin-G3-3579:~/sel4-test/all-other/xbuild$  
/home/wangmin/sel4-test/all-other/qemu/xbuild/qemu-system-x86_64  -cpu Nehalem,-vme,+pdpe1gb,-xsave,-xsaveopt,-xsavec,-fsgsbase,-invpcid,+syscall,+lm,enforce -nographic -serial mon:stdio   
-m size=3G  -kernel images/kernel-x86_64-pc99 -initrd images/sel4test-driver-image-x86_64-pc99
```
