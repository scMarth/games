import itertools, sys

starting_number = 838
print('starting number: 838')

operations = [
    '+ 165 E',
    '- 777',
    '+ 777 E',
    '* 2',
    '/ 5',
]

paths = {}

for perm in list(itertools.permutations(operations, len(operations))):

    perm_result = starting_number
    valid_path = True

    for op in perm:
        ops = op.split()
        
        if ops[0] == '/':
            perm_result = perm_result / int(ops[1])

        elif ops[0] == '+':
            if len(ops) > 2:
                if perm_result <= int(ops[1]):
                    valid_path = False
            perm_result = perm_result + int(ops[1])

        elif ops[0] == '-':
            perm_result = perm_result - int(ops[1])

        elif ops[0] == '*':
            perm_result = perm_result * int(ops[1])
        else:
            print('bad operation, check input')

    if valid_path:
        paths[perm_result] = perm


for result in reversed(sorted(paths)):
    print('{} => {}'.format(paths[result], result))