import json, os, sys, datetime


script_dir = os.path.dirname(os.path.abspath(__file__))
path = script_dir + r'\purple_digimon_data.json'

def print_to_file(input_data):
    with open(output_filepath, 'a', encoding="utf-8") as file:
        file.write('{}\n'.format(input_data))

# output file name
output_filename = 'card_data_' + datetime.date.today().strftime('%#m-%#d-%Y') + '.txt'
output_filepath = script_dir + '\\' + output_filename

# delete output file if it exists
if os.path.exists(output_filepath):
    os.remove(output_filepath)





card_count = 0

with open(path, 'r') as file:
    card_data = json.load(file)

    keys = ['name', 'cardnumber', 'soureeffect']

    for card in card_data:
        

        for key in keys:
            print_to_file('{} : {}'.format(key, card[key]))


        print_to_file('')

        # for key in card:
        #     print_to_file('{} : {}'.format(key, card[key]))


        print_to_file('')

        # sys.exit()

        card_count += 1

print_to_file('card count: {}'.format(card_count))


