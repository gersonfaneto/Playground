class BankAccount:
    accountId = 1
    def __init__(self, clientName, extraServices, accountBalance):
        self._accountNumber = BankAccount.accountId
        BankAccount.accountId += 1
        self._clientName = ""
        self.clientName = clientName
        self._extraServices = False
        self.extraServices = extraServices
        self._accountBalance = 0
        self.accountBalance = accountBalance

    def __repr__(self):
        return "{}, {} servicos extras, possui {:.2f} reais".format(self.clientName,\
        "com" if self.extraServices else "sem", self.accountBalance)

    @property
    def clientName(self):
        return self._clientName
    @clientName.setter
    def clientName(self, value):
        assert isinstance(value, str) and 0 < len(value) <= 50, "Nome invállido!"
        self._clientName = value

    @property
    def extraServices(self):
        return self._extraServices
    @extraServices.setter
    def extraServices(self, value):
        assert isinstance(value, bool), "Valor inválido!"
        self._extraServices = value

    @property
    def accountBalance(self):
        return self._accountBalance
    @accountBalance.setter
    def accountBalance(self, value):
        assert isinstance(value, float), "Saldo inválido!"
        self._accountBalance = value

def registerAccount():
    bankAccounts = []
    for i in range(3):
        clientName = input()
        extraServices = eval(input())
        accountBalance = float(input())
        client = BankAccount(clientName, extraServices, accountBalance)
        bankAccounts.append(client)
    return bankAccounts

def main():
    bankClients = registerAccount()
    for client in sorted(bankClients, key = lambda x: x.accountBalance):
        if client.accountBalance < 100:
            print(client)
            client.accountBalance += 200

    for client in sorted(bankClients, key = lambda x: x.accountBalance):
        if client.extraServices:
            client.accountBalance -= 50
        else:
            client.accountBalance -= 10

        if client.accountBalance < 1000:
                print(client)

if __name__ == '__main__':
    main()
