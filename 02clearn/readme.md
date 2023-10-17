- vscode 配置c
下载mingw64,解压后把 D:\dev-tool\mingw64\bin  加入到系统变量里
gcc -v 检查是否能成功
将D:\dev-tool\mingw64\bin里的minwg4-make32.exe 直接改成make.exe

c语言不像java那样运行就能debug了，
编译的话有2种方式


一种是通过编写makefile的方式来编译
makefile里通过
```
02:
	gcc 02.c -o bin/02
```


一种是通过写.vscode里的lauch.json和task.json
其中的task.json里可以配置类似makefile里的任务
file->preferences->setting来做配置
file->->preferences->tasks来做配置

