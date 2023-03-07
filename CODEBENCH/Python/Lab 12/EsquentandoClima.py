class Temperature:
    def __init__(self, temperature, scale):
        self._temperature = 0
        self.temperature = temperature
        self._scale = 0
        self.scale = scale

    @property
    def temperature(self):
        return self._temperature
    @temperature.setter
    def temperature(self, value):
        assert isinstance(value, float), "Temperatura inválida!"
        self._temperature = value

    @property
    def scale(self):
        return self._scale
    @scale.setter
    def scale(self, value):
        assert isinstance(value, str) and value in "FC", "Escala inválida!"
        self._scale = value

    def convert(self):
        C = (5 / 9) * (self.temperature - 32)
        F = (self.temperature * (9 / 5)) + 32
        return "{} C".format(round(C, 1)) if self.scale == "F" else "{} F".format(round(F, 1))

    def __repr__(self):
        return "{} {} = {}".format(self.temperature, self.scale, self.convert())

def main():
    chosenTemperature = float(input())
    chosenScale = input()

    convertedTemp = Temperature(chosenTemperature, chosenScale)
    print(convertedTemp)

if __name__ == '__main__':
    main()
