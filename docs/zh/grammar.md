# AsahiBuild 规范文档 - 描述文件语法

一个 `project.asahi` 文件的格式：

```AsahiBuild
project := "name";
version := (0, 1, 0);
src := ["main.c"]
target := $project
```

一个项目必须要有至少以下项：project，version，src 和 target.
