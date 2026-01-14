while 1:
    chengyu = input('请输入成语：')
    if len(chengyu) == 4:
        print(chengyu)
        Newchengyu = chengyu
        chengyu = input('请输入成语：')
        if len(chengyu) == 4:
            print(chengyu)
            if chengyu[0] == Newchengyu[3]:
                continue
            else:
                print('错了！')
                break
    else:
        print('不是成语！')
        break
