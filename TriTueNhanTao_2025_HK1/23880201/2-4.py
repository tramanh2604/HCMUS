#BT8: Write all content of a file into a new file by skipping line number 5
#doc file test.txt
with open("test.txt", "r") as fp:
    lines = fp.readlines()

#mo file moi de ghi
with open("new_file.txt", "w") as fp:
    count = 0
    for line in lines:
        #bo dong 5
        if count == 4:
            count += 1
            continue
        else:
            #viet dong moi
            fp.write(line)

        count += 1