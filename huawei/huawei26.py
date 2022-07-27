inputs = input()

alpha = ''
for item in inputs:
    if item.isalpha():
        alpha += item

sorted_alpha = sorted(alpha, key=str.upper)

idx = 0
ret = ''
for i in range(len(inputs)):
    if inputs[i].isalpha():
        ret += sorted_alpha[idx]
        idx += 1
    else:
        ret += inputs[i]

print(ret)
