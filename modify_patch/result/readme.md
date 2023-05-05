## 最新编译结果

### pass
1. 
![编译结果失败](https://user-images.githubusercontent.com/74185337/233795111-fc7c4c2c-5680-46f6-ade5-e5bc4711275a.png)
> 文件位置发送变化

2. 
![image](https://user-images.githubusercontent.com/74185337/235285392-22281739-b031-4796-bf4d-2e7c99ec36b3.png)
> `include/arch/riscv/arch/64/mode/hardware.h`注释不能用//, 而应用 /**/

3. 
![image](https://user-images.githubusercontent.com/74185337/236373582-806ae7c4-acf4-4e26-b320-6e579d82246d.png)
> `tool/../fdt.c`与`fdt.h`，无法确定`keystoneFDT`函数要不要加，将其注释掉

---
### new
![image](https://user-images.githubusercontent.com/74185337/236373987-7a331bd3-938c-460c-aab1-a4ded3b0ebeb.png)


## keystone 运行结果

### pass
1. 循环出现：> superior IRQ!! SIP 0
> ls | xargs grep -r 'SIP '  定位：src/arch/riscv/machine/hardware.c:    printf("Superior IRQ!! SIP %lx\n", read_sip());

### new
