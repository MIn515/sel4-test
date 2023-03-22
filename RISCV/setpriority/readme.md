QEMU 模拟 RISCV ，最新版 SEL4 与 QEMU

## 命令

1. 
```bash
../init-build.sh -DPLATFORM=spike -DRISCV64=1
ninja
```

2. 
```bash
	/home/wangmin/sel4-test/all-other/qemu/build/qemu-system-riscv64  
  -machine spike -cpu rv64 -nographic -serial mon:stdio -m size=4095M -bios none -kernel images/sel4test-driver-image-riscv-spike
```

## 结果

新线程还是没能运行成功

> 同样的代码，X86可以运行成功

