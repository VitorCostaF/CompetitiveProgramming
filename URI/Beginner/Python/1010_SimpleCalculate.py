#=====================================    
#   URI Online Judge Problem
#   Category: Begginer
#   Problem: 1010 - Simple Calculate
#   Status: Accepted
#=====================================

input1 = input()
input2 = input()
input1 = input1.split()
input2 = input2.split()


number1 = int(input1[1])
priceUnit1 = float(input1[2])

number2 = int(input2[1])
priceUnit2 = float(input2[2])

print("VALOR A PAGAR: R$ {:.2f}".format(number1*priceUnit1 + number2*priceUnit2))
