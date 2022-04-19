测试芯片在无startup文件下，将代码烧录到SRAM中debug

1.学习使用分散加载 参考https://blog.csdn.net/weixin_39118482/article/details/79849133?spm=1001.2014.3001.5502
使用__attribute__((section("name")))来放置一个被命名的节,将name节放在地址最前面 *.o (.dyn_text, +First)
2.keil5配置
Linker 取消勾选Use Memory Layout from Target Dialog
Debug 取消勾选Load Application at startup 使用debug_SRAM.ini
Debug Settings Flash Download 勾选 Do not Erase Reset and Run
