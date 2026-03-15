"""Viết chương trình tính tổng và tích các số chẵn và lẻ trong phạm vị từ a đến b """

a = int(input("Nhap so nguyen a: "))
b = int(input("Nhap so nguyen b: "))
if a > b:
    a, b = b, a
    
even = False
odd = False
sum_even = 0
mul_even = 1
sum_odd = 0
mul_odd = 1
for i in range(a, b + 1):
    if i % 2 == 0:
        even = True
        sum_even += i
        mul_even *= i
    else:
        odd = True
        sum_odd += i
        mul_odd *= i
        
if even:
    print("Tong cac so chan la: ", sum_even)
    print("Tich cac so chan la: ", mul_even)
    
if odd:
    print("Tong cac so le la: ", sum_odd)
    print("Tich cac so le la: ", mul_odd)
    
    
"""viết chương trình nập vào số nguyên dương n .Hãy cho biết số đó là số lẻ hay số chẵn sau đó thông báo ra màn hình """
n = int(input()) 

if n % 2 == 0:
    print(n, "la so chan")
else:
    print(n, "la so le")