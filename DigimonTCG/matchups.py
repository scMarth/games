import itertools, random

v_decks = [
    'Machinedramon',
    'Galactimon',
    'Numemon',
    'Atler-S',
    'Shinegreymon',
    'Wargreymon',
    'Belphemon',
    'Leviamon',
    'ShogunGekomon',
    'Security Control',
    'Shinegreymon Ruin Mode',
    'Millith Loop',
    'Alphamon',
    'Yellow Vaccine',
    'Marcus Hybrid',
    'Rosemon X',
    'Bloomlord',
    'Dank Masters',
    'Blackwargreymon',
    'RustyLeopard',
    'GreenYellowSecCon'
]

j_decks = [
    'Gallantmon',
    'Miragegaogamon',
    'Magnamon',
    'Gargomon',
    'Loogamon',
    'Red Hybrid',
    'Beelzemon',
    'Commandramon',
    'GraceNova',
    'Beelstarmon',
]

m_decks = [
    'Imperialdramon',
    'Garurumon'
]

decks = v_decks + j_decks + m_decks

combinations = list(itertools.combinations(decks, 2))

combos = []

for combo in combinations:
    p1, p2 = combo

    matchup = '{} vs. {}'.format(p1, p2)

    combos.append(matchup)

# print random matchup
# print(random.choice(combos))

for combo in combos:
    print(combo)

