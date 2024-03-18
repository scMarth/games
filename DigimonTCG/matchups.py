import itertools

v_decks = [
    'Wargreymon',
    'Shinegreymon',
    'Numemon',
    'Alter-S',
    'Belphemon',
    'Leviamon',
    'Machinedramon',
    'Galactimon',
    'Blue Fish',
    'Security Control',
    'Ruin Mode Turbo',
    'Rosemon X',
    'Millith Loop',
    'Deva',
    'Bloomlord',
    'Leopardmon'
]

j_decks = [
    'Gallantmon',
    'Miragegaogamon',
    'Magnamon',
    'Gargomon',
    'Loogamon',
    'Red Hybrid'
]

m_decks = [
    'Imperialdramon',
    'Garurumon'
]

decks = v_decks + j_decks + m_decks

combinations = list(itertools.combinations(decks, 2))

for combo in combinations:
    p1, p2 = combo

    print('{} vs. {}'.format(p1, p2))