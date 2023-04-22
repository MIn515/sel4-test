# 修改策略

1. ✔️ : 增加 keystone 
2. ❌：return 没有修改，因为改动比较大，不确定加在哪里
3. ✔️：增加 keystoneFDT
4. ✔️：修改 try_init_kernel函数参数
5. ✔️：增加 
6. ❌：修改 dtb_reg = paddr_to_pptr_reg , 没有此函数
7. ✔️：增加
8. ✔️：修改 init_plat()
9. ✔️：修改及增加 init_freemem，
10. ✔️ ：增加：printf("Booting all finished, dropped to user space\n");后面
11. 

```c++
#ifdef ENABLE_SMP_SUPPORT
    ,
    word_t hart_id,
    word_t core_id
#endif
```
ENABLE_SMP_SUPPORT 是否启用有关吗？先全部替换，不保留 hart_id。
