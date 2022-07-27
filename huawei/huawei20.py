def check_pw(password: str) -> bool:
    if len(password) <= 8:
        return False
    a, b, c, d = 0, 0, 0, 0

    for item in password:
        if ord('A') <= ord(item) <= ord('Z'):
            a = 1
        elif ord('a') <= ord(item) <= ord('z'):
            b = 1
        elif ord('0') <= ord(item) <= ord('9'):
            c = 1
        elif ord(item) != ord(' ') and ord(item) != ord('\n'):
            d = 1

    if a+b+c+d < 3:
        return False

    # * 若存在长度大于4的相同子串，必定存在长度3的相同子串
    for i in range(len(password)-3):
        if len(password.split(password[i:i+3])) >= 3:
            return False

    return True


while True:
    try:
        print("OK" if check_pw(input()) else "NG")
    except:
        break
