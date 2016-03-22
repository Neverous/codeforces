import sys
import datetime

y1, m1, d1 = map(int, input().split(':'))
y2, m2, d2 = map(int, input().split(':'))

print(abs((datetime.date(y1, m1, d1) - datetime.date(y2, m2, d2)).days))
