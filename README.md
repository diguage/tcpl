# tcpl
##《The C Programming Language》书中示例以及练习题代码。

## 重要日志

* 2015-03-06 开始看书写代码

## 问题集锦

记录每章发现的问题，提高学习效果。

### 第一章问题

1. “联合”是什么东西？
2. C语言支持哪些转义字符？支持哪些格式化输出？
3. “无论文本从何处输入，输出到何处，其输入/输出都是按照字符流的方式处理。”那么如何处理二进制文件？
4. EOF的具体值是什么？
5. `int main(int argc, const char *argv[])`是VIM提示出来的`main`函数格式。里面的参数都代表什么意思？这个格式的`main`是从什么地方来的？
6. 怎么处理多字符集的文字？



## 重点提示

记录需要注意的重点知识以及解决的，值得关注的问题。

### 第一章

1. `EOF`代码文件结尾，从控制台接受字符来判断是否为一行结束时，`getchar() != EOF`不生效。故以后的`EOF`换为`\n`字符来代替。使用`printf(“EOF is %d\n”, EOF);`将`EOF`打印出来可以看出，`EOF = -1`。而换行符为`10`。则，不能使用`EOF`来判断是否结尾。更详细的信息，还需要再补充。

### 自己整理

各个整理处理的需要注意的知识点。

####各个数据类型的长度

```
           Type sizeof
           char    1
      short int    2
            int    4
       long int    8
  long long int    8
          float    4
         double    8
```

## 错误集锦

#### 1. sizeof用法

代码：

```c
printf(“%-10s %d\n”, “char”, (sizeof char));
```

错误提示
```
error: expected parentheses around type name in sizeof expression
```

解决办法：sizeof是方法，需要加括号才能调用。


#### 2. sizeof返回值

代码以及错误提示
```
warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
    printf("%-10s %d\n", "char", sizeof(char));
                  ~~             ^~~~~~~~~~~~
                  %lu
```

解决办法：没想到`sizeof()`返回值竟然是长整无符号型。换`%lu`。
