n = int(input())
score = list(map(int,input().split(' ')))
highest_score = lowest_score = score[0]
highCount = lowCount = 0
for s in score:
    if s>highest_score:
        highest_score = s
        highCount+=1
    if s<lowest_score:
        lowest_score = s
        lowCount+=1
print(highCount,lowCount)
