Estados = {"MA": ["PA", "TO", "PI"], "PI": ["MA", "CE", "PE", "BA", "TO"], "CE": ["PI", "PE", "PB", "RN"],
           "RN": ["CE", "PB"], "PB": ["CE", "RN", "PE"], "PE": ["CE", "PB", "AL", "BA", "PI"], "AL": ["PE", "SE", "BA"],
           "SE": ["AL", "BA"], "BA": ["PI", "PE", "AL", "SE", "ES", "MG", "GO", "TO"]}

estado = input().upper()
if estado in Estados:
    Fronteiras = list(Estados.get(estado))
    NaoFronteiras = []
    for estado in Fronteiras:
        if estado not in Estados.keys():
            NaoFronteiras.append(estado)

if len(NaoFronteiras) > 0:
    print("\n".join(NaoFronteiras))
else:
    print("NENHUM")
