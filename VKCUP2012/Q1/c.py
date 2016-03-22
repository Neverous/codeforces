# 2012
# Maciej Szeptuch
# II UWr
import sys
import posixpath as lnx
commands = sys.stdin.read().split("\n")[1:-1]
path = '/'
for command in commands:
	command = command.strip().split()
	if command[0] == 'pwd':
		print path

	elif command[0] == 'cd':
		if command[1][0] == '/':
			path = ''

		path = lnx.normpath(lnx.join(path, command[1]))
		if path[-1] != '/':
			path += '/'
