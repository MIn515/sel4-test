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

![image](https://user-images.githubusercontent.com/74185337/236675577-fd45a0a1-0730-4b55-bbd8-fb1cbe9f2df9.png)

> 原因：

[调试](https://github.com/MIn515/sel4-test/blob/main/modify_patch/result/debug.md)




![image](https://user-images.githubusercontent.com/74185337/236677603-14a3236e-0411-40f1-84b2-aa0c24303bbf.png)

### pass

在 `keystone` 里面运行 

![image](https://user-images.githubusercontent.com/74185337/237062093-a04ffa27-d851-46a4-b53f-9c232198d376.png)

未修改脚本的运行结果

[keytone调试](https://github.com/MIn515/sel4-test/blob/main/modify_patch/result/keystone-debug.md)





### new
> 修改脚本之后，编译得到的 是`kernel`，`sel4-driver`，`kernel`是修改之后的，`sel4-driver`是从10.1.1转到11.1.1

在 `keystone` 里面运行 , runner 是用的 sel410.1.1 配套的runner【步骤：先运行keystone sel4 10.1.1，生成 三个文件：kernel.elf、sel4-driver、runner，runner 保持不变，分别将kernel.elf、sel4-driver替换成11.0.0编译之后的文件】

**结果1：只替换kernel.elf   或   替换 kernel.elf + sel4-driver**
> 卡住
![image](https://github.com/MIn515/sel4-test/assets/74185337/328d6c66-d710-4fe6-b4dd-7ca024c9f97a)
**结果2：只替换sel4-driver**
> 成功输出一半
![image](https://github.com/MIn515/sel4-test/assets/74185337/8d5a36ff-ce49-47c4-b153-b9f48444f363)


