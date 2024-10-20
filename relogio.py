import os

os.system('cls')
num = int(input("digite o numero para a contagem regressiva: "))

while num >= 1:
    print(num)
    num -= 1
    
    if num == 0:
        print("feliz ano novo")


