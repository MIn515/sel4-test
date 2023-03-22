## 命令

```bash
/home/wangmin/sel4-test/all-other/qemu/xbuild/qemu-system-x86_64   
-cpu Nehalem,-vme,+pdpe1gb,-xsave,-xsaveopt,-xsavec,-fsgsbase,-invpcid,+syscall,+lm,enforce -nographic -serial mon:stdio -m size=3G  -kernel images/kernel-x86_64-pc99 -initrd images/sel4test-driver-image-x86_64-pc99
```

## 说明

 > 设置优先级，但是没有让度时间片
 
 因此，新线程会被调度，是在 main 的时间片用完之后被调度；而 main 的时间片不确定什么时候用完，因此， `thread_2` 运行结果可能在中间的任意位置出现


## 结果

   > 在main执行之后，新线程执行，并且有一个 vm 0错误


