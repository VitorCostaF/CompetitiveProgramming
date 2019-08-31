#=====================================    
#   URI Online Judge Problem
#   Category: Begginer
#   Problem: 1009 - Salary with Bonus
#   Status: Accepted
#=====================================

name = input()
salary = float(input())
amountSold = float(input())

print("TOTAL = R$ {:.2f}".format(salary + 0.15*amountSold))
