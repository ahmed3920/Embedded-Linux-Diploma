##Task 1
def countFour(list):
    count = 0
    for i in list:
        if i == 4:
            count += 1
    return count

##Task 2
def countVowel(string):
    count = 0
    for i in string:
        if i in ['a', 'e', 'i', 'o', 'u']:
            count += 1
    return count

##Task 3
# write a python program to access environment variables in python
def accessEnv():
    import os
    print(os.environ)
accessEnv()