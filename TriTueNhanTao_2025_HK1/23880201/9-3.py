#BT35: Count Unique Words
sentence = "dog is a simple animal dogs is selfless animal"

words = sentence.lower().split()

unique_words = set(words)

count = len(unique_words)
print(f"Number of unique words: {count}")