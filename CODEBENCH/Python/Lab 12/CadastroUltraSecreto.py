class Account:
    def __init__(self, userName, emailAdress, accountPassword):
        self._userName = ""
        self.userName = userName
        self._emailAdress = ""
        self.emailAdress = emailAdress
        self._accountPassword = ""
        self.accountPassword = accountPassword

    @property
    def userName(self):
        return self._userName
    @userName.setter
    def userName(self, value):
        assert isinstance(value, str), "Nome de usuário inválido!"
        self._userName = value

    @property
    def emailAdress(self):
        return self._emailAdress
    @emailAdress.setter
    def emailAdress(self, value):
        assert isinstance(value, str), "Email inválido!"
        self._emailAdress = value

    @property
    def accountPassword(self):
        return self._accountPassword
    @accountPassword.setter
    def accountPassword(self, value):
        assert isinstance(value, str), "Senha inválida!"
        self._accountPassword = value

def registerAccounts(n):
    dic = {}
    for i in range(n):
        randomUser = Account(input(), input(), input())
        while randomUser.emailAdress in dic:
            print("E-mail ja cadastrado")
            randomUser = Account(input(), input(), input())
        else:
            dic[randomUser.emailAdress] = [randomUser.userName, randomUser.accountPassword]
    return dic

def main():
    qtAccounts = int(input())
    userAccounts = registerAccounts(qtAccounts)

    targetUser = input()
    if targetUser in userAccounts:
        print(userAccounts[targetUser][0])
    else:
        print("E-mail nao cadastrado")

if __name__ == '__main__':
    main()
