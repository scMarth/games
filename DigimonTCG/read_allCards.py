import json, os

workspace = os.path.dirname(os.path.abspath(__file__))
path = workspace + r'\2-5-24_allCards.json'

card_count = 0

with open(path, 'r') as file:
    card_data = json.load(file)

    for card in card_data:
        name = card['name']
        cardnumber = card['cardnumber']

        print('name: {}'.format(name))
        print('cardnumber: {}'.format(cardnumber))

        card_count += 1

print('card count: {}'.format(card_count))


