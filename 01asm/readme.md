# 01 项目整体说明

- nasm编译汇编代码 
比如写了第一个汇编代码 [01.asm]{./01.asm}
run.bat里依赖了MinGW32,MinGW32是个window下32位的gcc工具，里面有nasm,nasm可以进行nasm汇编代码的编译
命令行里执行了run.bat后通过tools里的Hexview.exe打开bin/01.bin里查看生成的bin文件的二进制

- bochs
这是一个虚拟机,bochsrc.bxrc是虚拟机的一个配置文件，其中
```
floppya: 1_44=./bin/01.img, status=inserted
```
指明从生成的01.img里加载



# 参考
- http://www.lizhongc.com/index.php/159.html
- https://www.bilibili.com/video/BV1xE411N74T/?spm_id_from=333.337.search-card.all.click&vd_source=59482c0d1032938b47a2ef72a0ab9516

