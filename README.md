# xd0615
0615 笔记
一.Git 的使用 
1.Git Bash下载：https://git-scm.com/downloads
2.安装Git Bash
3.注册GitHub账号
4.使用 git config --global user.name "你的GitHub用户名"和 git config --global user.email "你的GitHub注册邮箱"配置用户信息
5.生成SSH密钥：使用 ssh-keygen -t -rsa -C "你的GitHub注册邮箱"，然后输入存放ssh密钥的文件名（默认为id_rsa.pub）,输入两次密码（默认不需要设置密码）,然后找到生成的.ssh文件夹中的id_rsa.pub密钥，将内容全部复制（或使用 clip < ~/.ssh/id_rsa.pub 来进行复制）
6.将ssh密钥上传至GitHub：打开GitHub_settings_keys页面，点击 New SSH key，填写标题，将之前复制的内容粘贴至下方文本，点击Add SSH key 即可生成ssh key。
7.使用 git clone [url]拷贝远程库至本地
8.进入拷贝至本地的仓库，进入README.md 文件，使用vim README.md 语句进行编辑
9.按ESC 退出编辑模式，输入:wq 保存
10.使用git add README.md 将更改存入暂存区
11.使用git commit -m "注释（用于区别每一次的版本更新）" 将更改记录提交至存储库
12.输入 git push 将本地库上传至远程
