import itertools, sys, re

starting_number = 723
print('starting number: {}'.format(starting_number))

# Note: 'E 132' means there is an enemy with 132 atk
inputs = '''
x 2
/ 2
e 545
/ 3
x 5
'''

m = re.findall('[^$]+?\n', inputs, re.S)
operations = []
for match in m:
    x = match.split()
    operations.append(' '.join(x))

paths = {}

for perm in list(itertools.permutations(operations, len(operations))):

    perm_result = starting_number
    valid_path = True

    for op in perm:
        ops = op.split()
        
        if ops[0] == '/':
            perm_result = perm_result / int(ops[1])

        elif ops[0] == 'E' or ops[0] == 'e':
            if perm_result <= int(ops[1]):
                valid_path = False
            perm_result = perm_result + int(ops[1])
        elif ops[0] == '+':
            perm_result = perm_result + int(ops[1])

        elif ops[0] == '-':
            perm_result = perm_result - int(ops[1])

        elif ops[0] == '*' or ops[0] == 'x' or ops[0] == 'X':
            perm_result = perm_result * int(ops[1])

        else:
            print('bad operation, check input')

    if valid_path:
        paths[perm_result] = perm


for result in reversed(sorted(paths)):
    print('{} => {}'.format(paths[result], result))