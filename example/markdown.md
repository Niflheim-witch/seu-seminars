# Markdown 基础
## 标题
在 Markdown 中，共有六级标题。`# 一级标题`，每增加一个#号，标题字号降低一级。
## 字体
- `*这是斜体*` *这是斜体*
- `**这是粗体**` **这是粗体**
- `***这是斜体加粗***` ***这是斜体加粗***
- `~~删除线~~~` ~~这是删除线~~
- `***这是分割线` ***
## 字体颜色

- $\color{red}{红色字体}$
- $\color{#00ff00}{绿色字体}$

## 特殊符号

Markdown 支持许多数学符号及特殊符号等，并且支持 LaTeX 公式。其中，符号和颜色结合还可以碰撞出更多火花。

- $\alpha, \beta, \gamma, \delta, \Gamma, \Delta$
- $\leftarrow, \rightarrow, \Leftrightarrow, \swarrow$
- $\surd, \triangle, \Box, \heartsuit, \spadesuit, \clubsuit, \diamondsuit$
- $\color{red}{\heartsuit}, \color{red}{\spadesuit}$

## 引用

引用可以嵌套，`>`表示引用，`>>`表示二层引用，以此类推。

> 这也是引用的文本。

## 列表

无序列表和有序列表是可以相互嵌套的，需要换行用 tab 键缩进。

- 无序列表 `- 列表元素`
- 有序列表 `1. 列表元素`

```Markdown
1. 有序列表 1
   - 无序列表 1
   - 无序列表 2
2. 有序列表 2
3. 有序列表 3
```

## 代码

- 单行代码 用\`单行代码\`包围起来。
- 多行代码 用```多行代码```包围起来，可以指明：`python, c, cpp, java, php, js, shell, json, go, math, latex, text`等。

## 代办事项

必须严格使用空格。

```Markdown
- [ ] 代办事项 1
- [ ] 代办事项 2
- [x] 已完成事项 1
```

## 图片和超链接

  - `<img src="[图片地址](https://github.com/EthanHu777/seu-seminars/edit/main/images/boy.jpg)" height="高度" width="宽度">`
  - `<div></div>`来控制图片排版。

- 超链接 `[链接标题](链接地址 "链接title")`

```HTML
<div align="center">
    <!-- 指定像素 -->
    <img src="imgurl" width=500 height=300/>
    <!-- 缩放比例 -->
    <img src="imgurl" width=50%/>
</div>
```

## 锚点与跳转

- 定义锚点：`<div id="des">destination</div>`
- 定义跳转：`[jump] (#des)`

## 数学公式（标准不一）

- 行内公式：\`$ a=b $\`
- 行间公式：\`\$\$ a=b \$\$\`

## 表格

```Markdown
| header 1    | header 2    |
| ----------- | ----------- |
| row 1 col 1 | row 1 col 2 |
| row 2 col 1 | row 2 col 2 |
```

> 左对齐 :---，右对齐 ---:，中对齐 :---:
