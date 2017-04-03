from math import factorial
from string import *

while(True):
    s = input()
    
    if(s == ""):
        continue
    if(s == "#"):
        break

    vetor = [0] * 26

    for letter in s:
        vetor[ord(letter) - ord('a')] += 1


    set_chars = set(s)
    set_chars = sorted(set_chars)

    sequence = 0
    answer = 1

    for i in range(len(s)):
        index = set_chars.index(s[i])
        for j in range(index):        
            if vetor[ord(set_chars[j]) - ord('a')] != 0:
                vetor[ord(set_chars[j]) - ord('a')] -= 1
            else:
                continue

            sequence = factorial(len(s) - i - 1)
            
            for k in vetor:
                sequence /= factorial(k)

            answer += sequence
            vetor[ord(set_chars[j]) - ord('a')] += 1

        vetor[ord(s[i]) - ord('a')] -= 1


    answer_text = '%10s' % int(answer)    
    print(answer_text)