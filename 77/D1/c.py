# 2011
# Maciej Szeptuch
# II UWr
import sys

def factorial(a):
	result = 1
	for i in range(2, a + 1):
		result *= i

	return result

def binomial(n, k):
	if k > n:
		return 0

	return factorial(n) / factorial(n - k) / factorial(k)

boys, girls, group = sys.stdin.read().split()
boys = int(boys)
girls = int(girls)
group = int(group)

print >>sys.stdout, binomial(boys + girls, group) - binomial(boys, 0) * binomial(girls, group) - binomial(boys, 1) * binomial(girls, group - 1) - binomial(boys, 2) * binomial(girls, group - 2) - binomial(boys, 3) * binomial(girls, group - 3) - binomial(girls, 0) * binomial(boys, group)
