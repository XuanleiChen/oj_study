
#  if __name__ == '__main__':
    # lstFenshu=[81,73,56,31,94,76,68,93,50,78]
    # print(len(lstFenshu))
    # print(lstFenshu)
    # print(max(lstFenshu))
    # for i in range(0,len(lstFenshu)):
#   print(lstFenshu[i],end=',')
 #  print(lstFenshu)
#lstFenshu.append('ok')
#  .append([99,500])
#  print(lstFenshu)
#  lstFenshu.extend([90,56])
#  print(lstFenshu)
#  lstFenshu.insert(2,66)
#  print(lstFenshu)
#  lstFenshu.remove(56)
#  print(lstFenshu)
#  lstFenshu.pop()  # 不带参 直接剔除最后一个值
#  print(lstFenshu)     # 带参 剔除索引对应的值
#  lstFenshu.pop(0)  # 不带参 直接剔除最后一个值
#  print(lstFenshu)     # 带参 剔除索引对应的值


lstFenshu = [81, 73, 56, 31, 94, 76, 68, 93, 50, 78]


for i in range(0,len(lstFenshu)):

    for j in range(0, len(lstFenshu) - i - 1):

        if lstFenshu[j] > lstFenshu[j + 1]:

            lstFenshu[j], lstFenshu[j + 1] = lstFenshu[j + 1], lstFenshu[j]

print(lstFenshu)

# 2. 初始化空列表用于存储排序后的结果
lstNew = []

# 3. 核心逻辑：循环提取最小值，直到原列表为空
while lstFenshu:
    # 注意：变量名不要用min，避免覆盖内置函数
    min_num = min(lstFenshu)  # 找当前列表的最小值
    lstFenshu.remove(min_num) # 从原列表移除最小值
    lstNew.append(min_num)    # 将最小值添加到新列表

# 4. 打印排序后的结果
print("升序排序后的列表：", lstNew)

lstFenshu = [81, 73, 56, 31, 94, 76, 68, 93, 50, 78]
lstFenshu.sort()
print(lstFenshu)