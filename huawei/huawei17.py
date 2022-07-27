pos = [0, 0]
inputs = input().split(';')

for item in inputs:

    if not 2 <= len(item) <= 3:
        continue

    try:
        ori = item[0]
        step = int(item[1:])  # may raise error

        if ori == 'A':
            pos[0] -= step
        elif ori == 'S':
            pos[1] -= step
        elif ori == 'W':
            pos[1] += step
        elif ori == 'D':
            pos[0] += step
        else:
            continue
    except:
        continue

print(f"{pos[0]},{pos[1]}")
