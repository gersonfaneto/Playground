class Person:
    def __init__(self, weight, height):
        self._weight = 0
        self.weight = weight
        self._height = 0
        self.height = height

    @property
    def weight(self):
        return self._weight
    @weight.setter
    def weight(self, value):
        assert isinstance(value, float) and 0 < value < 1000, "Peso inválido!"
        self._weight = value

    @property
    def height(self):
        return self._height
    @height.setter
    def height(self, value):
        assert isinstance(value, float) and 0 < value <= 3, "Altura inválida!"
        self._height = value

    def getIMC(self):
        IMC = self.weight / (self.height ** 2)
        return "Abaixo do peso" if IMC <= 18.4 else ("Peso normal" if 18.5 <= IMC <= 24.9 else "Acima do peso")

def main():
    personHeight = float(input())
    personWeight = float(input())

    randomPerson = Person(personWeight, personHeight)
    print(randomPerson.getIMC())

if __name__ == '__main__':
    main()
