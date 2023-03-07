class Coordinates:
    def __init__(self, xValue = 0, yValue = 0):
        self._xValue = 0
        self.xValue = xValue
        self._yValue = 0
        self.yValue = yValue

    @property
    def xValue(self):
        return self._xValue
    @xValue.setter
    def xValue(self, value):
        assert isinstance(value, float), "Valor inválido!"
        self._xValue = value

    @property
    def yValue(self):
        return self._yValue
    @yValue.setter
    def yValue(self, value):
        assert isinstance(value, float), "Valor inválido!"
        self._yValue = value

    def __repr__(self):
        return "({:.0f}, {:.0f})".format(self.xValue, self.yValue)

def main():
    originalX, originalY = map(float, input().split(","))
    randomPoint = Coordinates(originalX, originalY)
    print(randomPoint)

    randomPoint.xValue, randomPoint.yValue = map(float, input().split(","))
    print(randomPoint)

    otherX, otherY = map(float, input().split(","))
    otherPoint = Coordinates(otherX, otherY)
    distBtwPoints = ((otherPoint.xValue - randomPoint.xValue) ** 2 + (otherPoint.yValue - randomPoint.yValue) ** 2) ** 0.5
    print("{:.2f}".format(distBtwPoints))

if __name__ == '__main__':
    main()
