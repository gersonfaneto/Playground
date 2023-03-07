Estados = {"MA": ["PA", "TO", "PI"], "PI": ["MA", "CE", "PE", "BA", "TO"], "CE": ["PI", "PE", "PB", "RN"],
           "RN": ["CE", "PB"], "PB": ["CE", "RN", "PE"], "PE": ["CE", "PB", "AL", "BA", "PI"], "AL": ["PE", "SE", "BA"],
           "SE": ["AL", "BA"], "BA": ["PI", "PE", "AL", "SE", "ES", "MG", "GO", "TO"]}


estado = input().upper()
if estado in Estados:
    Fronteiras = []
    Lista = list(Estados.get(estado))
    for i in range(len(Lista)):
        if Lista[i] in Estados:
            print(Lista[i])

