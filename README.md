## Github

### 关键字查询：

awesome：令人惊叹的，在该标签类别中查询项目

tutorial：查询资料，书籍，文档

sample：查询对应技术的代码样本



### Github三要素：

**Repository 仓库**

仓库是github项目管理存储的基本单位

一个仓库中存储一个项目，一个用户可以拥有多个项目，一般仓库分为private和public

**Commit 提交**

程序员在整个开发周期中，有大量的对代码资源的迭代和修改，都可以通过commit的方式进行记录，便于程序员回溯代码，即使这些代码被删除

提交便于使用者观察整个工程的开发流程以及设计流程

**Branch 分支**

在仓库中可以包含多个分支，分支是代码文件的第一存储单元，默认仓库主分支为master/main

不仅可以管理代码存储，便于多人协作开发



### 仓库内容：

code：

资源存储，代码资源，二进制，项目管理脚本，许可证等

issues：

使用时遇到的bug或进行提交，等待反馈

readme：

使用markdown语言编写，工程自述文件，开发进度，版本更新，使用介绍等

license：许可证

GPL 2.0，3.0    	Apahce 2.0	Mit  	这些许可证，给使用者最大使用权限以及最小限制



### 设备认证：

**1，如何让网站的账户与设备绑定，后续完成代码的管理，上传和下载**

git init //创建本地仓库 ，后续对仓库的操作，都要在仓库的位置（master）

git config --list //查看git的配置文件

git config --global user.email "邮箱"

git config --global user.name "用户名"



ssh-keygen -t rsa -C "邮箱" //创建本地密文，SSH远程访问。去对应的目录查找密文文件，复制密文粘贴到setting-》SSH key and GPG-》new ssh key-》粘贴

ssh -T  git@github.com //测试关联是否成功

//弹出询问是否连接，回应yes



**2，为目标仓库起别名，定位目标仓库，后续上传**

git remote add origin(别名) "仓库ssh地址"  //为ssh仓库地址创建别名为origin'

git remote remove orgin //删除origin



### 本地设备和云端仓库的交互逻辑：



<img src="C:\Users\32145\Desktop\本地设备与云端仓库交互逻辑.png" alt="本地设备与云端仓库交互逻辑" style="zoom:150%;" />



### 一些常用指令：

git status //查看本地仓库状态

git add 	//添加内容

git rm		//删除本地文件并删除仓库数据

git restroe //恢复被删除数据（仓库存在）

rm a.c		//删除云端文件，可以恢复



删除操作：

git rm a.c

rm "a.c"

git commit -m "删除a.c的操作"

git push origin master



### 代码更新的依赖关系被破坏：

先拉再推

本地内容比云端新，完成更新替换，但是如果直接修改云端内容，导致本地内容无法再次提交

**处理方案：**

先拉去git pull云端内容，与本地内容合并或操作，然后再推即可

git pull --rebase origin master //拉取云端内容

git rebase --skip 						//选择跳过本地内容，保留云端

git rebase --abort						//

git rebase --continue				//



### 下载开源代码：

git clone “https地址”





## Markdown文本修饰语言

用特殊符号修饰正文，用.md为后缀



### #标题修饰符

一个#为一级标题

##二级标题

###三级标题

### 换行符：<br>

### 修饰正文：

*斜体*

![image-20240610194410031](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610194410031.png)

**加粗字体**

![image-20240610194443382](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610194443382.png)

***加粗斜体***

![image-20240610194516582](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610194516582.png)

~~横线划字~~

![image-20240610194619259](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610194619259.png)

`突显内容`

![image-20240610194700644](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610194700644.png)

---表示分割线

---

### 引用

// >表示一级引用引用

// >>表示二级引用

//>>>表示三级引用

>一级引用

> >二级引用

> > > 三级引用



### 列表

**无序列表**： *游戏    

​					   *原神

​						  *神力凌华    

* 游戏
  * 原神
  * 王者荣耀
    * 小乔
    * 孙悟空

* 生活



**有序列表**

1. 物理
   1. 原子物理
   2. 现代物理
      1. aa
      2. bb
2. 化学



### 表格：

​	名称|技能|排行

​	--			|:--:		|--:

（左对齐	中间		右对齐）

再写内容

例：海王|海神三叉戟|3



### 代码片段：

//      ```

​				c(还可以为cpp,python,java，不同语言有不同的显色)

​				代码内容

//   	```

```c++
#include<iostream>
using namespace std;

int main(){
	cout<<"niubi"<<endl;
	return 0;
}
```



### 超链接文本：

[链接标题](网址 “点击跳转”)

![image-20240610200258071](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610200258071.png)

“ ”  ：里面内容为悬停时显示内容



### 插入图片：

![图片]()

![image-20240610200444277](C:\Users\32145\AppData\Roaming\Typora\typora-user-images\image-20240610200444277.png)























