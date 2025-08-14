#BT4: Capitalize the first letter of each word in a string
def capitalize_string(str):
    #cat chuoi bang ham split
    cut_string = str.split(" ")
    result = []
    #chay vong lap for de capitalize tung chu
    for word in cut_string:
        cap_word = word.capitalize()
        result.append(cap_word)
    #noi cac tu lai bang khoang trang
    print(" ".join(result))

str = input("Nhap chuoi: ")
capitalize_string(str)