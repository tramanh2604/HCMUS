#BT21: Slice list into 3 equal chunks and reverse each chunk
samp_list = [11, 45, 8, 23, 14, 12, 78, 45, 89]

length = len(samp_list)
chunk_size = int(length / 3)
start = 0
end = chunk_size

for i in range(3):
    indexes = slice(start, end)

    list_chunk = samp_list[indexes]
    print(f"Chunk {i+1} {list_chunk}")

    print(f"After reversing is {list(reversed(list_chunk))}")

    start = end
    end += chunk_size