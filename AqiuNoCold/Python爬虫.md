# Python爬虫

1. [B站资源（Mac）](https://www.bilibili.com/video/BV1CY411f7yh?p=3&vd_source=01bf356a380fccf6ee22d6f71c17236a)

2. 所需要安装的包

   requests.        <u>conda install requests</u>

   BeautifulSoup4	<u>conda install BeautifulSoup4</u>

   selenium	<u>conda install selenium</u>

## 正式开始

***

```python
import requests
from bs4 import BeautifulSoup
import selenium
```

### request使用

**发送request请求：**

* url ：要下载的目标网页的URL
* paramas：字典形式，设置URL后面的参数
* data：字典或者字符串，一般用于POST方法时提交数据
* headers：设置user-agent、refer等请求头
* timeout：超时时间，单位是秒
* verify：True/False，是否进行HTTPS证书验证，默认是，需要自己设置证书地址
* allow_redirects：True/False是否让requests做重定向处理，默认是
* cookies：附带本地的cookies数据

**接受response响应**

* **r=requests.get/post(url)**
* 查看状态码，如果等于200表示请求成功： r.status_code
* 可以查看当前编码，以及变更编码***重要！！！requests会根据headers推测编码，推测不到则设置为ISO-8859-1可能导致乱码***:r.encoding
* 查看返回的网页内容:r.text
* 查看返回的HTTP的headers：r.headers
* 查看实际访问的URL：r.url
* 以字节的方式返回内容，比如用于下载图片：r.content
* 服务端要写入本地的cookies数据：r.cookies

### URL管理器

* 对外接口

1. 取出一个待爬取URL
2. 新增待爬取URL

* 实现逻辑

1. 取出时状态变成已爬取
2. 新增时判断是否已经存在
3. *可以添加正在爬取状态*

* 数据存储

1. Python内存：待爬取URLset，已爬取URLset（内存会丢失，不推荐）
2. redis：同Python内存（中大型并且要知道中间状态）
3. MySQL：urls（url，is_crawled）

### 网页解析器——BeautifulSoup

***从html中提取数据！！！***

1. 创建Bs对象
2. 搜索节点
3. 访问节点名称、属性、文字
