# LEngine
一个比较简易的框架 集成了YooAsset、HybridCLR以及Luban
本项目的一个特点就是采用代码外挂的形式，通过生成解决方案并且将Dll导入到Unity的Plugins文件夹下使用的方法，这种方案有很多的好处，一个是通过Dll从底层就将项目划分为了一层层的模块，防止程序编写代码时不符合规范。且交付Dll能够不暴露源码，通过第三方的混淆工具更佳。而且编写代码时也不会出现一切换到Unity界面就编译代码的尴尬。
