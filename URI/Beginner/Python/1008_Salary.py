#=====================================    
#   URI Online Judge Problem
#   Category: Begginer
#   Problem: 1008 - Salary
#   Status: Accepted
#=====================================

number = int(input())
hours = int(input())
amountPerHour = float(input())

print("NUMBER =", number)
print("SALARY = U$ {:.2f}".format(hours*amountPerHour))
