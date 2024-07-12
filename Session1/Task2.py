import math as m
def AreaOfCircle(r):
    area = m.pi * r * r
    return area

if __name__ == "__main__":
    r= int(input("Enter the radius: "))
    print(AreaOfCircle(r))
